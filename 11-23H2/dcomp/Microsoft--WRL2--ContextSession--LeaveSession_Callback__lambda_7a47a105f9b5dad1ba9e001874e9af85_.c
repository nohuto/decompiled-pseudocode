/*
 * XREFs of Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_7a47a105f9b5dad1ba9e001874e9af85___ @ 0x18001C33C
 * Callers:
 *     ?OnCommitCompletion@CompositorCommon@Composition@UI@Windows@@AEAAJXZ @ 0x18001C18C (-OnCommitCompletion@CompositorCommon@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     _lambda_7a47a105f9b5dad1ba9e001874e9af85_::operator() @ 0x18001C3A4 (_lambda_7a47a105f9b5dad1ba9e001874e9af85_--operator().c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18001EEA8 (-EndApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ @ 0x18002CA28 (-BeginApiCallback@ContextSession@WRL2@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z @ 0x180108AEC (-ForHR@FailFast@WRL2@Microsoft@@SAXJPEBX@Z.c)
 *     ?SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@@Z @ 0x180108EF8 (-SehToFailFastFilter@FailFast@WRL2@Microsoft@@SAHPEAU_EXCEPTION_POINTERS@@PEAVContextSession@23@.c)
 */

unsigned int __fastcall Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_7a47a105f9b5dad1ba9e001874e9af85___(
        Microsoft::WRL2::ContextSession *this,
        __int64 a2)
{
  int v3; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(this);
  Microsoft::WRL2::ContextSession::BeginApiCallback(this);
  v3 = lambda_7a47a105f9b5dad1ba9e001874e9af85_::operator()(&v6);
  if ( v3 < 0 )
    Microsoft::WRL2::FailFast::ForHR(v3, retaddr);
  Microsoft::WRL2::ContextSession::EndApiCallback(this);
  return Microsoft::WRL2::NestableRuntimeClass::InternalRelease(this);
}
