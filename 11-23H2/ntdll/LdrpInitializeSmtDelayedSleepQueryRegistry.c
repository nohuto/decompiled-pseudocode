/*
 * XREFs of LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x18007F85C
 * Callers:
 *     LdrpInitializeSmtDelayedSleep @ 0x18007F7A4 (LdrpInitializeSmtDelayedSleep.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 */

__int64 __fastcall LdrpInitializeSmtDelayedSleepQueryRegistry(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  _BYTE v5[16]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v6[4]; // [rsp+40h] [rbp-68h] BYREF
  int v7; // [rsp+44h] [rbp-64h]
  int v8; // [rsp+48h] [rbp-60h]
  int v9; // [rsp+4Ch] [rbp-5Ch]

  result = NtQueryValueKey(a1, a2, 2LL, v6, 80, v5);
  if ( (int)result >= 0 && v7 == 4 && v8 == 4 )
    *a3 = v9;
  return result;
}
