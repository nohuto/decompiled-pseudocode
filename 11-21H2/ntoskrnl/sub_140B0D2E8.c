/*
 * XREFs of sub_140B0D2E8 @ 0x140B0D2E8
 * Callers:
 *     sub_140B0BE8C @ 0x140B0BE8C (sub_140B0BE8C.c)
 *     sub_140B0C004 @ 0x140B0C004 (sub_140B0C004.c)
 *     sub_140B0C394 @ 0x140B0C394 (sub_140B0C394.c)
 *     sub_140B0C87C @ 0x140B0C87C (sub_140B0C87C.c)
 *     sub_140B0CB80 @ 0x140B0CB80 (sub_140B0CB80.c)
 *     sub_140B0CDAC @ 0x140B0CDAC (sub_140B0CDAC.c)
 *     sub_140B0D360 @ 0x140B0D360 (sub_140B0D360.c)
 * Callees:
 *     sub_140B0D440 @ 0x140B0D440 (sub_140B0D440.c)
 *     sub_140B0D470 @ 0x140B0D470 (sub_140B0D470.c)
 *     sub_140B0D514 @ 0x140B0D514 (sub_140B0D514.c)
 */

__int64 __fastcall sub_140B0D2E8(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdx
  int v10; // ecx

  v7 = sub_140B0D470(a1, a2);
  if ( v7 )
  {
    v8 = sub_140B0D440(v7, a3);
    if ( v8 )
    {
      v9 = *(_QWORD **)(v8 + 16);
      v10 = 0;
      if ( a4 )
      {
        while ( v9 )
        {
          v9 = (_QWORD *)*v9;
          if ( ++v10 >= a4 )
            goto LABEL_4;
        }
      }
      else
      {
LABEL_4:
        if ( v9 )
          return sub_140B0D514(a1, v9[1]);
      }
    }
  }
  return 0LL;
}
