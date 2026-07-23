/*
 * XREFs of sub_140B1236C @ 0x140B1236C
 * Callers:
 *     sub_140B10F48 @ 0x140B10F48 (sub_140B10F48.c)
 *     sub_140B11D58 @ 0x140B11D58 (sub_140B11D58.c)
 * Callees:
 *     sub_1403C5AEC @ 0x1403C5AEC (sub_1403C5AEC.c)
 */

char __fastcall sub_140B1236C(int a1, char a2)
{
  bool v2; // bl
  __int64 v5; // rcx
  bool v7; // zf

  v2 = 0;
  if ( !qword_140D686A8 )
    return 1;
  if ( a1 )
  {
    v5 = (unsigned int)(a1 - 1);
    if ( (_DWORD)v5 )
    {
      v5 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v5 )
      {
        if ( (_DWORD)v5 != 1 )
          goto LABEL_5;
        v7 = (dword_140D68664 & 2) == 0;
      }
      else
      {
        v7 = (dword_140D68664 & 4) == 0;
      }
      if ( v7 || !a2 )
        goto LABEL_5;
    }
    v2 = 1;
  }
  else
  {
    v5 = 1LL;
    v2 = (dword_140D68664 & 1) != 0;
  }
LABEL_5:
  sub_1403C5AEC(v5, a1, dword_140D68664, v2);
  return v2;
}
