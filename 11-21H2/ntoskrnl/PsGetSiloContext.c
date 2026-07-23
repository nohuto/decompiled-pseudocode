/*
 * XREFs of PsGetSiloContext @ 0x1402A0E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_14070F57C @ 0x14070F57C (sub_14070F57C.c)
 */

__int64 __fastcall PsGetSiloContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1496);
  else
    v3 = qword_140D32A90;
  *a3 = 0LL;
  return sub_14070F57C(v3);
}
