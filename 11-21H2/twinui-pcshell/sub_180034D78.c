/*
 * XREFs of sub_180034D78 @ 0x180034D78
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180034D78()
{
  char v0; // of
  _BYTE *v1; // rax

  if ( !v0 )
    JUMPOUT(0x180034D52LL);
  *v1 *= 2;
  return CImmersiveApp::UpdateViewEngagementFlags();
}
