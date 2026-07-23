/*
 * XREFs of sub_1403DE810 @ 0x1403DE810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403DE810(unsigned __int16 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r9

  v3 = qword_140C4AD18;
  if ( (unsigned int)a1 >= *(_DWORD *)(qword_140C4AD18 + 56) )
    return 3221226021LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(qword_140C4AD18 + 24) + 4LL * a1);
  if ( a3 )
    *a3 = *(_DWORD *)(*(_QWORD *)(v3 + 32) + 4LL * a1);
  return 0LL;
}
