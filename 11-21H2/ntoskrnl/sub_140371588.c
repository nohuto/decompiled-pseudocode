/*
 * XREFs of sub_140371588 @ 0x140371588
 * Callers:
 *     sub_1403713DC @ 0x1403713DC (sub_1403713DC.c)
 *     sub_1403718A8 @ 0x1403718A8 (sub_1403718A8.c)
 * Callees:
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

__int64 __fastcall sub_140371588(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r10
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v7; // r9

  v3 = *(_QWORD *)(a3 + 16);
  v4 = 0;
  v5 = v3;
  if ( (v3 || (v5 = qword_140C5A5E8) != 0) && a1 > v5 )
  {
    v7 = *(_QWORD *)(a3 + 24);
    if ( v7 )
      sub_1405F1BBC(20, a2, 0, v7, a1, v3);
  }
  else
  {
    return 1;
  }
  return v4;
}
