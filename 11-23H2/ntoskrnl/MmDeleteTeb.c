/*
 * XREFs of MmDeleteTeb @ 0x14076EBCC
 * Callers:
 *     PspInsertThread @ 0x14073EE9C (PspInsertThread.c)
 *     PspAllocateThread @ 0x1407409D0 (PspAllocateThread.c)
 *     PspExitThread @ 0x14076DA2C (PspExitThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D600 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9C0 (KiUnstackDetachProcess.c)
 *     MiObtainReferencedVadEx @ 0x140274CB0 (MiObtainReferencedVadEx.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     MiFreeToSubAllocatedRegion @ 0x14076EC84 (MiFreeToSubAllocatedRegion.c)
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
