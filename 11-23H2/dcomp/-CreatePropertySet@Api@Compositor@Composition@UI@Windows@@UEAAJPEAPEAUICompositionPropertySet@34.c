/*
 * XREFs of ?CreatePropertySet@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUICompositionPropertySet@345@@Z @ 0x1800812F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreatePropertySet@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVCompositionPropertySet@234@@Z @ 0x180081378 (-CreatePropertySet@CompositorCommon@Composition@UI@Windows@@QEAAJPEAPEAVCompositionPropertySet@2.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreatePropertySet(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::UI::Composition::ICompositionPropertySet **a2)
{
  Windows::UI::Composition::CompositorCommon *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  struct Windows::UI::Composition::CompositionPropertySet *v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::CompositorCommon *)&this[-27];
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 27);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v7 = 0LL;
    v4 = Windows::UI::Composition::CompositorCommon::CreatePropertySet(v2, &v7);
    v5 = v4;
    if ( v4 < 0 )
    {
      DoStackCaptureDirect(v4, 0x426u);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v7);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::ICompositionPropertySet *)(((unsigned __int64)v7 + 136) & -(__int64)(v7 != 0LL));
      v5 = 0;
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v2);
  return v5;
}
