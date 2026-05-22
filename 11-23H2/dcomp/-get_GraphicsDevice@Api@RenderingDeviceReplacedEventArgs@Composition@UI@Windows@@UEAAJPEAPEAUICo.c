/*
 * XREFs of ?get_GraphicsDevice@Api@RenderingDeviceReplacedEventArgs@Composition@UI@Windows@@UEAAJPEAPEAUICompositionGraphicsDevice@345@@Z @ 0x180196540
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::RenderingDeviceReplacedEventArgs::Api::get_GraphicsDevice(
        Windows::UI::Composition::RenderingDeviceReplacedEventArgs::Api *this,
        struct Windows::UI::Composition::ICompositionGraphicsDevice **a2)
{
  unsigned int v3; // esi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  struct Windows::UI::Composition::ICompositionGraphicsDevice *v6; // rbx

  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 96) & 2) != 0 )
  {
    v6 = (struct Windows::UI::Composition::ICompositionGraphicsDevice *)((*((_QWORD *)this + 2) + 136LL) & -(__int64)(*((_QWORD *)this + 2) != 0LL));
    if ( v6 )
      (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionGraphicsDevice *))(*(_QWORD *)v6 + 8LL))(v6);
    *a2 = v6;
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
