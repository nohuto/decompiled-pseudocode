/*
 * XREFs of ?get_DispatcherQueue@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIDispatcherQueue@System@5@@Z @ 0x18012AB90
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180088E0C (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::get_DispatcherQueue(
        Windows::UI::Composition::CompositorCommon::Api *this,
        struct Windows::System::IDispatcherQueue **a2)
{
  __int64 *v2; // rsi
  unsigned int v3; // edi

  v2 = (__int64 *)((char *)this - 192);
  v3 = 0;
  *a2 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 192));
  if ( (v2[4] & 2) != 0 )
  {
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v2 + 63);
    *a2 = (struct Windows::System::IDispatcherQueue *)v2[63];
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
  return v3;
}
