/*
 * XREFs of sub_14036B98C @ 0x14036B98C
 * Callers:
 *     PoRegisterSystemState @ 0x140201CD0 (PoRegisterSystemState.c)
 *     sub_1402E3150 @ 0x1402E3150 (sub_1402E3150.c)
 *     PoCreatePowerRequest @ 0x140369E10 (PoCreatePowerRequest.c)
 *     sub_140369ECC @ 0x140369ECC (sub_140369ECC.c)
 *     sub_1403749A0 @ 0x1403749A0 (sub_1403749A0.c)
 *     sub_1407EDD60 @ 0x1407EDD60 (sub_1407EDD60.c)
 *     PoCreateThermalRequest @ 0x140829400 (PoCreateThermalRequest.c)
 *     sub_140B02408 @ 0x140B02408 (sub_140B02408.c)
 *     sub_140B2D588 @ 0x140B2D588 (sub_140B2D588.c)
 * Callees:
 *     sub_14036BAB4 @ 0x14036BAB4 (sub_14036BAB4.c)
 *     sub_14036BBCC @ 0x14036BBCC (sub_14036BBCC.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14036B98C(unsigned __int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, _QWORD *a6)
{
  char v7; // di
  __int64 v8; // rcx
  int v9; // ebx
  __int128 v11; // [rsp+28h] [rbp-30h] BYREF
  __int128 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-10h]

  v7 = a2;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  *a6 = 0LL;
  if ( a1 && (_BYTE)a2 )
  {
    if ( !a4 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      a2 = 0x7FFFFFFF0000LL;
      if ( a1 + 40 > 0x7FFFFFFF0000LL || a1 + 40 < a1 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v11 = *(_OWORD *)a1;
      v12 = *(_OWORD *)(a1 + 16);
      v13 = *(_QWORD *)(a1 + 32);
      a1 = (unsigned __int64)&v11;
    }
    LOBYTE(a2) = v7;
    v9 = sub_14036BBCC(a1, a2, a5, a6);
  }
  else
  {
    v9 = sub_14036BBCC(a1, a2, a5, a6);
  }
  if ( v9 >= 0 )
  {
    LOBYTE(v8) = v7;
    sub_14036BAB4(v8, a3, *a6);
  }
  return (unsigned int)v9;
}
