/*
 * XREFs of MiZeroWithSystemPtes @ 0x1405B2A90
 * Callers:
 *     MiZeroInParallelWorker @ 0x14026C240 (MiZeroInParallelWorker.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiZeroPhysicalPage @ 0x1402359C4 (MiZeroPhysicalPage.c)
 *     MiGetPfnPageSizeIndex @ 0x140235E10 (MiGetPfnPageSizeIndex.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeZeroPages @ 0x140424F50 (KeZeroPages.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 __fastcall MiZeroWithSystemPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int PfnPageSizeIndex; // eax
  unsigned __int64 v7; // rbp
  ULONG_PTR v8; // rbx
  unsigned __int8 *v9; // rdi
  unsigned __int64 v11; // rax
  _QWORD *v12; // rsi
  unsigned __int64 v13; // r15
  int ProtectionPfnCompatible; // eax
  unsigned __int64 ValidPte; // rdi
  __int64 i; // r13
  unsigned __int64 v17; // rbx
  int v18; // eax
  unsigned __int64 j; // rcx
  unsigned __int64 v20; // [rsp+28h] [rbp-120h]
  unsigned __int64 v21; // [rsp+30h] [rbp-118h]
  _QWORD v22[24]; // [rsp+40h] [rbp-108h] BYREF

  if ( _bittest64((const signed __int64 *)(a3 + 40), 0x28u)
    && (PfnPageSizeIndex = MiGetPfnPageSizeIndex(a3), PfnPageSizeIndex <= 2) )
  {
    v7 = MiLargePageSizes[PfnPageSizeIndex];
  }
  else
  {
    v7 = 1LL;
  }
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4);
  if ( !a1 )
  {
    if ( v7 )
    {
      v9 = (unsigned __int8 *)(a3 + 34);
      do
      {
        MiZeroPhysicalPage(v8++, 1, *v9 >> 6);
        v9 += 48;
        --v7;
      }
      while ( v7 );
    }
    return 0LL;
  }
  v11 = v7;
  v12 = (_QWORD *)a1;
  if ( a2 < v7 )
    v11 = a2;
  v21 = v11;
  v13 = (__int64)(a1 << 25) >> 16;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a3);
  ValidPte = MiMakeValidPte(
               a1,
               0xAAAAAAAAAAAAAAABuLL * ((a3 + 0x220000000000LL) >> 4),
               ProtectionPfnCompatible | 0xA0000000);
  v20 = 0LL;
  for ( i = 0LL; v20 < v7; ++v20 )
  {
    v17 = ValidPte;
    if ( MiPteInShadowRange((unsigned __int64)v12) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v18 = 1;
        if ( !HIBYTE(word_140C51864) && (ValidPte & 1) != 0 )
          v17 = ValidPte | 0x8000000000000000uLL;
        goto LABEL_22;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ValidPte & 1) != 0 )
      {
        v17 = ValidPte | 0x8000000000000000uLL;
      }
    }
    v18 = 0;
LABEL_22:
    *v12 = v17;
    if ( v18 )
      MiWritePteShadow((__int64)v12, v17);
    ++v12;
    ++i;
    ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFFF000LL;
    if ( i == a2 )
    {
      memset(v22, 0, 0xB8uLL);
      KeZeroPages((__m128i *)v13, (__int64)((__int64)v12 - a1) >> 3 << 12);
      if ( v20 + 1 == v7 )
        return v21;
      for ( j = 0LL; j < a2; ++j )
        *(_QWORD *)(a1 + 8 * j) = ZeroPte;
      v22[1] = 20LL;
      LODWORD(v22[0]) = 0;
      WORD2(v22[0]) = 0;
      v22[2] = 0LL;
      v22[3] = 0LL;
      MiInsertTbFlushEntry((__int64)v22, v13, a2, 0);
      MiFlushTbList((__int64)v22);
      v12 = (_QWORD *)a1;
      i = 0LL;
    }
  }
  if ( v13 )
    KeZeroPages((__m128i *)v13, (__int64)((__int64)v12 - a1) >> 3 << 12);
  return v21;
}
