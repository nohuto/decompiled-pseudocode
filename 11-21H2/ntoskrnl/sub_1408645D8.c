/*
 * XREFs of sub_1408645D8 @ 0x1408645D8
 * Callers:
 *     sub_14080F068 @ 0x14080F068 (sub_14080F068.c)
 *     sub_140B4F04C @ 0x140B4F04C (sub_140B4F04C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1408645D8(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // eax
  __int64 v6; // rdx

  if ( *(_BYTE *)(a2 + 36) )
  {
    if ( *(_DWORD *)a1 )
    {
      if ( *(_DWORD *)a1 == 1 && *(_BYTE *)(a2 + 38) )
      {
        v6 = *(_QWORD *)(a2 + 40) - *(_QWORD *)(a1 + 8);
        if ( !v6 )
          v6 = *(_QWORD *)(a2 + 48) - *(_QWORD *)(a1 + 16);
        if ( !v6 )
        {
          if ( a3 )
            *a3 = 0;
          return 1;
        }
      }
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 8);
      if ( *(_DWORD *)(a2 + 16) == v4 )
      {
        if ( a3 )
          *a3 = v4;
        return 1;
      }
    }
  }
  return 0;
}
