/*
 * XREFs of sub_14038B628 @ 0x14038B628
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407FE774 @ 0x1407FE774 (sub_1407FE774.c)
 *     sub_1407FE79C @ 0x1407FE79C (sub_1407FE79C.c)
 *     sub_1407FE7BC @ 0x1407FE7BC (sub_1407FE7BC.c)
 *     sub_1407FE7DC @ 0x1407FE7DC (sub_1407FE7DC.c)
 *     sub_1407FE82C @ 0x1407FE82C (sub_1407FE82C.c)
 */

__int64 sub_14038B628()
{
  unsigned int v0; // ebx
  unsigned int v2; // [rsp+20h] [rbp-30h] BYREF
  __int128 v3; // [rsp+28h] [rbp-28h] BYREF
  __int64 v4; // [rsp+38h] [rbp-18h]

  v3 = 0LL;
  DWORD2(v3) = 1;
  v4 = 0LL;
  v2 = sub_1407FE7DC(&v3);
  sub_1407FE79C(&v3);
  LODWORD(v4) = 12;
  v0 = sub_1407FE82C(&v3, &v2);
  sub_1407FE7BC(&v3);
  sub_1407FE774(&v3, v2);
  return v0;
}
