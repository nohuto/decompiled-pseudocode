/*
 * XREFs of VslRevertHotPatch @ 0x14054F4CC
 * Callers:
 *     MiUnapplyDriverHotPatch @ 0x1409779A4 (MiUnapplyDriverHotPatch.c)
 *     MiUnloadHotPatch @ 0x140977B70 (MiUnloadHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslRevertHotPatch(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  __int64 result; // rax
  volatile signed __int32 *v7; // rcx
  _QWORD v8[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a2;
  v5 = a3;
  memset(v8, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140C487CC);
  v8[1] = a1;
  v8[2] = v3;
  v8[3] = v5;
  result = VslpEnterIumSecureMode(2u, 73, 0, (__int64)v8);
  v7 = (volatile signed __int32 *)&unk_140C487D0;
  if ( (int)result < 0 )
    v7 = (volatile signed __int32 *)&unk_140C487D4;
  _InterlockedIncrement(v7);
  return result;
}
