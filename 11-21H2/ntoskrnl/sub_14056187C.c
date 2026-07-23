/*
 * XREFs of sub_14056187C @ 0x14056187C
 * Callers:
 *     sub_1407449E0 @ 0x1407449E0 (sub_1407449E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14056187C(__int64 a1, __int64 a2)
{
  int v2; // r10d
  int v3; // r9d
  __int64 result; // rax
  int v5; // r9d
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = *(_DWORD *)(a1 + 184);
  v3 = *(_DWORD *)(a2 + 184);
  if ( (v2 & 4) != 0 )
  {
    result = (v3 & 4) == 0;
    if ( (v3 & 4) == 0 )
      return result;
  }
  else if ( (v3 & 4) != 0 )
  {
    return 0xFFFFFFFFLL;
  }
  v5 = v3 & 2;
  if ( (v2 & 2) != 0 )
  {
    result = (unsigned int)(v5 != 0) - 1;
    if ( !v5 )
      return result;
  }
  else if ( v5 )
  {
    return 1LL;
  }
  v6 = *(_DWORD *)(a1 + 108);
  if ( v6 < *(_DWORD *)(a2 + 108) )
    return 0xFFFFFFFFLL;
  if ( v6 == *(_DWORD *)(a2 + 108) )
  {
    v7 = *(_QWORD *)(a1 + 112);
    if ( v7 > *(_QWORD *)(a2 + 112) )
      return 0xFFFFFFFFLL;
    if ( v7 == *(_QWORD *)(a2 + 112) )
    {
      v8 = *(_QWORD *)(a1 + 120);
      if ( v8 > *(_QWORD *)(a2 + 120) )
        return 0xFFFFFFFFLL;
      if ( v8 == *(_QWORD *)(a2 + 120) )
      {
        v9 = *(_QWORD *)(a2 + 136);
        if ( *(_QWORD *)(a1 + 136) )
        {
          if ( !v9 )
            return 0xFFFFFFFFLL;
          return 0LL;
        }
        if ( !v9 )
          return 0LL;
      }
    }
  }
  return 1LL;
}
