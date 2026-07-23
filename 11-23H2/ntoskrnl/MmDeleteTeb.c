/*
 * XREFs of MmDeleteTeb @ 0x14076EDBC
 * Callers:
 *     PspInsertThread @ 0x14073F08C (PspInsertThread.c)
 *     PspAllocateThread @ 0x140740BC0 (PspAllocateThread.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x14076EE74 (MiFreeToSubAllocatedRegion.c)
 */

__int64 __fastcall MmDeleteTeb(_KPROCESS *a1, unsigned __int64 a2)
{
  __int64 *v3; // rax
  int v5; // [rsp+20h] [rbp-48h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v6; // [rsp+28h] [rbp-40h] BYREF

  memset(&v6, 0, sizeof(v6));
  KiStackAttachProcess(a1, 0, (__int64)&v6);
  v3 = MiObtainReferencedVadEx(a2, 0, &v5);
  if ( v3 )
    MiFreeToSubAllocatedRegion(v3);
  return KiUnstackDetachProcess(&v6);
}
