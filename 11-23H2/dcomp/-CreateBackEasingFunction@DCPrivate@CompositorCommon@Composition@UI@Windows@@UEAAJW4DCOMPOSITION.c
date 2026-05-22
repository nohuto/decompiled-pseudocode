/*
 * XREFs of ?CreateBackEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@MPEAPEAUICompositionEasingFunction@345@@Z @ 0x180124DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?CreateBackEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@MPEAPEAVCompositionEasingFunction@234@@Z @ 0x180124D70 (-CreateBackEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EASING_FU.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::DCPrivate::CreateBackEasingFunction(
        __int64 a1,
        unsigned int a2,
        float a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rax
  volatile signed __int32 *v13; // [rsp+40h] [rbp+8h] BYREF

  *a4 = 0LL;
  v4 = a1 - 328;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)(a1 - 328));
  if ( (*(_BYTE *)(v4 + 32) & 2) != 0 )
  {
    v13 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v13, v7);
    v9 = Windows::UI::Composition::CompositorCommon::CreateBackEasingFunction(v4, a2, a3, &v13);
    v8 = v9;
    if ( v9 < 0 )
    {
      DoStackCaptureDirect(v9, 0x1BC8u);
    }
    else
    {
      v11 = v13;
      v13 = 0LL;
      *a4 = (unsigned __int64)(v11 + 32) & -(__int64)(v11 != 0LL);
      v8 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v13, v10);
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v4);
  return v8;
}
