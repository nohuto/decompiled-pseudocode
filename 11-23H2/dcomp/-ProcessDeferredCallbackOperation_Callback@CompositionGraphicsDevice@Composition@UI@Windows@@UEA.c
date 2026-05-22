/*
 * XREFs of ?ProcessDeferredCallbackOperation_Callback@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAXXZ @ 0x180157490
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_10f9bd1741d99675ee0f62fa6f3a586b___ @ 0x18015666C (Microsoft--WRL2--ContextSession--LeaveSession_Callback__lambda_10f9bd1741d99675ee0f62fa6f3a586b_.c)
 */

void __fastcall Windows::UI::Composition::CompositionGraphicsDevice::ProcessDeferredCallbackOperation_Callback(
        Windows::UI::Composition::CompositionGraphicsDevice *this)
{
  Microsoft::WRL2::NestableRuntimeClass *v1; // rbx
  char *v2; // rax
  char *v3; // rdx
  Microsoft::WRL2::ContextSession *v4; // rcx
  __int64 v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 16);
  v2 = (char *)this + 104;
  *((_QWORD *)this + 16) = 0LL;
  v3 = (char *)this - 128;
  v4 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 13);
  v5[0] = (__int64)v2;
  v5[1] = (unsigned __int64)(v3 + 136) & -(__int64)(v3 != 0LL);
  v5[2] = ((unsigned __int64)v1 + 128) & -(__int64)(v1 != 0LL);
  Microsoft::WRL2::ContextSession::LeaveSession_Callback__lambda_10f9bd1741d99675ee0f62fa6f3a586b___(v4, v5);
  if ( v1 )
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v1);
}
