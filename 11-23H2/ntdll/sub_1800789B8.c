/*
 * XREFs of sub_1800789B8 @ 0x1800789B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800789B8(__int64 a1, __int64 a2)
{
  char v2; // of
  char v3; // al
  _BYTE *v4; // rdi
  double v5; // st7

  if ( !v2 )
    JUMPOUT(0x180078A22LL);
  *(double *)(a2 - 44) = v5;
  if ( (char)(*v4 - v3) < 0 )
    JUMPOUT(0x180078986LL);
  return TpCaptureCaller();
}
