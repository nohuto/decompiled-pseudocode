/*
 * XREFs of sub_14026AE50 @ 0x14026AE50
 * Callers:
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14026AE50(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax

  if ( *a1 >= *a2 )
  {
    if ( *a1 > *a2 )
      return 1LL;
    v2 = a1[3];
    if ( v2 > a2[3] )
      return 1LL;
    if ( v2 >= a2[3] )
    {
      v3 = a1[4];
      if ( v3 >= 0x100 )
        LODWORD(v3) = *(_DWORD *)(v3 + 40) & 0x1F;
      v4 = a2[4];
      if ( v4 >= 0x100 )
        LODWORD(v4) = *(_DWORD *)(v4 + 40) & 0x1F;
      if ( (unsigned int)v3 <= (unsigned int)v4 )
      {
        if ( (unsigned int)v3 >= (unsigned int)v4 )
          return 0LL;
        return 0xFFFFFFFFLL;
      }
      return 1LL;
    }
  }
  return 0xFFFFFFFFLL;
}
