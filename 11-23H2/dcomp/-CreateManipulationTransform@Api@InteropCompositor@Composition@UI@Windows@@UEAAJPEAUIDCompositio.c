/*
 * XREFs of ?CreateManipulationTransform@Api@InteropCompositor@Composition@UI@Windows@@UEAAJPEAUIDCompositionTransform@@AEBU_GUID@@PEAPEAX@Z @ 0x180082060
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateManipulationTransform@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIDCompositionTransform@@AEBU_GUID@@PEAPEAX@Z @ 0x1800820DC (-CreateManipulationTransform@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIDCompositionTra.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateManipulationTransform(
        Windows::UI::Composition::InteropCompositor::Api *this,
        struct IDCompositionTransform *a2,
        const struct _GUID *a3,
        void **a4)
{
  Windows::UI::Composition::InteropCompositor *v4; // rdi
  int ManipulationTransform; // eax
  unsigned int v9; // ebx

  v4 = (Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1248);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1248));
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    ManipulationTransform = Windows::UI::Composition::InteropCompositor::CreateManipulationTransform(v4, a2, a3, a4);
    v9 = ManipulationTransform;
    if ( ManipulationTransform < 0 )
      DoStackCaptureDirect(ManipulationTransform, 0x50Bu);
    else
      v9 = 0;
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v4);
  return v9;
}
