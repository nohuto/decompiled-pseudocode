/*
 * XREFs of sub_18008E8B8 @ 0x18008E8B8
 * Callers:
 *     sub_18008DC1C @ 0x18008DC1C (sub_18008DC1C.c)
 *     sub_18008E160 @ 0x18008E160 (sub_18008E160.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001C680 @ 0x18001C680 (sub_18001C680.c)
 *     sub_180024944 @ 0x180024944 (sub_180024944.c)
 *     sub_180029824 @ 0x180029824 (sub_180029824.c)
 *     sub_18006F6C0 @ 0x18006F6C0 (sub_18006F6C0.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 */

char __fastcall sub_18008E8B8(__int64 a1)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 **v4; // rsi
  __int64 *v5; // rbx
  char *v6; // rax
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]

  v2 = sub_18008141C(a1);
  v3 = sub_180024944(v2, &v8);
  v4 = (__int64 **)(a1 + 1832);
  sub_180011020((_QWORD *)(a1 + 1832), v3);
  if ( v9 )
    sub_180010530(v9);
  v5 = *v4;
  v6 = sub_18001C680((char *)&v8, (_QWORD *)(a1 + 24), " DepthBuffer");
  sub_180029824((__int64)v5, (void **)v6);
  return sub_18006F6C0(*v4, *(_DWORD *)(a1 + 1940), *(_DWORD *)(a1 + 1940), 1u, 0, 0LL);
}
