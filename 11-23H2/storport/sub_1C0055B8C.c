/*
 * XREFs of sub_1C0055B8C @ 0x1C0055B8C
 * Callers:
 *     sub_1C007AF40 @ 0x1C007AF40 (sub_1C007AF40.c)
 *     sub_1C007BB50 @ 0x1C007BB50 (sub_1C007BB50.c)
 *     sub_1C007BBF8 @ 0x1C007BBF8 (sub_1C007BBF8.c)
 *     sub_1C007BC8C @ 0x1C007BC8C (sub_1C007BC8C.c)
 *     sub_1C007BD64 @ 0x1C007BD64 (sub_1C007BD64.c)
 *     sub_1C007C648 @ 0x1C007C648 (sub_1C007C648.c)
 *     sub_1C007D2D8 @ 0x1C007D2D8 (sub_1C007D2D8.c)
 *     sub_1C007D4BC @ 0x1C007D4BC (sub_1C007D4BC.c)
 *     sub_1C007D734 @ 0x1C007D734 (sub_1C007D734.c)
 *     sub_1C007D8D4 @ 0x1C007D8D4 (sub_1C007D8D4.c)
 *     sub_1C007D974 @ 0x1C007D974 (sub_1C007D974.c)
 *     sub_1C007DA18 @ 0x1C007DA18 (sub_1C007DA18.c)
 *     sub_1C007DF34 @ 0x1C007DF34 (sub_1C007DF34.c)
 *     sub_1C007E6FC @ 0x1C007E6FC (sub_1C007E6FC.c)
 *     sub_1C007F44C @ 0x1C007F44C (sub_1C007F44C.c)
 *     sub_1C007F52C @ 0x1C007F52C (sub_1C007F52C.c)
 *     sub_1C007F690 @ 0x1C007F690 (sub_1C007F690.c)
 *     sub_1C007F7A4 @ 0x1C007F7A4 (sub_1C007F7A4.c)
 *     sub_1C007F988 @ 0x1C007F988 (sub_1C007F988.c)
 *     sub_1C007FA90 @ 0x1C007FA90 (sub_1C007FA90.c)
 * Callees:
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0054F54 @ 0x1C0054F54 (sub_1C0054F54.c)
 */

__int64 __fastcall sub_1C0055B8C(int *a1, const char *a2, char a3, char a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  const char *v7; // rdi
  int v11; // r11d
  int *v12; // rbx
  const wchar_t *v13; // rsi
  char v14; // r11
  const wchar_t *v15; // rcx
  const char *v16; // r8
  const char *v17; // rdx
  const char *v18; // rdi
  int v20; // [rsp+A0h] [rbp-68h]
  __int128 v21; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v22; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v23; // [rsp+C8h] [rbp-40h] BYREF

  v6 = *a1;
  v7 = 0LL;
  v22 = 0LL;
  v20 = -1;
  v23 = 0LL;
  v21 = 0LL;
  if ( v6 == 1431193940 )
  {
    v11 = a1[24];
    v7 = (const char *)a1;
    v12 = (int *)*((_QWORD *)a1 + 3);
    v23 = *(_OWORD *)(a1 + 506);
    v20 = v11;
  }
  else
  {
    v12 = 0LL;
    if ( v6 == 1094997074 )
      v12 = a1;
  }
  v22 = *(_OWORD *)(v12 + 1250);
  v13 = (const wchar_t *)*((_QWORD *)v12 + 627);
  sub_1C0010EE0(*((_QWORD *)v12 + 2), (__int64)&v21);
  if ( (byte_1C0093A03 & 0x20) != 0 )
  {
    v15 = (const wchar_t *)&unk_1C0082788;
    if ( v13 )
      v15 = v13;
    if ( v7 )
    {
      v16 = v7 + 186;
      v17 = v7 + 169;
      v18 = v7 + 160;
    }
    else
    {
      v18 = (const char *)&dword_1C0082784;
      v16 = (const char *)&dword_1C0082784;
      v17 = (const char *)&dword_1C0082784;
    }
    sub_1C0054F54(
      (__int64)v15,
      &stru_1C0088B10,
      (__int64)v16,
      v12[14],
      v14,
      SBYTE1(v20),
      SBYTE2(v20),
      (__int64)&v23,
      (__int64)&v22,
      *((const wchar_t **)&v21 + 1),
      v18,
      v17,
      v16,
      v15,
      a2,
      a3,
      a4,
      a5,
      a6);
  }
  return 0LL;
}
