/*
 * XREFs of MiInitializeEnclaveMetadataPage @ 0x140B99C44
 * Callers:
 *     MiCreateEnclaveRegions @ 0x140B45444 (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiSetPfnBlink @ 0x1402DF340 (MiSetPfnBlink.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     KeCreateEnclaveMetadataPage @ 0x140570AE0 (KeCreateEnclaveMetadataPage.c)
 *     MiAllocateEnclavePages @ 0x1406472E8 (MiAllocateEnclavePages.c)
 *     MiReturnEnclavePage @ 0x140648F5C (MiReturnEnclavePage.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 MiInitializeEnclaveMetadataPage()
{
  ULONG_PTR v0; // rdi
  unsigned __int64 v1; // rbp
  char *Pool; // rax
  void *v3; // rsi
  __int64 EnclavePages; // rax
  __int64 v5; // rbx
  unsigned __int64 ValidPte; // rbx
  int v7; // r14d
  __int64 v8; // r8
  __int64 result; // rax

  v0 = MiReservePtes((__int64)&qword_140C69940, 1u);
  if ( !v0 )
    return 0LL;
  v1 = -1LL;
  Pool = (char *)MiAllocatePool(64, 0x50uLL, 0x4D424D45u);
  v3 = Pool;
  if ( Pool )
  {
    *(_DWORD *)Pool = 512;
    *((_QWORD *)Pool + 1) = Pool + 16;
    Pool[16] |= 1u;
    EnclavePages = MiAllocateEnclavePages(
                     (__int64)MiSystemPartition,
                     *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192)
                                         + 138LL),
                     0,
                     1LL);
    v5 = EnclavePages;
    if ( !EnclavePages )
    {
LABEL_15:
      ExFreePoolWithTag(v3, 0);
      if ( v1 != -1LL )
        MiReturnEnclavePage(v1);
      goto LABEL_17;
    }
    MiSetPfnBlink(EnclavePages, 0LL, 0);
    v1 = 0xAAAAAAAAAAAAAAABuLL * ((v5 + 0x220000000000LL) >> 4);
    ValidPte = MiMakeValidPte(v0, v1, 3221225476LL);
    v7 = 0;
    if ( MiPteInShadowRange(v0) )
    {
      if ( MiPteHasShadow() )
      {
        v7 = 1;
        if ( HIBYTE(word_140C66CFC) )
          goto LABEL_11;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_11;
      }
      if ( (ValidPte & 1) != 0 )
        ValidPte |= 0x8000000000000000uLL;
    }
LABEL_11:
    *(_QWORD *)v0 = ValidPte;
    if ( v7 )
      MiWritePteShadow(v0, ValidPte, v8);
    if ( (int)KeCreateEnclaveMetadataPage() >= 0 )
    {
      qword_140C698A0 = 0LL;
      result = 1LL;
      qword_140C69890 = (__int64)(v0 << 25) >> 16;
      qword_140C69898 = (__int64)v3;
      dword_140C698A8 = 0;
      return result;
    }
    goto LABEL_15;
  }
LABEL_17:
  MiReleasePtes((__int64)&qword_140C69940, (__int64 *)v0, 1u);
  return 0LL;
}
