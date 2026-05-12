/*
 * XREFs of sub_1C007B258 @ 0x1C007B258
 * Callers:
 *     sub_1C0051E04 @ 0x1C0051E04 (sub_1C0051E04.c)
 *     sub_1C0053E90 @ 0x1C0053E90 (sub_1C0053E90.c)
 * Callees:
 *     sub_1C0055B44 @ 0x1C0055B44 (sub_1C0055B44.c)
 *     sub_1C007CEAC @ 0x1C007CEAC (sub_1C007CEAC.c)
 *     sub_1C007D14C @ 0x1C007D14C (sub_1C007D14C.c)
 *     sub_1C007D404 @ 0x1C007D404 (sub_1C007D404.c)
 */

__int64 __fastcall sub_1C007B258(_DWORD **a1)
{
  _DWORD *v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v1 = *a1;
  v7 = 0LL;
  v8 = 0LL;
  v6 = 0;
  v2 = sub_1C007CEAC((_DWORD)v1, 2, 4, 512, (__int64)&v7, (__int64)&v8);
  if ( v2 >= 0 )
  {
    sub_1C0055B44(v1, v7, &v9, &v6);
    if ( v6 )
      v2 = sub_1C007D14C(v1, v3, v4, 0LL);
    else
      v2 = -1073741789;
  }
  sub_1C007D404(v1, &v7, &v8);
  return (unsigned int)v2;
}
