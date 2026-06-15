/*
 * XREFs of sub_1801094B8 @ 0x1801094B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall sub_1801094B8(CSharedStreamGroupProxy *a1, struct IStreamInstance *a2)
{
  char v2; // of

  if ( !v2 )
    JUMPOUT(0x180109535LL);
  return CSharedStreamGroupProxy::OnStreamStopped(a1, a2);
}
