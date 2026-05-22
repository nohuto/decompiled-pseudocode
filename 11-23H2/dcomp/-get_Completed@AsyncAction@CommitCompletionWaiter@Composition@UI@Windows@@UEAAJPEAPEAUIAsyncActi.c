/*
 * XREFs of ?get_Completed@AsyncAction@CommitCompletionWaiter@Composition@UI@Windows@@UEAAJPEAPEAUIAsyncActionCompletedHandler@Foundation@5@@Z @ 0x1801728D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CommitCompletionWaiter::AsyncAction::get_Completed(
        Windows::UI::Composition::CommitCompletionWaiter::AsyncAction *this,
        struct Windows::Foundation::IAsyncActionCompletedHandler **a2)
{
  unsigned int v3; // esi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  struct Windows::Foundation::IAsyncActionCompletedHandler *v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 96) & 2) != 0 )
  {
    v6 = (struct Windows::Foundation::IAsyncActionCompletedHandler *)*((_QWORD *)this + 10);
    if ( v6 )
      (*(void (__fastcall **)(struct Windows::Foundation::IAsyncActionCompletedHandler *))(*(_QWORD *)v6 + 8LL))(v6);
    v8 = 0LL;
    *a2 = v6;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v8);
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
