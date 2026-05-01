/*
 * XREFs of sub_18001AB4C @ 0x18001AB4C
 * Callers:
 *     sub_18001BC8C @ 0x18001BC8C (sub_18001BC8C.c)
 *     sub_18001BE48 @ 0x18001BE48 (sub_18001BE48.c)
 * Callees:
 *     sub_180004C40 @ 0x180004C40 (sub_180004C40.c)
 *     sub_180004CC0 @ 0x180004CC0 (sub_180004CC0.c)
 *     sub_180008980 @ 0x180008980 (sub_180008980.c)
 *     sub_18000A570 @ 0x18000A570 (sub_18000A570.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000AD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     sub_1800191B0 @ 0x1800191B0 (sub_1800191B0.c)
 *     sub_18001ACA0 @ 0x18001ACA0 (sub_18001ACA0.c)
 *     sub_18001B140 @ 0x18001B140 (sub_18001B140.c)
 */

__int64 __fastcall sub_18001AB4C(volatile signed __int32 **a1, unsigned __int64 *a2)
{
  void *v4; // rax
  int v5; // edi
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v10; // [rsp+30h] [rbp+8h] BYREF
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&unk_180026378);
  v11 = v4;
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_5:
    sub_1800191B0(&v11);
    return (unsigned int)v5;
  }
  v6 = sub_18001ACA0(v4);
  v10 = 0LL;
  sub_18001B140(&v10, v6);
  v7 = *a2;
  v8 = v10;
  v11 = 0LL;
  v5 = sub_180004CC0((__int64)v10, v7);
  if ( v5 < 0 )
  {
    sub_18000A570(&v10);
    goto LABEL_5;
  }
  if ( v8 )
    sub_180008980(v8 + 3);
  *a1 = v8;
  if ( v8 )
    sub_180004C40(v8);
  return 0LL;
}
