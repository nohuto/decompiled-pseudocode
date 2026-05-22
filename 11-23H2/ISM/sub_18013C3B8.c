/*
 * XREFs of sub_18013C3B8 @ 0x18013C3B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall sub_18013C3B8(InputSystemInternalClientConnection *a1, struct Microsoft::Bamo::BamoProxy *a2)
{
  char v2; // of
  __int64 v3; // rsi
  double v4; // st7

  if ( !v2 )
    JUMPOUT(0x18013C3DBLL);
  *(double *)(v3 - 75) = v4;
  return InputSystemInternalClientConnection::SetBootstrapProxy(a1, a2);
}
