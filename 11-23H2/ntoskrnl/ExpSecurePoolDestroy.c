/*
 * XREFs of ExpSecurePoolDestroy @ 0x14060D4A4
 * Callers:
 *     ExDestroyPool @ 0x1406073B0 (ExDestroyPool.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall ExpSecurePoolDestroy(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  _QWORD v3[14]; // [rsp+30h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  v3[1] = BugCheckParameter2;
  result = VslpEnterIumSecureMode(2u, 80, 0, (__int64)v3);
  if ( (int)result < 0 )
    KeBugCheckEx(0xC2u, 0x10uLL, BugCheckParameter2, (int)result, 0LL);
  return result;
}
