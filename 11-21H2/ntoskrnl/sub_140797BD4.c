/*
 * XREFs of sub_140797BD4 @ 0x140797BD4
 * Callers:
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 *     sub_140790CA8 @ 0x140790CA8 (sub_140790CA8.c)
 *     sub_140792BF0 @ 0x140792BF0 (sub_140792BF0.c)
 *     sub_140797ACC @ 0x140797ACC (sub_140797ACC.c)
 *     sub_140854CB8 @ 0x140854CB8 (sub_140854CB8.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140797CE4 @ 0x140797CE4 (sub_140797CE4.c)
 */

char __fastcall sub_140797BD4(unsigned int *a1, _QWORD *a2)
{
  int v4; // [rsp+20h] [rbp-D8h]
  int v5; // [rsp+28h] [rbp-D0h]
  int v6; // [rsp+30h] [rbp-C8h]
  int v7; // [rsp+38h] [rbp-C0h]
  int v8; // [rsp+40h] [rbp-B8h]
  int v9; // [rsp+48h] [rbp-B0h]
  int v10; // [rsp+50h] [rbp-A8h]
  int v11; // [rsp+58h] [rbp-A0h]
  int v12; // [rsp+60h] [rbp-98h]
  int v13; // [rsp+68h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-88h] BYREF
  WCHAR SourceString[40]; // [rsp+80h] [rbp-78h] BYREF

  v13 = *((unsigned __int8 *)a1 + 15);
  v12 = *((unsigned __int8 *)a1 + 14);
  v11 = *((unsigned __int8 *)a1 + 13);
  v10 = *((unsigned __int8 *)a1 + 12);
  v9 = *((unsigned __int8 *)a1 + 11);
  v8 = *((unsigned __int8 *)a1 + 10);
  v7 = *((unsigned __int8 *)a1 + 9);
  v6 = *((unsigned __int8 *)a1 + 8);
  v5 = *((unsigned __int16 *)a1 + 3);
  v4 = *((unsigned __int16 *)a1 + 2);
  sub_1402E1280(
    SourceString,
    0x4CuLL,
    L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
    *a1,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    0LL,
    0LL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  sub_140797CE4(&DestinationString);
  if ( *a2 )
    return 1;
  *a2 = qword_140D00C10;
  return 0;
}
