/*
 * XREFs of ?HasValidPixels@Interop@CompositionDrawingSurface@Composition@UI@Windows@@UEAAJPEAH@Z @ 0x18010A3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?TranslateDCompError@Composition@UI@Windows@@YAJJ@Z @ 0x180061B90 (-TranslateDCompError@Composition@UI@Windows@@YAJJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UseUnderlyingSurfacePartner@CompositionDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCompositionSurfacePartner@@@Z @ 0x18010A968 (-UseUnderlyingSurfacePartner@CompositionDrawingSurface@Composition@UI@Windows@@AEAAJPEAPEAUIDCom.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionDrawingSurface::Interop::HasValidPixels(
        Windows::UI::Composition::CompositionDrawingSurface::Interop *this,
        int *a2)
{
  Windows::UI::Composition::CompositionDrawingSurface *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  unsigned int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IDCompositionSurfacePartner *v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0;
  v2 = (Windows::UI::Composition::CompositionDrawingSurface::Interop *)((char *)this - 224);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 25);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    if ( Windows::UI::Composition::CompositionDrawingSurface::UseUnderlyingSurfacePartner(v2, &v10) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IDCompositionSurfacePartner *, int *))(*(_QWORD *)v10 + 80LL))(v10, a2);
      v8 = Windows::UI::Composition::TranslateDCompError((Windows::UI::Composition *)v7);
      v5 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDE,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositiondrawingsurface.cpp",
          (const char *)(unsigned int)v8);
        DoStackCaptureDirect(v5, 0x2BAu);
        goto LABEL_6;
      }
    }
    else
    {
      *a2 = 0;
    }
    v5 = 0;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
LABEL_6:
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
