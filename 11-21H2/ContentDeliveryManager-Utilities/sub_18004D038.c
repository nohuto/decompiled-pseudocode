/*
 * XREFs of sub_18004D038 @ 0x18004D038
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004D038()
{
  char v0; // of

  if ( !v0 )
    JUMPOUT(0x18004D02ALL);
  return Microsoft::WRL::SimpleActivationFactory<ContentManagement::ContentManagementBrokerServer,0>::ActivateInstance();
}
