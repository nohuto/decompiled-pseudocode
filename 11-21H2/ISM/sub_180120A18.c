/*
 * XREFs of sub_180120A18 @ 0x180120A18
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall sub_180120A18(InputSystemInternalClientConnection *a1, struct Microsoft::Bamo::BamoProxy *a2)
{
  char v2; // of
  __int64 v3; // rsi
  double v4; // st7

  if ( !v2 )
    JUMPOUT(0x180120A3BLL);
  *(double *)(v3 - 75) = v4;
  return InputSystemInternalClientConnection::SetBootstrapProxy(a1, a2);
}
