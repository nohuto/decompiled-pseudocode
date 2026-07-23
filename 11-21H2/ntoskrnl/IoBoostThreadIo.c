/*
 * XREFs of IoBoostThreadIo @ 0x1402019A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140280754 @ 0x140280754 (sub_140280754.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 */

__int64 __fastcall IoBoostThreadIo(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // edi
  bool v6; // zf

  v4 = a2;
  if ( a4 )
    return 3221225485LL;
  v6 = (_BYTE)a3 == 1;
  LOBYTE(a3) = 1;
  if ( v6 )
  {
    LOBYTE(a2) = 1;
    sub_1402ACD80(a1, a2, a3, 0LL);
  }
  else
  {
    sub_1402ACD80(a1, 0LL, a3, 0LL);
    sub_140280754(a1, v4, 0x80000000LL);
  }
  return 0LL;
}
