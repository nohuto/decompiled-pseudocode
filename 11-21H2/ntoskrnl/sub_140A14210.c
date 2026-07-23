/*
 * XREFs of sub_140A14210 @ 0x140A14210
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A142D0 @ 0x140A142D0 (sub_140A142D0.c)
 *     sub_140A17D10 @ 0x140A17D10 (sub_140A17D10.c)
 */

__int64 __fastcall sub_140A14210(int a1, int a2, int a3, __int64 a4)
{
  int v7; // ebx
  _WORD v9[2]; // [rsp+30h] [rbp-18h] BYREF
  _WORD v10[10]; // [rsp+34h] [rbp-14h] BYREF

  v10[0] = 0;
  v9[0] = 0;
  v7 = sub_140A142D0(v10, v9, a4);
  if ( v7 < 0 || (v7 = sub_140A17D10(a1, a2, a3, v10[0], (__int64)v9), v7 < 0) )
    sub_1406E0C3C(1LL, (__int64)"SdbpGetPathSystem");
  return (unsigned int)v7;
}
