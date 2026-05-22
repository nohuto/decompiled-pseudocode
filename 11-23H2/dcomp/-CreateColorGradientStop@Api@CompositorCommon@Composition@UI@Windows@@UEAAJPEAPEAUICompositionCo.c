/*
 * XREFs of ?CreateColorGradientStop@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUICompositionColorGradientStop@345@@Z @ 0x1801254C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateColorGradientStop@CompositorCommon@Composition@UI@Windows@@QEAAJMAEBU_D3DCOLORVALUE@@PEAPEAVCompositionColorGradientStop@234@@Z @ 0x180044FD4 (-CreateColorGradientStop@CompositorCommon@Composition@UI@Windows@@QEAAJMAEBU_D3DCOLORVALUE@@PEAP.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateColorGradientStop(
        Windows::UI::Composition::CompositorCommon::Api *this,
        struct Windows::UI::Composition::ICompositionColorGradientStop **a2)
{
  Windows::UI::Composition::CompositorCommon *v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  struct Windows::UI::Composition::CompositionColorGradientStop *v6; // rax
  struct Windows::UI::Composition::CompositionColorGradientStop *v8; // [rsp+20h] [rbp-28h] BYREF
  struct _D3DCOLORVALUE v9; // [rsp+28h] [rbp-20h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::CompositorCommon::Api *)((char *)this - 168);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 168));
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v8 = 0LL;
    *(struct _D3DCOLORVALUE *)&v9.r = 0LL;
    v5 = Windows::UI::Composition::CompositorCommon::CreateColorGradientStop(v2, 0.0, &v9, &v8);
    v4 = v5;
    if ( v5 < 0 )
    {
      DoStackCaptureDirect(v5, 0x21F5u);
    }
    else
    {
      v6 = v8;
      v8 = 0LL;
      *a2 = (struct Windows::UI::Composition::ICompositionColorGradientStop *)(((unsigned __int64)v6 + 136) & -(__int64)(v6 != 0LL));
      v4 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v8);
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
  return v4;
}
