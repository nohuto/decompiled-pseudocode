/*
 * XREFs of sub_1C001ED9C @ 0x1C001ED9C
 * Callers:
 *     sub_1C00A2F90 @ 0x1C00A2F90 (sub_1C00A2F90.c)
 *     sub_1C00A3030 @ 0x1C00A3030 (sub_1C00A3030.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C001ED9C(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 68) )
    return 3221225760LL;
  if ( *(_UNKNOWN **)(a2 + 32) != &sub_1C00793B0 )
    *(_BYTE *)(*(_QWORD *)(a1 + 184) + 3LL) |= 1u;
  *(_QWORD *)(*(_QWORD *)(a1 + 184) + 32LL) = a2;
  _InterlockedExchange64((volatile __int64 *)(a1 + 104), (__int64)sub_1C0079310);
  return 259LL;
}
