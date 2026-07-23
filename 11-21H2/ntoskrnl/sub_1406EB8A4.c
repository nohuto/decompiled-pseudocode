/*
 * XREFs of sub_1406EB8A4 @ 0x1406EB8A4
 * Callers:
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_14036AAC4 @ 0x14036AAC4 (sub_14036AAC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_1406EB8A4(int a1)
{
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  char *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v1 = a1;
  sub_140A48330(a1);
  byte_140C4EF1C = v1;
  if ( (unsigned int)dword_140C03A00 > 5 )
  {
    v9 = 0;
    v7 = &v5;
    v5 = v1;
    v8 = 1;
    sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)&dword_14002F0EC, 0LL, 0LL, 3u, &v6);
  }
  sub_14036AAC4((__int64)&unk_140C20B80, DelayedWorkQueue);
  return sub_140A47CF8(v3, v2);
}
