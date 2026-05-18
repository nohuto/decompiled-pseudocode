/*
 * XREFs of sub_18004D508 @ 0x18004D508
 * Callers:
 *     sub_18004DA24 @ 0x18004DA24 (sub_18004DA24.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_18004D254 @ 0x18004D254 (sub_18004D254.c)
 *     sub_18004E9D8 @ 0x18004E9D8 (sub_18004E9D8.c)
 */

__int64 __fastcall sub_18004D508(__int64 *a1, int a2, int a3, unsigned int a4, int a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rdi
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // eax
  _QWORD v18[2]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v19[24]; // [rsp+40h] [rbp-18h] BYREF

  v7 = *a1;
  if ( !*a1 )
  {
    v12 = (__int64 *)sub_18004D254(a6, (__int64)v19, a7);
    v13 = *v12;
    v14 = v12[1];
    *v12 = 0LL;
    v12[1] = 0LL;
    v18[0] = *a1;
    v15 = a1[1];
    *a1 = v13;
    v18[1] = v15;
    a1[1] = v14;
    sub_180010910((__int64)v18);
    sub_180010910((__int64)v19);
    sub_18002BCC0(*a1, 8, 0);
    v7 = *a1;
  }
  v16 = sub_18004E9D8(4LL, a4);
  return sub_180096C7C(v7, a2, a3, v16, a5, 4);
}
