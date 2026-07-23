/*
 * XREFs of KeEnumerateKernelStackSegments @ 0x140222B70
 * Callers:
 *     PspReaper @ 0x140222A80 (PspReaper.c)
 *     MmOutPageKernelStack @ 0x140222E50 (MmOutPageKernelStack.c)
 *     DbgkpLkmdSnapKernelStack @ 0x14053C28C (DbgkpLkmdSnapKernelStack.c)
 *     IoAddProcessThreadsToDump @ 0x14055CBC0 (IoAddProcessThreadsToDump.c)
 *     PspThreadDelete @ 0x1407475B0 (PspThreadDelete.c)
 *     PsDereferenceKernelStack @ 0x1407EA360 (PsDereferenceKernelStack.c)
 * Callees:
 *     KeGetNextKernelStackSegment @ 0x140222C2C (KeGetNextKernelStackSegment.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KeEnumerateKernelStackSegments(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, _OWORD *, __int64),
        __int64 a3)
{
  __int64 v6; // r8
  char NextKernelStackSegment; // bl
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // r9
  _OWORD v11[4]; // [rsp+20h] [rbp-59h] BYREF
  _OWORD v12[4]; // [rsp+60h] [rbp-19h] BYREF

  memset(v11, 0, sizeof(v11));
  LOBYTE(v6) = 1;
  KeGetNextKernelStackSegment(a1, v11, v6);
  do
  {
    v12[0] = v11[0];
    v12[1] = v11[1];
    v12[2] = v11[2];
    v12[3] = v11[3];
    NextKernelStackSegment = KeGetNextKernelStackSegment(a1, v11, 0LL);
    result = a2(v8, v12, a3);
  }
  while ( NextKernelStackSegment );
  if ( (*(_DWORD *)(a1 + 116) & 0x800000) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 96);
    memset(&v11[2], 0, 32);
    *(_QWORD *)&v11[0] = v10 + (unsigned int)KeDecoupledStateSaveAreaLength;
    *((_QWORD *)&v11[0] + 1) = *(_QWORD *)&v11[0] - 12288LL;
    *((_QWORD *)&v11[1] + 1) = *(_QWORD *)&v11[0];
    *(_QWORD *)&v11[1] = v10;
    return a2(a1, v11, a3);
  }
  return result;
}
