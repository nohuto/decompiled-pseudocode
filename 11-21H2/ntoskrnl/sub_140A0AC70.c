/*
 * XREFs of sub_140A0AC70 @ 0x140A0AC70
 * Callers:
 *     sub_1409C599C @ 0x1409C599C (sub_1409C599C.c)
 * Callees:
 *     sub_1402201F8 @ 0x1402201F8 (sub_1402201F8.c)
 *     sub_14022020C @ 0x14022020C (sub_14022020C.c)
 *     sub_140699698 @ 0x140699698 (sub_140699698.c)
 *     sub_1406E295C @ 0x1406E295C (sub_1406E295C.c)
 */

__int64 __fastcall sub_140A0AC70(_BYTE *a1)
{
  int v2; // ebx
  int v3; // eax
  UNICODE_STRING v5; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING v6; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  int v8; // [rsp+60h] [rbp+10h] BYREF

  *a1 = 0;
  *(_QWORD *)&v6.Length = 7733364LL;
  *(_QWORD *)&v5.Length = 2621478LL;
  v6.Buffer = (wchar_t *)L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx";
  v5.Buffer = L"AllowAllTrustedApps";
  v8 = 0xFFFF;
  DestinationString = 0LL;
  v2 = sub_1406E295C(
         L"AppxPolicies",
         L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\Windows\\Appx",
         &DestinationString);
  if ( v2 < 0 )
    goto LABEL_9;
  v2 = sub_140699698(&DestinationString, &v5, &v8);
  if ( v2 < 0 )
    goto LABEL_9;
  if ( sub_1402201F8() )
  {
    v3 = v8;
    if ( v8 != 0xFFFF )
      goto LABEL_7;
    v2 = sub_140699698(&v6, &v5, &v8);
    if ( v2 < 0 )
      goto LABEL_9;
  }
  v3 = v8;
LABEL_7:
  if ( v3 )
    *a1 = 1;
LABEL_9:
  sub_14022020C((__int64)&DestinationString);
  return (unsigned int)v2;
}
