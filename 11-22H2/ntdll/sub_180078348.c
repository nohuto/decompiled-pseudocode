/*
 * XREFs of sub_180078348 @ 0x180078348
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_180078348(TP_TRACE_TYPE Type, __int64 a2)
{
  char v2; // of
  char v3; // al
  _BYTE *v4; // rdi
  double v5; // st7

  if ( !v2 )
    JUMPOUT(0x1800783B2LL);
  *(double *)(a2 - 44) = v5;
  if ( (char)(*v4 - v3) < 0 )
    JUMPOUT(0x180078316LL);
  TpCaptureCaller(Type);
}
