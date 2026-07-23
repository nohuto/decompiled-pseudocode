/*
 * XREFs of CompareRoutine @ 0x1406D9570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareRoutine(_RTL_AVL_TABLE *a1, _QWORD *a2, _QWORD *a3)
{
  if ( *a3 > *a2 )
    return 0LL;
  else
    return 2 - (unsigned int)(*a3 < *a2);
}
