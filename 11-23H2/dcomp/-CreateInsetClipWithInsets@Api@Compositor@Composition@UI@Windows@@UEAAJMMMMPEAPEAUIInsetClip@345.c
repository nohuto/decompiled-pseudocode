/*
 * XREFs of ?CreateInsetClipWithInsets@Api@Compositor@Composition@UI@Windows@@UEAAJMMMMPEAPEAUIInsetClip@345@@Z @ 0x18006D9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateInsetClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMPEAPEAVInsetClip@234@@Z @ 0x18006FABC (-CreateInsetClip@CompositorCommon@Composition@UI@Windows@@QEAAJMMMMPEAPEAVInsetClip@234@@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreateInsetClipWithInsets(
        struct _RTL_CRITICAL_SECTION *this,
        float a2,
        float a3,
        float a4,
        float a5,
        struct Windows::UI::Composition::IInsetClip **a6)
{
  struct Windows::UI::Composition::IInsetClip **v6; // rsi
  Windows::UI::Composition::CompositorCommon *v7; // rdi
  int InsetClip; // eax
  unsigned int v9; // ebx

  v6 = a6;
  v7 = (Windows::UI::Composition::CompositorCommon *)&this[-27];
  *a6 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 27);
  if ( (*((_BYTE *)v7 + 32) & 2) != 0 )
  {
    a6 = 0LL;
    InsetClip = Windows::UI::Composition::CompositorCommon::CreateInsetClip(
                  v7,
                  a2,
                  a3,
                  a4,
                  a5,
                  (struct Windows::UI::Composition::InsetClip **)&a6);
    v9 = InsetClip;
    if ( InsetClip < 0 )
    {
      DoStackCaptureDirect(InsetClip, 0x3F0u);
      if ( a6 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease((Microsoft::WRL2::NestableRuntimeClass *)a6);
    }
    else
    {
      *v6 = (struct Windows::UI::Composition::IInsetClip *)((unsigned __int64)(a6 + 21) & -(__int64)(a6 != 0LL));
      v9 = 0;
    }
  }
  else
  {
    v9 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v7);
  return v9;
}
