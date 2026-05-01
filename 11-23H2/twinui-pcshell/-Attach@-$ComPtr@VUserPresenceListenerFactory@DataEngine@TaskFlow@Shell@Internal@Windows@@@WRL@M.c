/*
 * XREFs of ?Attach@?$ComPtr@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x18049C75C
 * Callers:
 *     ??$Make@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@12@XZ @ 0x180499DF4 (--$Make@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@$$V@Details@WRL.c)
 *     ??$MakeAndInitialize@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1804A6330 (--$MakeAndInitialize@VUserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@V1.c)
 * Callees:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1804A01C0 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIAppViewTitleChangeListenerF.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListenerFactory>::Attach(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListenerFactory>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v4);
  *a1 = a2;
  return result;
}
