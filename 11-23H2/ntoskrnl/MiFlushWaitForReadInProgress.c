/*
 * XREFs of MiFlushWaitForReadInProgress @ 0x140636488
 * Callers:
 *     MiFlushSectionInternal @ 0x1402759E0 (MiFlushSectionInternal.c)
 * Callees:
 *     MiWaitForCollidedFaultComplete @ 0x1402EF298 (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x1402EF5A8 (MiObtainProtoReference.c)
 *     MiInitializePageFaultPacket @ 0x1402EF9CC (MiInitializePageFaultPacket.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiFlushWaitForReadInProgress(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int v9[4]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v10[18]; // [rsp+40h] [rbp-B8h] BYREF

  memset(v10, 0, 0x88uLL);
  v9[0] = 1;
  MiInitializePageFaultPacket(0LL, 0LL, 0, 0LL, v10);
  MiObtainProtoReference(a2, 1LL, v6, v7);
  return MiWaitForCollidedFaultComplete(v10, a1, a2, a3, v9);
}
