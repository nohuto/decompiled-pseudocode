/*
 * XREFs of sub_1800E74B8 @ 0x1800E74B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E74B8()
{
  char v0; // of
  __int64 v1; // rdi
  double v2; // st7
  _QWORD v4[8]; // [rsp+1h] [rbp-41h]

  if ( !v0 )
    JUMPOUT(0x1800E7475LL);
  *(_QWORD *)((char *)v4 + 4 * v1) = (__int64)v2;
  return CGeometryOnlyDrawListBrush::IsOfType();
}
