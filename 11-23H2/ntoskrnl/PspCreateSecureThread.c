/*
 * XREFs of PspCreateSecureThread @ 0x1409B1160
 * Callers:
 *     PspInsertThread @ 0x14073F08C (PspInsertThread.c)
 * Callees:
 *     MmSizeOfMdl @ 0x140206EA0 (MmSizeOfMdl.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x140238860 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeSecureThread @ 0x14056F4F0 (KeSecureThread.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspCreateSecureThread(__int64 Base, __int64 a2)
{
  SIZE_T v4; // rax
  struct _MDL *Pool2; // rbx
  int v6; // edi
  $115DCDF994C6370D29323EAB0E0C9502 v8; // [rsp+30h] [rbp-48h] BYREF

  memset(&v8, 0, sizeof(v8));
  KiStackAttachProcess(*(_KPROCESS **)(Base + 544), 0, (__int64)&v8);
  v4 = MmSizeOfMdl((PVOID)Base, 0x910uLL);
  Pool2 = (struct _MDL *)ExAllocatePool2(64LL, v4, 1699967824LL);
  Pool2->Next = 0LL;
  Pool2->Size = 8 * (((unsigned __int16)((Base & 0xFFF) + 6415) >> 12) + 6);
  Pool2->MdlFlags = 0;
  Pool2->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
  Pool2->ByteOffset = Base & 0xFFF;
  Pool2->ByteCount = 2320;
  MmProbeAndLockPages(Pool2, 0, IoModifyAccess);
  v6 = KeSecureThread(Base, (int)Pool2, *(_QWORD *)(Base + 1232), *(_QWORD *)(Base + 1312), a2);
  if ( v6 < 0 )
  {
    MmUnlockPages(Pool2);
    ExFreePoolWithTag(Pool2, 0x65537350u);
  }
  KiUnstackDetachProcess(&v8);
  return (unsigned int)v6;
}
