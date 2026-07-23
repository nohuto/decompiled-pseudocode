/*
 * XREFs of sub_140285740 @ 0x140285740
 * Callers:
 *     sub_1402858A0 @ 0x1402858A0 (sub_1402858A0.c)
 *     sub_14053B060 @ 0x14053B060 (sub_14053B060.c)
 *     sub_14053B22C @ 0x14053B22C (sub_14053B22C.c)
 *     sub_14053B55C @ 0x14053B55C (sub_14053B55C.c)
 * Callees:
 *     sub_14028D58C @ 0x14028D58C (sub_14028D58C.c)
 */

char __fastcall sub_140285740(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char v5; // r8

  v5 = 1;
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v5 = sub_14028D58C(a1, a2, a3, a4);
  }
  else if ( a3 < 0xFFFFFFFFFFFFFFFEuLL )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)a2 >> 18)) = a3;
LABEL_7:
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 540));
    else
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 540));
    return v5;
  }
  if ( a3 != -1LL && a3 != -2LL )
    goto LABEL_7;
  return v5;
}
