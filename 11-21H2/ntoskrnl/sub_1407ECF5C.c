/*
 * XREFs of sub_1407ECF5C @ 0x1407ECF5C
 * Callers:
 *     sub_14075C380 @ 0x14075C380 (sub_14075C380.c)
 *     sub_140791640 @ 0x140791640 (sub_140791640.c)
 *     sub_1407ECF00 @ 0x1407ECF00 (sub_1407ECF00.c)
 *     sub_1408411FC @ 0x1408411FC (sub_1408411FC.c)
 *     sub_140841610 @ 0x140841610 (sub_140841610.c)
 *     sub_1408437A4 @ 0x1408437A4 (sub_1408437A4.c)
 *     sub_1409638AC @ 0x1409638AC (sub_1409638AC.c)
 *     sub_140963CD0 @ 0x140963CD0 (sub_140963CD0.c)
 *     sub_140A11F10 @ 0x140A11F10 (sub_140A11F10.c)
 *     sub_140A11F60 @ 0x140A11F60 (sub_140A11F60.c)
 *     sub_140A121C0 @ 0x140A121C0 (sub_140A121C0.c)
 *     sub_140A12454 @ 0x140A12454 (sub_140A12454.c)
 *     sub_140A124A4 @ 0x140A124A4 (sub_140A124A4.c)
 *     sub_140A126D0 @ 0x140A126D0 (sub_140A126D0.c)
 * Callees:
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140791084 @ 0x140791084 (sub_140791084.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_1407ECF5C(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (sub_14079499C(a1, a2) & 0xF000) == 0x4000 )
  {
    v6 = sub_140791084(a1, v4, (__int64)&v9, 4u);
    v7 = v9;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    sub_14079499C(a1, v4);
    sub_1406E0C3C(1LL, (__int64)"SdbReadDWORDTag");
    return a3;
  }
}
