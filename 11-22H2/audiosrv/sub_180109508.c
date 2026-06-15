/*
 * XREFs of sub_180109508 @ 0x180109508
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall sub_180109508(CSharedStreamGroupProxy *a1, struct IStreamInstance *a2)
{
  char v2; // of

  if ( !v2 )
    JUMPOUT(0x180109585LL);
  return CSharedStreamGroupProxy::OnStreamStopped(a1, a2);
}
