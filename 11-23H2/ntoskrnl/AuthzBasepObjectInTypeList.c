/*
 * XREFs of AuthzBasepObjectInTypeList @ 0x14066F5D0
 * Callers:
 *     SepMaximumAccessCheck @ 0x14022A270 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14022ABF8 (SepNormalAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x140233610 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1403CDE50 (SepMaximumAccessCheckEx.c)
 *     SepExamineSaclEx @ 0x1409CE8B4 (SepExamineSaclEx.c)
 * Callees:
 *     <none>
 */

char __fastcall AuthzBasepObjectInTypeList(_DWORD *a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v4; // r10

  v4 = 0LL;
  if ( !a3 )
    return 0;
  while ( *a1 != *(_DWORD *)(a2 + 48 * v4 + 4)
       || a1[1] != *(_DWORD *)(a2 + 48 * v4 + 8)
       || a1[2] != *(_DWORD *)(a2 + 48 * v4 + 12)
       || a1[3] != *(_DWORD *)(a2 + 48 * v4 + 16) )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= a3 )
      return 0;
  }
  *a4 = v4;
  return 1;
}
