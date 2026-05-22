/*
 * XREFs of Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_ead6bd751c13bb2cc1f8a483e482d64a___ @ 0x180154B2C
 * Callers:
 *     ?DoOnCancel@AsyncBase@VisualCapture@Composition@UI@Windows@@QEAAJXZ @ 0x180154DA0 (-DoOnCancel@AsyncBase@VisualCapture@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?Thunk_Message_CaptureCompleted_62@?$IVisualCaptureEvent_Receive@VVisualCapture@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x1801552C0 (-Thunk_Message_CaptureCompleted_62@-$IVisualCaptureEvent_Receive@VVisualCapture@Composition@UI@W.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001EEA8 (-EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18002CA28 (-BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@@Z @ 0x180108EF8 (-SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_ead6bd751c13bb2cc1f8a483e482d64a___(
        Microsoft::WRL2::ContextSession *this,
        __int64 a2)
{
  int v4; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  Microsoft::WRL2::ContextSession::BeginApiCallback((struct _RTL_CRITICAL_SECTION *)this);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 128LL))(a2);
  if ( v4 < 0 )
    Microsoft::WRL2::FailFast::ForHR((unsigned int)v4, retaddr);
  Microsoft::WRL2::ContextSession::EndApiCallback((struct _RTL_CRITICAL_SECTION *)this);
  return Microsoft::WRL2::NestableRuntimeClass::InternalRelease(this);
}
