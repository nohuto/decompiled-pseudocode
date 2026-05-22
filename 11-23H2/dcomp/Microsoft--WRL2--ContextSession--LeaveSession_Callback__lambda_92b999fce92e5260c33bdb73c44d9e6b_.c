/*
 * XREFs of Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_92b999fce92e5260c33bdb73c44d9e6b___ @ 0x180186730
 * Callers:
 *     ?Message_TriggerFired_Callback@CompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@QEAAJXZ @ 0x180187308 (-Message_TriggerFired_Callback@CompositionAnimationTriggerPartner@Internal@Composition@UI@Window.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001EEA8 (-EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18002CA28 (-BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@@Z @ 0x180108EF8 (-SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@.c)
 *     ??$DoInvoke@V_lambda_19fc9b8e09b618afd4de23fa6ef873d4_@@@?$EventSource@U?$ITypedEventHandler@PEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@PEAVCompositionAnimationTriggerPartnerFiredEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_19fc9b8e09b618afd4de23fa6ef873d4_@@@Z @ 0x180186500 (--$DoInvoke@V_lambda_19fc9b8e09b618afd4de23fa6ef873d4_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_92b999fce92e5260c33bdb73c44d9e6b___(
        Microsoft::WRL2::ContextSession *this,
        __int64 *a2)
{
  int v4; // eax
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v7; // [rsp+40h] [rbp-18h]
  __int64 *v8; // [rsp+48h] [rbp-10h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  Microsoft::WRL2::ContextSession::BeginApiCallback((struct _RTL_CRITICAL_SECTION *)this);
  v11 = 0LL;
  v10 = a2[1];
  v7 = &v10;
  v8 = &v11;
  *(_QWORD *)&v6 = &v10;
  *((_QWORD *)&v6 + 1) = &v11;
  v4 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner *,Windows::UI::Composition::Internal::CompositionAnimationTriggerPartnerFiredEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_19fc9b8e09b618afd4de23fa6ef873d4_>(
         *a2,
         &v6);
  if ( v4 < 0 )
    Microsoft::WRL2::FailFast::ForHR((unsigned int)v4, retaddr);
  Microsoft::WRL2::ContextSession::EndApiCallback((struct _RTL_CRITICAL_SECTION *)this);
  return Microsoft::WRL2::NestableRuntimeClass::InternalRelease(this);
}
