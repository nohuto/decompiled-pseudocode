/*
 * XREFs of sub_18008E7A8 @ 0x18008E7A8
 * Callers:
 *     sub_18008DC1C @ 0x18008DC1C (sub_18008DC1C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001085C @ 0x18001085C (sub_18001085C.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001C680 @ 0x18001C680 (sub_18001C680.c)
 *     sub_1800283EC @ 0x1800283EC (sub_1800283EC.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 */

__int64 __fastcall sub_18008E7A8(__int64 a1, char a2)
{
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 v6; // rbx
  char *v7; // rax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h]

  v4 = sub_18008141C(a1);
  sub_18001085C(v4, &v9);
  v5 = (__int64 *)(a1 + 1912);
  sub_180011020((_QWORD *)(a1 + 1912), &v9);
  if ( v10 )
    sub_180010530(v10);
  v6 = *v5;
  v7 = sub_18001C680((char *)&v9, (_QWORD *)(a1 + 24), " ColorBuffer");
  sub_180029824(v6, (void **)v7);
  return sub_1800283EC(*v5, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), a2, 3, 0LL);
}
