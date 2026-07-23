/*
 * XREFs of sub_1406A904C @ 0x1406A904C
 * Callers:
 *     sub_1406384AC @ 0x1406384AC (sub_1406384AC.c)
 *     sub_1406A8B68 @ 0x1406A8B68 (sub_1406A8B68.c)
 *     sub_1406DC120 @ 0x1406DC120 (sub_1406DC120.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     sub_14081C05C @ 0x14081C05C (sub_14081C05C.c)
 *     KdSystemDebugControl @ 0x14095F510 (KdSystemDebugControl.c)
 *     sub_140982B6C @ 0x140982B6C (sub_140982B6C.c)
 *     sub_1409F5D80 @ 0x1409F5D80 (sub_1409F5D80.c)
 *     sub_1409F6670 @ 0x1409F6670 (sub_1409F6670.c)
 *     sub_1409F66F0 @ 0x1409F66F0 (sub_1409F66F0.c)
 *     sub_1409F6770 @ 0x1409F6770 (sub_1409F6770.c)
 *     sub_1409F67F0 @ 0x1409F67F0 (sub_1409F67F0.c)
 *     sub_1409FCB38 @ 0x1409FCB38 (sub_1409FCB38.c)
 *     sub_1409FE284 @ 0x1409FE284 (sub_1409FE284.c)
 *     sub_1409FF6B0 @ 0x1409FF6B0 (sub_1409FF6B0.c)
 *     sub_1409FFD10 @ 0x1409FFD10 (sub_1409FFD10.c)
 *     sub_140A001D0 @ 0x140A001D0 (sub_140A001D0.c)
 *     sub_140A004F0 @ 0x140A004F0 (sub_140A004F0.c)
 *     sub_140A00A80 @ 0x140A00A80 (sub_140A00A80.c)
 * Callees:
 *     sub_140231450 @ 0x140231450 (sub_140231450.c)
 *     MmSizeOfMdl @ 0x140231480 (MmSizeOfMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406A904C(
        unsigned __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        LOCK_OPERATION a4,
        _QWORD *P,
        struct _MDL **a6)
{
  __int64 v8; // r13
  SIZE_T v10; // rax
  struct _MDL *PoolWithQuotaTag; // rax
  struct _MDL *v12; // rbx
  PVOID MappedSystemVa; // rax

  v8 = a2;
  *P = 0LL;
  *a6 = 0LL;
  v10 = MmSizeOfMdl((PVOID)a1, a2);
  PoolWithQuotaTag = (struct _MDL *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, v10, 0x6F666E49u);
  v12 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    PoolWithQuotaTag->Next = 0LL;
    PoolWithQuotaTag->Size = 8 * ((((a1 & 0xFFF) + v8 + 4095) >> 12) + 6);
    PoolWithQuotaTag->MdlFlags = 0;
    PoolWithQuotaTag->StartVa = (PVOID)(a1 & 0xFFFFFFFFFFFFF000uLL);
    PoolWithQuotaTag->ByteOffset = a1 & 0xFFF;
    PoolWithQuotaTag->ByteCount = v8;
    MmProbeAndLockPages(PoolWithQuotaTag, a3, a4);
    v12->MdlFlags |= 0x2000u;
    if ( (v12->MdlFlags & 5) != 0 )
      MappedSystemVa = v12->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000020u);
    *P = MappedSystemVa;
    if ( MappedSystemVa )
    {
      *a6 = v12;
      return 0LL;
    }
    sub_140231450(v12);
  }
  return 3221225626LL;
}
