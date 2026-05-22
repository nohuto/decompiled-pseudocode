/*
 * XREFs of ?GetRenderingDevice@Interop@CompositionGraphicsDevice@Composition@UI@Windows@@UEAAJPEAPEAUIUnknown@@@Z @ 0x1801570B0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionGraphicsDevice::Interop::GetRenderingDevice(
        Windows::UI::Composition::CompositionGraphicsDevice::Interop *this,
        struct IUnknown **a2)
{
  unsigned int v3; // esi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  struct IUnknown *v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 19);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 144) & 2) != 0 )
  {
    v6 = (struct IUnknown *)*((_QWORD *)this + 5);
    if ( v6 )
      ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->AddRef)(v6);
    v8 = 0LL;
    *a2 = v6;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v8);
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
