/*
 * XREFs of sub_18004D790 @ 0x18004D790
 * Callers:
 *     sub_18004DA0C @ 0x18004DA0C (sub_18004DA0C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_18004D234 @ 0x18004D234 (sub_18004D234.c)
 *     sub_18004E9D8 @ 0x18004E9D8 (sub_18004E9D8.c)
 */

__int64 __fastcall sub_18004D790(__int64 *a1, int a2, int a3, unsigned int a4, int a5, __int64 *a6)
{
  __int64 v6; // rdi
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  _QWORD v17[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18[3]; // [rsp+40h] [rbp-18h] BYREF

  v6 = *a1;
  if ( !*a1 )
  {
    v11 = sub_18004D234(a6, v18);
    v12 = *v11;
    v13 = v11[1];
    *v11 = 0LL;
    v11[1] = 0LL;
    v17[0] = *a1;
    v14 = a1[1];
    *a1 = v12;
    v17[1] = v14;
    a1[1] = v13;
    sub_180010910((__int64)v17);
    sub_180010910((__int64)v18);
    sub_18002BCC0(*a1, 8, 0);
    v6 = *a1;
  }
  v15 = sub_18004E9D8(8LL, a4);
  return sub_180096C7C(v6, a2, a3, v15, a5, 8);
}
