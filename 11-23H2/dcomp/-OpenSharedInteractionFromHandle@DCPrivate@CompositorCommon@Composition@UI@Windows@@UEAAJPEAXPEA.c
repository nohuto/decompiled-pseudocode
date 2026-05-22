/*
 * XREFs of ?OpenSharedInteractionFromHandle@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJPEAXPEAPEAUICompositionInteractionPartner@345@@Z @ 0x18008AAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAPEAX@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPointerEventRouter@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAPEAX@Z @ 0x18008ABA4 (--$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@_ea_18008ABA4.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::DCPrivate::OpenSharedInteractionFromHandle(
        Windows::UI::Composition::CompositorCommon::DCPrivate *this,
        void *a2,
        struct Windows::UI::Composition::ICompositionInteractionPartner **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  int v6; // eax
  int v7; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v8; // rdi
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+60h] [rbp+30h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v13; // [rsp+70h] [rbp+40h] BYREF
  void *v14; // [rsp+78h] [rbp+48h] BYREF

  *a3 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 328);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 328));
  if ( (v3->SpinCount & 2) != 0 )
  {
    if ( a2 )
    {
      v12 = 0LL;
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
      v12 = 0LL;
      v13 = 0LL;
      v14 = a2;
      v10 = v3;
      v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionPointerEventRouter,Windows::UI::Composition::CompositionPointerEventRouter,Windows::UI::Composition::Compositor *,void * &>(
             &v13,
             &v10,
             &v14);
      v7 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x12AA,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
          (const char *)(unsigned int)v6);
        v8 = 0LL;
      }
      else
      {
        v8 = v13;
        v13 = 0LL;
        v7 = 0;
        v12 = v8;
      }
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v13);
      if ( v7 < 0 )
      {
        DoStackCaptureDirect(v7, 0x1DABu);
      }
      else
      {
        v12 = 0LL;
        *a3 = (struct Windows::UI::Composition::ICompositionInteractionPartner *)(((unsigned __int64)v8 + 136) & -(__int64)(v8 != 0LL));
        v7 = 0;
      }
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
    }
    else
    {
      v7 = -2147024890;
      DoStackCaptureDirect(-2147024890, 0x1DA8u);
    }
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return (unsigned int)v7;
}
