/*
 * XREFs of ?CreateRedirectVisual@Api@CompositorCommon@Composition@UI@Windows@@UEAAJPEAPEAUIRedirectVisual@345@@Z @ 0x180126880
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?CreateRedirectVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVRedirectVisual@234@@Z @ 0x18012693C (-CreateRedirectVisual@CompositorCommon@Composition@UI@Windows@@QEAAJPEAVVisual@234@PEAPEAVRedire.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::Api::CreateRedirectVisual(
        Windows::UI::Composition::CompositorCommon::Api *this,
        struct Windows::UI::Composition::IRedirectVisual **a2)
{
  Windows::UI::Composition::CompositorCommon *v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  Microsoft::WRL2::NestableRuntimeClass *v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::CompositorCommon::Api *)((char *)this - 184);
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)((char *)this - 184));
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v7 = 0LL;
    v5 = Windows::UI::Composition::CompositorCommon::CreateRedirectVisual(v2, 0LL, &v7);
    v4 = v5;
    if ( v5 < 0 )
    {
      DoStackCaptureDirect(v5, 0x191Cu);
      if ( v7 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v7);
    }
    else
    {
      *a2 = (struct Windows::UI::Composition::IRedirectVisual *)(((unsigned __int64)v7 + 312) & -(__int64)(v7 != 0LL));
      v4 = 0;
    }
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
