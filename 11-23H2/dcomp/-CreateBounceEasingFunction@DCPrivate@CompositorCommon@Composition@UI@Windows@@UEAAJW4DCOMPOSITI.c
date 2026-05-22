/*
 * XREFs of ?CreateBounceEasingFunction@DCPrivate@CompositorCommon@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@HMPEAPEAUICompositionEasingFunction@345@@Z @ 0x180124F60
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalUnlock@?$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18008282C (-InternalUnlock@-$RefPtr@VAnimationPropertyInfo@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ.c)
 *     ?CreateBounceEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EASING_FUNCTION_MODE@@HMPEAPEAVCompositionEasingFunction@234@@Z @ 0x180124ECC (-CreateBounceEasingFunction@CompositorCommon@Composition@UI@Windows@@QEAAJW4DCOMPOSITION_EASING_.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorCommon::DCPrivate::CreateBounceEasingFunction(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        float a4,
        volatile signed __int32 *a5)
{
  volatile signed __int32 *v5; // rsi
  __int64 v6; // rdi
  __int64 v9; // rdx
  unsigned int v10; // ebx
  int BounceEasingFunction; // eax
  __int64 v12; // rdx
  volatile signed __int32 *v13; // rax

  v5 = a5;
  v6 = a1 - 328;
  *(_QWORD *)a5 = 0LL;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)(a1 - 328));
  if ( (*(_BYTE *)(v6 + 32) & 2) != 0 )
  {
    a5 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&a5, v9);
    BounceEasingFunction = Windows::UI::Composition::CompositorCommon::CreateBounceEasingFunction(
                             v6,
                             a2,
                             a3,
                             a4,
                             (Microsoft::WRL2::NestableRuntimeClass *)&a5);
    v10 = BounceEasingFunction;
    if ( BounceEasingFunction < 0 )
    {
      DoStackCaptureDirect(BounceEasingFunction, 0x1BE6u);
    }
    else
    {
      v13 = a5;
      a5 = 0LL;
      *(_QWORD *)v5 = (unsigned __int64)(v13 + 32) & -(__int64)(v13 != 0LL);
      v10 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::AnimationPropertyInfo>::InternalUnlock(&a5, v12);
  }
  else
  {
    v10 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v6);
  return v10;
}
