/*
 * XREFs of sub_14067F804 @ 0x14067F804
 * Callers:
 *     sub_14067F34C @ 0x14067F34C (sub_14067F34C.c)
 *     sub_14067F520 @ 0x14067F520 (sub_14067F520.c)
 *     sub_1406E4D24 @ 0x1406E4D24 (sub_1406E4D24.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14067F804(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r10

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 48) & 0x80u) == 0 )
  {
    if ( a1 )
    {
      v3 = *(unsigned int *)(a2 + 112);
      if ( (_DWORD)v3 )
      {
        while ( a1 != *(_QWORD *)(a2 + 8LL * v2 + 120) )
        {
          if ( ++v2 >= (unsigned int)v3 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        *(_QWORD *)(a2 + 8 * v3 + 120) = a1;
        ++*(_DWORD *)(a2 + 112);
      }
    }
    return 1LL;
  }
  if ( !*(_DWORD *)(a2 + 112) )
  {
    *(_QWORD *)(a2 + 120) = a1;
    return 1LL;
  }
  return *(_QWORD *)(a2 + 120) == a1;
}
