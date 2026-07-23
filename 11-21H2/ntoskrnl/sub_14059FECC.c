/*
 * XREFs of sub_14059FECC @ 0x14059FECC
 * Callers:
 *     sub_14059EDEC @ 0x14059EDEC (sub_14059EDEC.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140424FC0 @ 0x140424FC0 (sub_140424FC0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeInvalidateRangeAllCaches @ 0x140570E60 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall sub_14059FECC(PMDL MemoryDescriptorList)
{
  unsigned __int64 v2; // rdi
  PVOID MappedSystemVa; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rsi
  __int64 *v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbp
  BOOL v9; // r15d
  unsigned __int64 v10; // rdx
  int v11; // r8d
  bool v12; // zf
  __int64 v13; // rdx
  int v14; // r8d
  bool v15; // zf
  struct _KTHREAD *v16; // rdi
  unsigned int v17; // ecx
  __int64 v18; // rbx
  unsigned int v19; // edx
  int v20; // r9d
  struct _KTHREAD *v21; // rax
  _QWORD v22[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v22, 0, 0xB8uLL);
  if ( byte_140C5072C )
    return;
  v2 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
      + (unsigned __int64)MemoryDescriptorList->ByteCount
      + 4095) >> 12;
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( MappedSystemVa )
  {
    v4 = v2 << 12;
    if ( _bittest64(&qword_140D068D8, 0x24u) )
      sub_140424FC0((__int64)MappedSystemVa, v4);
    else
      KeInvalidateRangeAllCaches(MappedSystemVa, v4);
    MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
    return;
  }
  v5 = (_QWORD *)qword_140C53268;
  v6 = (__int64 *)&MemoryDescriptorList[1];
  LODWORD(v22[1]) = 20;
  v22[3] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = qword_140C53268 << 25 >> 16;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F470, 0LL);
  if ( v2 )
  {
    v9 = sub_140317A80((unsigned __int64)v5);
    do
    {
      v10 = sub_1402CBD10((unsigned __int64)v5, *v6, 536870913);
      v11 = 0;
      if ( !v9 )
        goto LABEL_20;
      if ( (unsigned int)sub_140229550() )
      {
        v11 = 1;
        if ( HIBYTE(word_140C51864) )
          goto LABEL_20;
        v12 = (v10 & 1) == 0;
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
          goto LABEL_20;
        v12 = (v10 & 1) == 0;
      }
      if ( !v12 )
        v10 |= 0x8000000000000000uLL;
LABEL_20:
      *v5 = v10;
      if ( v11 )
        sub_1402294F0((__int64)v5, v10);
      if ( !byte_140C5072C )
      {
        if ( _bittest64(&qword_140D068D8, 0x24u) )
          sub_140424FC0(v8, 4096LL);
        else
          KeInvalidateRangeAllCaches((PVOID)v8, 0x1000u);
      }
      v13 = 0LL;
      v14 = 0;
      if ( !v9 )
        goto LABEL_34;
      if ( (unsigned int)sub_140229550() )
      {
        v14 = 1;
        if ( !HIBYTE(word_140C51864) )
        {
          v15 = (v13 & 1) == 0;
          goto LABEL_32;
        }
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v15 = (v13 & 1) == 0;
LABEL_32:
        if ( !v15 )
          v13 |= 0x8000000000000000uLL;
      }
LABEL_34:
      *v5 = v13;
      if ( v14 )
        sub_1402294F0((__int64)v5, v13);
      sub_1402CF280((__int64)v22, v8, 1LL, 0);
      sub_14032F1B0((__int64)v22);
      ++v6;
      --v2;
    }
    while ( v2 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F470, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C4F470);
  v16 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C4F470 - qword_140C50630 >= 0x8000000000LL )
    v17 = -1;
  else
    v17 = sub_140287F30(*((_QWORD *)v16 + 23));
  _disable();
  v18 = (__int64)v16 + 1696;
  v19 = 0;
  while ( (*(_QWORD *)v18 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C4F470 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v18 + 18)
       || (*(_DWORD *)v18 & 1) != 0
       || *(_DWORD *)(v18 + 8) != v17 )
  {
    ++v19;
    v18 += 96LL;
    if ( v19 >= 6 )
      goto LABEL_48;
  }
  *(_BYTE *)(v18 + 18) = 0;
  if ( !v18 )
  {
LABEL_48:
    if ( (*((_DWORD *)v16 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, (ULONG_PTR)&qword_140C4F470, v17, 0LL);
    _enable();
    goto LABEL_56;
  }
  if ( *(__int64 *)v18 < 0 )
  {
    *(_BYTE *)v18 |= 2u;
    _enable();
    sub_14034EE30(v18);
    _disable();
  }
  v20 = *(_DWORD *)(v18 + 88);
  *(_DWORD *)(v18 + 88) = 0;
  *(_BYTE *)(v18 + 17) = 0;
  *(_QWORD *)v18 = 0LL;
  *((_BYTE *)v16 + 792) |= 1 << *(_BYTE *)(v18 + 16);
  _enable();
  if ( v20 )
    sub_14022B568((ULONG_PTR)v16, (__int64)&qword_140C4F470, v20);
LABEL_56:
  v21 = KeGetCurrentThread();
  v12 = (*((_WORD *)v21 + 243))++ == 0xFFFF;
  if ( v12 && *((struct _KTHREAD **)v21 + 19) != (struct _KTHREAD *)((char *)v21 + 152) )
    KiCheckForKernelApcDelivery();
}
