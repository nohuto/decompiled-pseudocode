/*
 * XREFs of sub_140995830 @ 0x140995830
 * Callers:
 *     sub_140995C40 @ 0x140995C40 (sub_140995C40.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140995830(__int64 a1, __int64 a2)
{
  char result; // al
  int v4; // ecx

  result = 1;
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    if ( *(_BYTE *)(a1 + 40) )
    {
      if ( !*(_BYTE *)(a2 + 24) )
        return result;
    }
    else if ( *(_BYTE *)(a2 + 24) )
    {
      return 0;
    }
    v4 = *(_DWORD *)(a2 + 8);
    if ( v4 == 4 )
    {
      if ( !dword_140C2320C )
        return 0;
    }
    else if ( v4 != 43 && v4 != 46 && (v4 != 45 || *(_DWORD *)(a1 + 24) == 45) )
    {
      return 0;
    }
  }
  return result;
}
