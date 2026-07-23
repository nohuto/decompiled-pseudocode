/*
 * XREFs of sub_1409AF550 @ 0x1409AF550
 * Callers:
 *     sub_140701218 @ 0x140701218 (sub_140701218.c)
 * Callees:
 *     MmSizeOfMdl @ 0x140231480 (MmSizeOfMdl.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14056B97C @ 0x14056B97C (sub_14056B97C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1409AF550(__int64 Base, __int64 a2, __int64 a3, __int64 a4)
{
  SIZE_T v6; // rax
  struct _MDL *PoolWithTag; // rbx
  int v8; // edi
  _OWORD v10[3]; // [rsp+30h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  sub_14030D5C0(*(_QWORD *)(Base + 544), 0LL, (__int64)v10, a4);
  v6 = MmSizeOfMdl((PVOID)Base, 0x8F0uLL);
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x65537350u);
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * (((unsigned __int16)((Base & 0xFFF) + 6383) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = Base & 0xFFF;
  PoolWithTag->ByteCount = 2288;
  MmProbeAndLockPages(PoolWithTag, 0, IoModifyAccess);
  v8 = sub_14056B97C(Base, (int)PoolWithTag, *(_QWORD *)(Base + 1232), *(_QWORD *)(Base + 1312), a2);
  if ( v8 < 0 )
  {
    MmUnlockPages(PoolWithTag);
    ExFreePoolWithTag(PoolWithTag, 0x65537350u);
  }
  sub_1402D0930((__int64)v10, 0LL);
  return (unsigned int)v8;
}
