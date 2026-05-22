/*
 * XREFs of ?CreatePowerEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@MPEAPEAUICompositionEasingFunction@345@@Z @ 0x180079530
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreatePowerEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@MPEAPEAVCompositionEasingFunction@234@@Z @ 0x1800795E8 (-CreatePowerEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EASING_F.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::DCPrivate::CreatePowerEasingFunction(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  *a4 = 0LL;
  v4 = a1 - 328;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)(a1 - 328));
  if ( (*(_BYTE *)(v4 + 32) & 2) != 0 )
  {
    v12 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v12);
    v8 = Windows::UI::Composition::CompositorCommon::CreatePowerEasingFunction(v4, a2, v7, &v12);
    v9 = v8;
    if ( v8 < 0 )
    {
      DoStackCaptureDirect(v8, 0x1C94u);
    }
    else
    {
      v10 = v12;
      v12 = 0LL;
      *a4 = (v10 + 128) & -(__int64)(v10 != 0);
      v9 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&v12);
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
