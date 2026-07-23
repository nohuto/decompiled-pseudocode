/*
 * XREFs of sub_14036C2F0 @ 0x14036C2F0
 * Callers:
 *     sub_14036C210 @ 0x14036C210 (sub_14036C210.c)
 * Callees:
 *     sub_140208AD8 @ 0x140208AD8 (sub_140208AD8.c)
 *     sub_1407F16F0 @ 0x1407F16F0 (sub_1407F16F0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14036C2F0(_OWORD *a1, unsigned __int16 *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  void *v6; // rcx
  PVOID P[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)P = 0LL;
  if ( a1 && a2 && (v4 = *a2, (_WORD)v4) )
  {
    P[1] = (PVOID)sub_1407F16F0(v4, *(unsigned int *)(*(_QWORD *)a1 + 24LL));
    if ( !P[1] )
      return (unsigned int)-1073741670;
    WORD1(P[0]) = *a2;
    LOWORD(P[0]) = 0;
    v5 = sub_140208AD8(P, a2);
    if ( v5 >= 0 )
    {
      v6 = (void *)*((_QWORD *)a1 + 7);
      if ( v6 )
        ExFreePoolWithTag(v6, *(_DWORD *)(*(_QWORD *)a1 + 24LL));
      v5 = 0;
      a1[3] = *(_OWORD *)P;
      *(_OWORD *)P = 0LL;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], *(_DWORD *)(*(_QWORD *)a1 + 24LL));
  return (unsigned int)v5;
}
