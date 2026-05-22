/*
 * XREFs of sub_18014A368 @ 0x18014A368
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall sub_18014A368(InputSystemInternalClientConnection *a1, struct Microsoft::Bamo::BamoProxy *a2)
{
  char v2; // of
  __int64 v3; // rsi
  double v4; // st7

  if ( !v2 )
    JUMPOUT(0x18014A38BLL);
  *(double *)(v3 - 75) = v4;
  return InputSystemInternalClientConnection::SetBootstrapProxy(a1, a2);
}
