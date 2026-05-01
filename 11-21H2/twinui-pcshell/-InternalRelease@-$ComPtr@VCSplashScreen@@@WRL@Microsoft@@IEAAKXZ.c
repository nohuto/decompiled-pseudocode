/*
 * XREFs of ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180166A30
 * Callers:
 *     _lambda_ca324c265ed58b3d9541d2204f682216_::operator() @ 0x18002E7FC (_lambda_ca324c265ed58b3d9541d2204f682216_--operator().c)
 *     ??1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ @ 0x180031D68 (--1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___::_scalar_deleting_destructor_ @ 0x18003DBA0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___--_scala.c)
 *     ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x18006B7CC (--$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@P.c)
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18006C584 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180070404 (-OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_::_scalar_deleting_destructor_ @ 0x180173EA0 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__-_--_scalar_deleting_destruct.c)
 *     ??1?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@QEAA@XZ @ 0x180302FF0 (--1-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___::_scalar_deleting_destructor_ @ 0x18030E610 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_639d6738ffd80580db82ce4ed229ae7f___--_scala.c)
 *     ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18030EBE0 (-add_Dismissed@CSplashScreen@@UEAAJPEAU-$ITypedEventHandler@PEAVSplashScreen@Activation@Applicat.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Activation@ApplicationModel@Windows@@U4@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180155F80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Act.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
