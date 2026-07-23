/*
 * XREFs of sub_140241138 @ 0x140241138
 * Callers:
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402D0490 @ 0x1402D0490 (sub_1402D0490.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 */

void __fastcall sub_140241138(__int64 a1, __int64 *a2, __int16 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  char v9; // [rsp+40h] [rbp+18h] BYREF

  if ( (a3 & 0x42) == 0 )
  {
    v9 = 0;
    if ( (a3 & 0x800) != 0 )
    {
      v5 = sub_1402D0490(a1, a2, &v9);
      v6 = *a2;
      v7 = v5;
      if ( (*a2 & 1) != 0 && (v6 & 0x42) == 0 && (v6 & 0x800) != 0 )
        sub_14033DBC0(a2, v6 | 0x62);
      sub_14020D8D0(a1, v7);
      LOBYTE(v8) = v9;
      sub_1402B0CE0(a1, v8);
    }
  }
}
