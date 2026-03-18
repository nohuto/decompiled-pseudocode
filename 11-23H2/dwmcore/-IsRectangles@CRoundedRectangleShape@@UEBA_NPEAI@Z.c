/*
 * XREFs of ?IsRectangles@CRoundedRectangleShape@@UEBA_NPEAI@Z @ 0x1800CB610
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z @ 0x1800CFBF4 (-IsRoundedCorner@CRoundedRectangleGeometryData@@QEBA_NW4RoundedCornerIndex@@@Z.c)
 */

char __fastcall CRoundedRectangleShape::IsRectangles(CRoundedRectangleShape *this, unsigned int *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _DWORD *v4; // r9

  v2 = *((_QWORD *)this + 2) + 16LL;
  if ( *(_BYTE *)(v2 + 52) )
  {
    v3 = 0LL;
  }
  else
  {
    if ( *(float *)(v2 + 16) > 0.0 && *(float *)(v2 + 20) > 0.0
      || *(float *)(v2 + 24) > 0.0 && *(float *)(v2 + 28) > 0.0
      || *(float *)(v2 + 32) > 0.0 && *(float *)(v2 + 36) > 0.0 )
    {
      return 0;
    }
    v3 = 3LL;
  }
  if ( (unsigned __int8)CRoundedRectangleGeometryData::IsRoundedCorner(v2, v3) )
    return 0;
  if ( v4 )
    *v4 = 1;
  return 1;
}
