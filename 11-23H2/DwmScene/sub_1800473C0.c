/*
 * XREFs of sub_1800473C0 @ 0x1800473C0
 * Callers:
 *     sub_180048990 @ 0x180048990 (sub_180048990.c)
 *     sub_1800489C8 @ 0x1800489C8 (sub_1800489C8.c)
 *     sub_180048A00 @ 0x180048A00 (sub_180048A00.c)
 *     sub_180048A48 @ 0x180048A48 (sub_180048A48.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DE0 @ 0x180011DE0 (sub_180011DE0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180047AFC @ 0x180047AFC (sub_180047AFC.c)
 *     sub_180088D38 @ 0x180088D38 (sub_180088D38.c)
 */

__int64 __fastcall sub_1800473C0(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rcx
  __int64 v5; // r9
  _QWORD *v6; // rax
  char v7; // bl
  __int64 v9; // [rsp+28h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  _BYTE v11[8]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  v3 = (_QWORD *)(a1 + 136);
  if ( !a3 || sub_180011DE0(v3) )
  {
    v6 = sub_18001246C(&v9, v3);
    v7 = 6;
  }
  else
  {
    v6 = (_QWORD *)sub_180088D38(v5, v11);
    v7 = 5;
  }
  sub_180047AFC(a2, v6);
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( v10 )
      sub_180010530(v10);
  }
  if ( (v7 & 1) != 0 && v12 )
    sub_180010530(v12);
  return a2;
}
