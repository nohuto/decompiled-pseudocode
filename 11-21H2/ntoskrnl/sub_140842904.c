/*
 * XREFs of sub_140842904 @ 0x140842904
 * Callers:
 *     sub_1408411FC @ 0x1408411FC (sub_1408411FC.c)
 *     sub_140841610 @ 0x140841610 (sub_140841610.c)
 *     sub_140842864 @ 0x140842864 (sub_140842864.c)
 *     sub_1408436C0 @ 0x1408436C0 (sub_1408436C0.c)
 *     sub_140963CD0 @ 0x140963CD0 (sub_140963CD0.c)
 *     sub_140A11F60 @ 0x140A11F60 (sub_140A11F60.c)
 *     sub_140A126D0 @ 0x140A126D0 (sub_140A126D0.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140791084 @ 0x140791084 (sub_140791084.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_140842904(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (sub_14079499C(a1, a2) & 0xF000) == 0x5000 )
  {
    v6 = sub_140791084(a1, v4, (__int64)&v9, 8u);
    v7 = v9;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    sub_14079499C(a1, v4);
    sub_1406E0C3C(1LL, (__int64)"SdbReadQWORDTag");
    return a3;
  }
}
