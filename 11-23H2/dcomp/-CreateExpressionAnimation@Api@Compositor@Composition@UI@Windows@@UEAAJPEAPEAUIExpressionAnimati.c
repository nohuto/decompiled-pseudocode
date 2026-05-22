/*
 * XREFs of ?CreateExpressionAnimation@Api@Compositor@Composition@UI@Windows@@UEAAJPEAPEAUIExpressionAnimation@345@@Z @ 0x18005E7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateExpressionAnimation@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVExpressionAnimation@234@@Z @ 0x18005EA10 (-CreateExpressionAnimation@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAPEAVE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreateExpressionAnimation(
        struct _RTL_CRITICAL_SECTION *this,
        struct Windows::UI::Composition::IExpressionAnimation **a2)
{
  Windows::UI::Composition::CompositorCommon *v2; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  struct Windows::UI::Composition::ExpressionAnimation *v6; // rax
  struct Windows::UI::Composition::ExpressionAnimation *v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::CompositorCommon *)&this[-27];
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 27);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v8 = 0LL;
    v4 = Windows::UI::Composition::CompositorCommon::CreateExpressionAnimation(v2, 0LL, &v8);
    v5 = v4;
    if ( v4 < 0 )
    {
      DoStackCaptureDirect(v4, 0x39Au);
    }
    else
    {
      v6 = v8;
      v8 = 0LL;
      *a2 = (struct Windows::UI::Composition::IExpressionAnimation *)(((unsigned __int64)v6 + 344) & -(__int64)(v6 != 0LL));
      v5 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v8);
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
