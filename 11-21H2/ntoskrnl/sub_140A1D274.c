/*
 * XREFs of sub_140A1D274 @ 0x140A1D274
 * Callers:
 *     sub_140A1CF34 @ 0x140A1CF34 (sub_140A1CF34.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140A1D274(_DWORD *a1, _QWORD *a2, char a3)
{
  unsigned int v3; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rax

  if ( !a1 )
    return 0;
  if ( !*a1 )
    return 0;
  v3 = a1[1];
  if ( !(v3 >> 28) )
    return 0;
  if ( v3 >> 28 == 1 )
  {
    v5 = v3 & 0xFFFFF;
    if ( (v3 & 0xFFFFF) == 0 )
      return 0;
    v6 = (v3 >> 20) & 0xF;
    if ( !v6 )
      return 0;
    if ( v6 == 1 )
    {
      v7 = v5 - 1;
      if ( v7 )
      {
        if ( v7 == 1048574 && (a3 & 1) == 0 )
          return 0;
      }
      else
      {
        if ( !a2 )
          return 0;
        v8 = *a2 - 0x4E9F3D06A5A30FA2LL;
        if ( *a2 == 0x4E9F3D06A5A30FA2LL )
          v8 = a2[1] + 0x45032E06E25F0B4BLL;
        if ( v8 )
          return 0;
      }
    }
  }
  else if ( v3 >> 28 == 2 && ((v3 & 0xF00000) == 0 || (v3 & 0xF00000) == 0x200000 && (v3 & 0xFFFFF) == 0) )
  {
    return 0;
  }
  return 1;
}
