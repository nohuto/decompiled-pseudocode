/*
 * XREFs of sub_1C005B184 @ 0x1C005B184
 * Callers:
 *     sub_1C00580FC @ 0x1C00580FC (sub_1C00580FC.c)
 * Callees:
 *     sub_1C0042880 @ 0x1C0042880 (sub_1C0042880.c)
 *     sub_1C0079FFC @ 0x1C0079FFC (sub_1C0079FFC.c)
 */

__int64 __fastcall sub_1C005B184(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // r10d

  if ( *(_DWORD *)a1 == 1431193940 )
  {
    if ( (*(_BYTE *)(a1 + 451) & 0x40) != 0 )
      return (unsigned int)-1073741637;
    v3 = *(_QWORD *)(a1 + 3496);
    if ( !v3 )
      return (unsigned int)-1073741637;
    v4 = *(_QWORD *)(a1 + 3504);
  }
  else
  {
    if ( *(_DWORD *)a1 != 1094997074 )
      return (unsigned int)-1073741637;
    if ( (*(_BYTE *)(a1 + 111) & 0x10) != 0 )
      return (unsigned int)-1073741637;
    v3 = *(_QWORD *)(a1 + 6008);
    if ( !v3 )
      return (unsigned int)-1073741637;
    v4 = *(_QWORD *)(a1 + 6016);
  }
  if ( !v4 )
    return (unsigned int)-1073741637;
  v5 = sub_1C0079FFC(a1, v3, v4);
  if ( v5 < 0 )
    sub_1C0042880(a2, 32LL, (__int64)"TcglibDiscoverDevice");
  return (unsigned int)v5;
}
