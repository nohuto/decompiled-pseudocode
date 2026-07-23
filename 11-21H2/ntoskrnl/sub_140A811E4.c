/*
 * XREFs of sub_140A811E4 @ 0x140A811E4
 * Callers:
 *     sub_140A922C0 @ 0x140A922C0 (sub_140A922C0.c)
 *     sub_140AA6400 @ 0x140AA6400 (sub_140AA6400.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140A811E4(__int64 a1)
{
  __int64 v1; // rcx
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( v1 )
    {
      if ( (*(_DWORD *)(v1 + 396) & 0x20000) == 0 )
        return 1;
    }
  }
  return result;
}
