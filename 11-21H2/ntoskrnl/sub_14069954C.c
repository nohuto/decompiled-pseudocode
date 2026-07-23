/*
 * XREFs of sub_14069954C @ 0x14069954C
 * Callers:
 *     ExQueryFastCacheDevLicense @ 0x140699500 (ExQueryFastCacheDevLicense.c)
 * Callees:
 *     sub_1402201F8 @ 0x1402201F8 (sub_1402201F8.c)
 *     sub_14022020C @ 0x14022020C (sub_14022020C.c)
 *     sub_140699698 @ 0x140699698 (sub_140699698.c)
 *     sub_1406E295C @ 0x1406E295C (sub_1406E295C.c)
 */

__int64 __fastcall sub_14069954C(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING v8; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  v7[0] = 9830548LL;
  v6[0] = 7733364LL;
  v6[1] = L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
  *a2 = 0xFFFF;
  v7[1] = L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AppModelUnlock";
  v8 = 0LL;
  DestinationString = 0LL;
  v4 = sub_1406E295C(
         L"AppxPolicies",
         L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx",
         &DestinationString);
  if ( v4 >= 0 )
  {
    v4 = sub_140699698(&DestinationString, a1, a2);
    if ( v4 >= 0 )
    {
      if ( !sub_1402201F8() || *a2 == 0xFFFF && (v4 = sub_140699698(v6, a1, a2), v4 >= 0) )
      {
        if ( *a2 == 0xFFFF )
        {
          v4 = sub_1406E295C(
                 L"AppModelUnlock",
                 L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\AppModelUnlock",
                 &v8);
          if ( v4 >= 0 )
          {
            v4 = sub_140699698(&v8, a1, a2);
            if ( v4 >= 0 && sub_1402201F8() && *a2 == 0xFFFF )
              v4 = sub_140699698(v7, a1, a2);
          }
        }
      }
    }
  }
  sub_14022020C((__int64)&v8);
  sub_14022020C((__int64)&DestinationString);
  return (unsigned int)v4;
}
