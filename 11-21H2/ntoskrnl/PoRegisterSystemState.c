/*
 * XREFs of PoRegisterSystemState @ 0x140201CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140201D94 @ 0x140201D94 (sub_140201D94.c)
 *     sub_140369870 @ 0x140369870 (sub_140369870.c)
 *     sub_1403698C4 @ 0x1403698C4 (sub_1403698C4.c)
 *     sub_14036A698 @ 0x14036A698 (sub_14036A698.c)
 *     sub_14036B090 @ 0x14036B090 (sub_14036B090.c)
 *     sub_14036B98C @ 0x14036B98C (sub_14036B98C.c)
 *     PoSetSystemState @ 0x1405CFE90 (PoSetSystemState.c)
 */

PVOID __stdcall PoRegisterSystemState(PVOID StateHandle, EXECUTION_STATE Flags)
{
  PVOID v2; // rbx
  int v5; // r9d
  int v6; // eax
  PVOID v7; // rsi
  int v8; // eax
  PVOID v10; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  v2 = 0LL;
  if ( (Flags & 0x7FFFFFF8) == 0 )
  {
    if ( (int)Flags > 0 )
    {
      PoSetSystemState(Flags);
    }
    else
    {
      sub_140201D94(Flags, StateHandle);
      v2 = StateHandle;
      v10 = StateHandle;
      if ( StateHandle
        || (LOBYTE(v5) = 1, v6 = sub_14036B98C(0, 0, 0, v5, 0LL, (__int64)&P), v7 = P, v6 >= 0)
        && (v8 = sub_14036A698(P, 0LL, &v10), v2 = v10, v8 >= 0) )
      {
        sub_140369870(v2, Flags, 0LL);
        sub_1403698C4(v2);
      }
      else if ( v7 )
      {
        sub_14036B090(v7);
      }
    }
  }
  return v2;
}
