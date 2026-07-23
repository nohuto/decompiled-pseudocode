/*
 * XREFs of sub_140995C40 @ 0x140995C40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140995830 @ 0x140995830 (sub_140995830.c)
 */

__int64 __fastcall sub_140995C40(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r10d
  __int64 v4; // rdx
  __int64 v5; // r11

  if ( *(_DWORD *)(a1 + 16) <= 2u )
  {
    *(_DWORD *)a2 = 1;
    if ( a3 == 2 )
      *(_BYTE *)(a2 + 24) = 1;
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      *(_BYTE *)(a2 + 25) = *(_BYTE *)(a1 + 41);
    }
    else if ( dword_140C20BA8 )
    {
      *(_BYTE *)(a2 + 25) = 1;
    }
    if ( !sub_140995830(a1, a2) )
    {
      *(_OWORD *)v4 = *(_OWORD *)(v5 + 16);
      *(_OWORD *)(v4 + 16) = *(_OWORD *)(v5 + 32);
      *(_QWORD *)(v4 + 32) = *(_QWORD *)(v5 + 48);
    }
  }
  else
  {
    return (unsigned int)-1073700861;
  }
  return v3;
}
