/*
 * XREFs of KeSecureProcess @ 0x14056FC80
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     VslInitializeSecureProcess @ 0x14054BD58 (VslInitializeSecureProcess.c)
 */

__int64 __fastcall KeSecureProcess(
        _KPROCESS *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _MDL *a6,
        unsigned __int64 a7)
{
  unsigned int v11; // ebx
  $115DCDF994C6370D29323EAB0E0C9502 v13; // [rsp+40h] [rbp-68h] BYREF

  memset(&v13, 0, sizeof(v13));
  KiStackAttachProcess(a1, 0, (__int64)&v13);
  v11 = VslInitializeSecureProcess(a1->SecureState.SecureHandle, a2, a3, a4, a5, a6, a7);
  KiUnstackDetachProcess(&v13);
  return v11;
}
