/*
 * XREFs of sub_140973200 @ 0x140973200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140973200(__int64 a1, __int64 a2)
{
  bool v2; // zf

  if ( *(_DWORD *)(a2 + 16) )
  {
    v2 = a1 == *(_QWORD *)a2;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 120) != *(_DWORD *)(*(_QWORD *)a2 + 120LL) )
      return 1LL;
    v2 = *(_DWORD *)(a1 + 156) == *(_DWORD *)(*(_QWORD *)a2 + 156LL);
  }
  if ( v2 )
  {
    *(_QWORD *)(a2 + 8) = a1;
    return 0LL;
  }
  return 1LL;
}
