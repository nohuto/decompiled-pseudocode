/*
 * XREFs of sub_1406BD17C @ 0x1406BD17C
 * Callers:
 *     sub_1406BCE90 @ 0x1406BCE90 (sub_1406BCE90.c)
 * Callees:
 *     sub_1406BDAE4 @ 0x1406BDAE4 (sub_1406BDAE4.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 */

char __fastcall sub_1406BD17C(int a1, int a2, int a3, int a4, __int64 a5, _DWORD *a6)
{
  char v6; // bl
  int v10; // [rsp+40h] [rbp-10h] BYREF
  int v11; // [rsp+44h] [rbp-Ch] BYREF
  int v12; // [rsp+48h] [rbp-8h] BYREF

  v6 = 0;
  v10 = 4;
  v11 = 0;
  v12 = 0;
  if ( (int)sub_14077CD90(qword_140D00AC0, a2, a3, a1, (__int64)&v11, (__int64)&v12, (__int64)&v10, 0) >= 0
    && v11 == 4
    && v10 == 4
    || a5
    && (v10 = 4, (int)sub_1406BDAE4(qword_140D00AC0, a4, a5, a1, (__int64)&v11, (__int64)&v12, (__int64)&v10) >= 0)
    && v11 == 4
    && v10 == 4 )
  {
    v6 = 1;
    *a6 = v12;
  }
  return v6;
}
