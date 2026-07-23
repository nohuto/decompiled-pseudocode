/*
 * XREFs of sub_14028F080 @ 0x14028F080
 * Callers:
 *     sub_14028E238 @ 0x14028E238 (sub_14028E238.c)
 *     sub_14028E8E0 @ 0x14028E8E0 (sub_14028E8E0.c)
 *     sub_14028EDD0 @ 0x14028EDD0 (sub_14028EDD0.c)
 *     sub_1402CF630 @ 0x1402CF630 (sub_1402CF630.c)
 *     sub_1402E5D90 @ 0x1402E5D90 (sub_1402E5D90.c)
 *     sub_14033E5D0 @ 0x14033E5D0 (sub_14033E5D0.c)
 *     sub_14036B408 @ 0x14036B408 (sub_14036B408.c)
 *     sub_1403C8D10 @ 0x1403C8D10 (sub_1403C8D10.c)
 *     sub_14057FA8C @ 0x14057FA8C (sub_14057FA8C.c)
 *     sub_1405A42BC @ 0x1405A42BC (sub_1405A42BC.c)
 *     sub_1405A645C @ 0x1405A645C (sub_1405A645C.c)
 *     sub_1405B4BA8 @ 0x1405B4BA8 (sub_1405B4BA8.c)
 *     sub_1405BBD5C @ 0x1405BBD5C (sub_1405BBD5C.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_14031D9B0 @ 0x14031D9B0 (sub_14031D9B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14028F080(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, _DWORD *a6)
{
  unsigned __int64 v10; // rdi
  __int64 v11; // rbp
  int v12; // eax
  unsigned __int64 v13; // rax
  char v14; // r9
  char *v15; // rbx
  int v16; // eax
  int v17; // edx
  __int64 result; // rax
  __int128 v19; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v20[22]; // [rsp+30h] [rbp-F8h] BYREF

  v19 = 0LL;
  memset(v20, 0, sizeof(v20));
  v10 = a1 << 25 >> 16;
  v11 = a2 << 25 >> 16;
  v12 = 2145;
  if ( (a5 & 1) != 0 )
    v12 = 2273;
  LODWORD(v20[0]) = v12;
  if ( (a5 & 2) != 0 )
    LODWORD(v20[0]) = v12 | 0x200;
  v13 = sub_1402CFEB0(v10);
  if ( v13 < 0xFFFF800000000000uLL || v13 >= qword_140C540C0 && v13 <= qword_140C51BF0 )
    v15 = (char *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1664LL);
  else
    v15 = sub_14026DFC0(1);
  if ( (v14 & 4) != 0 )
    goto LABEL_12;
  v16 = sub_14031D9B0(v15, v10, 0LL);
  if ( !v16 )
  {
    LODWORD(v20[0]) |= 4u;
LABEL_12:
    v20[2] = a3;
    v20[21] = &v19;
    v20[3] = v15;
    HIBYTE(v20[0]) = a4;
    BYTE4(v20[0]) = BYTE4(v20[0]) & 0xE3 | 4;
    v20[20] = sub_14023E500;
    v20[4] = v10;
    v20[5] = v11;
    sub_14030CF90(v20);
    *a6 = v19;
    return *((_QWORD *)&v19 + 1);
  }
  v17 = v16 - 1;
  result = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *a6 = v17;
  return result;
}
