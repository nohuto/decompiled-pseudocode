/*
 * XREFs of ?CreateCursorVisual@Api@InteropCompositor@Composition@UI@Windows@@UEAAJ_KPEAPEAUIDCompositionCursorVisualPartner@@@Z @ 0x18015CAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VInteropCursorVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@234@AEA_K@Details@WRL2@Microsoft@@YAJPEAPEAVInteropCursorVisual@Composition@UI@Windows@@$$QEAPEAVInteropCompositor@456@AEA_K@Z @ 0x18015BFA4 (--$MakeAndInitialize2@VInteropCursorVisual@Composition@UI@Windows@@V1234@PEAVInteropCompositor@2.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::CreateCursorVisual(
        Windows::UI::Composition::InteropCompositor::Api *this,
        unsigned __int64 a2,
        struct IDCompositionCursorVisualPartner **a3)
{
  struct Windows::UI::Composition::Compositor *v3; // rsi
  int v6; // ebx
  int v7; // eax
  Microsoft::WRL2::NestableRuntimeClass *v8; // rdi
  struct Windows::UI::Composition::Compositor *v10; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+60h] [rbp+30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int64 v14; // [rsp+78h] [rbp+48h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::InteropCompositor::Api *)((char *)this - 1216);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 1216));
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v12 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
    v12 = 0LL;
    v13 = 0LL;
    v14 = a2;
    v10 = v3;
    v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::InteropCursorVisual,Windows::UI::Composition::InteropCursorVisual,Windows::UI::Composition::InteropCompositor *,unsigned __int64 &>(
           &v13,
           &v10,
           &v14);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v8 = v13;
      v13 = 0LL;
      v6 = 0;
      v12 = v8;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9C,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropcompositor.cpp",
        (const char *)(unsigned int)v7);
      v8 = 0LL;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x60Du);
    }
    else
    {
      v12 = 0LL;
      *a3 = (struct IDCompositionCursorVisualPartner *)(((unsigned __int64)v8 + 296) & -(__int64)(v8 != 0LL));
      v6 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return (unsigned int)v6;
}
