/*
 * XREFs of sub_1405F85E0 @ 0x1405F85E0
 * Callers:
 *     sub_1405F8978 @ 0x1405F8978 (sub_1405F8978.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405F85E0(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax

  if ( (*(_DWORD *)(a1 + 20) & 1) == 0 )
    return 0LL;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
      a1 = v3 + 4;
    *a2 = *(_DWORD *)a1;
  }
  return 1LL;
}
