/*
 * XREFs of sub_1406E9488 @ 0x1406E9488
 * Callers:
 *     sub_1407920F0 @ 0x1407920F0 (sub_1407920F0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_14075A30C @ 0x14075A30C (sub_14075A30C.c)
 *     sub_14075A480 @ 0x14075A480 (sub_14075A480.c)
 */

NTSTATUS __fastcall sub_1406E9488(unsigned __int64 a1)
{
  NTSTATUS result; // eax
  HANDLE KeyHandle; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING ValueName; // [rsp+28h] [rbp-50h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h] BYREF

  KeyHandle = 0LL;
  *(_QWORD *)&ValueName.Length = 2228224LL;
  ValueName.Buffer = (wchar_t *)&v5;
  sub_14075A480(a1, &ValueName);
  result = sub_14075A30C((a1 >> 4) & 3, &KeyHandle);
  if ( result >= 0 )
    return ZwDeleteValueKey(KeyHandle, &ValueName);
  return result;
}
