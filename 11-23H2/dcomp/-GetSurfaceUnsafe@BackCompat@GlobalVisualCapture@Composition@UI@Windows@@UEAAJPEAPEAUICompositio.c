/*
 * XREFs of ?GetSurfaceUnsafe@BackCompat@GlobalVisualCapture@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSurface@345@@Z @ 0x1801547E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$ToApi@UICompositionSurface@Composition@UI@Windows@@@CompositionDrawingSurface@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionSurface@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801542F8 (--$ToApi@UICompositionSurface@Composition@UI@Windows@@@CompositionDrawingSurface@Composition@UI@.c)
 */

__int64 __fastcall Windows::UI::Composition::GlobalVisualCapture::BackCompat::GetSurfaceUnsafe(
        Windows::UI::Composition::GlobalVisualCapture::BackCompat *this,
        struct Windows::UI::Composition::ICompositionSurface **a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v6; // rcx
  struct Windows::UI::Composition::ICompositionSurface *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 30);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 232) & 2) != 0 )
  {
    v6 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this - 2);
    v8 = 0LL;
    Windows::UI::Composition::CompositionDrawingSurface::ToApi<Windows::UI::Composition::ICompositionSurface>(
      v6,
      (__int64 *)&v8);
    *a2 = v8;
    v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v8);
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
