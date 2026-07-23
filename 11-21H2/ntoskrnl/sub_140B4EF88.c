/*
 * XREFs of sub_140B4EF88 @ 0x140B4EF88
 * Callers:
 *     sub_1403B83F0 @ 0x1403B83F0 (sub_1403B83F0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     sub_14093E520 @ 0x14093E520 (sub_14093E520.c)
 */

NTSTATUS __fastcall sub_140B4EF88(HANDLE *a1)
{
  NTSTATUS result; // eax
  int v3; // [rsp+30h] [rbp-40h] BYREF
  __int64 Data; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v6[4]; // [rsp+50h] [rbp-20h] BYREF

  Data = 0LL;
  ValueName.Buffer = L"DumpInstancePrvBoot";
  v6[0] = 2012912317;
  v6[1] = 1295123289;
  v6[2] = -198680387;
  v6[3] = 1266192359;
  v3 = 8;
  *(_QWORD *)&ValueName.Length = 2621478LL;
  result = sub_14093E520(L"DumpInstance", (__int64)v6, (__int64)&Data, &v3, 0LL);
  if ( result >= 0 )
    return ZwSetValueKey(*a1, &ValueName, 0, 0xBu, &Data, 8u);
  return result;
}
