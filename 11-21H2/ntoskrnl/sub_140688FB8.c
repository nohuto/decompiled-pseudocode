/*
 * XREFs of sub_140688FB8 @ 0x140688FB8
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_140688FB8(__int64 a1, char a2)
{
  NTSTATUS result; // eax
  char v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  char *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_140C03868 > 4 )
  {
    v3 = a2;
    v5 = &v3;
    v7 = 0;
    v6 = 1;
    return sub_14020A9C4((__int64)&dword_140C03868, (unsigned __int8 *)qword_1400296F8, 0LL, 0LL, 3u, &v4);
  }
  return result;
}
