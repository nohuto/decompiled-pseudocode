/*
 * XREFs of LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x180083340
 * Callers:
 *     LdrpInitializeSmtDelayedSleep @ 0x180083288 (LdrpInitializeSmtDelayedSleep.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 */

NTSTATUS __fastcall LdrpInitializeSmtDelayedSleepQueryRegistry(void *a1, _UNICODE_STRING *a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength[4]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+40h] [rbp-68h] BYREF
  int v7; // [rsp+44h] [rbp-64h]
  int v8; // [rsp+48h] [rbp-60h]
  int v9; // [rsp+4Ch] [rbp-5Ch]

  result = NtQueryValueKey(a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x50u, ResultLength);
  if ( result >= 0 && v7 == 4 && v8 == 4 )
    *a3 = v9;
  return result;
}
