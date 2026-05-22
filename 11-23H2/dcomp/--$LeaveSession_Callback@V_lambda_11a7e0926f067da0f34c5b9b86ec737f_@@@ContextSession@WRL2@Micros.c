/*
 * XREFs of ??$LeaveSession_Callback@V_lambda_11a7e0926f067da0f34c5b9b86ec737f_@@@ContextSession@WRL2@Microsoft@@QEAAXV_lambda_11a7e0926f067da0f34c5b9b86ec737f_@@@Z @ 0x180146B54
 * Callers:
 *     ??$InvokePropertyChange_Callback@UVector4@Numerics@Foundation@Windows@@@ProxyObject@Composition@UI@Windows@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUVector4@Numerics@Foundation@3@@Z @ 0x1801467C4 (--$InvokePropertyChange_Callback@UVector4@Numerics@Foundation@Windows@@@ProxyObject@Composition@.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001EEA8 (-EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18002CA28 (-BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@@Z @ 0x180108EF8 (-SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@.c)
 *     ??R_lambda_64934c7e96d1b9526a948e7f65b87268_@@QEBAJXZ @ 0x180146EB4 (--R_lambda_64934c7e96d1b9526a948e7f65b87268_@@QEBAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL2::ContextSession::LeaveSession_Callback<_lambda_11a7e0926f067da0f34c5b9b86ec737f_>(
        Microsoft::WRL2::ContextSession *this,
        __int64 a2)
{
  int v4; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  Microsoft::WRL2::ContextSession::BeginApiCallback((struct _RTL_CRITICAL_SECTION *)this);
  v4 = _lambda_64934c7e96d1b9526a948e7f65b87268_::operator()(a2);
  if ( v4 < 0 )
    Microsoft::WRL2::FailFast::ForHR((unsigned int)v4, retaddr);
  Microsoft::WRL2::ContextSession::EndApiCallback((struct _RTL_CRITICAL_SECTION *)this);
  return Microsoft::WRL2::NestableRuntimeClass::InternalRelease(this);
}
