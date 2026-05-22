/*
 * XREFs of ?CreateExpressionAnimationWithExpression@Api@Compositor@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIExpressionAnimation@345@@Z @ 0x18005F160
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ @ 0x18001E0A8 (-EnableMessageGroup@CompositorCommon@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??0ExpressionAnimation@Composition@UI@Windows@@QEAA@XZ @ 0x18005FC0C (--0ExpressionAnimation@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ @ 0x18005FE80 (-Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ.c)
 *     ?EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4DeferredOperationKind@123@@Z @ 0x180065280 (-EnqueueOperationAndPassOwnershipWorker@ContextSession@WRL2@Microsoft@@AEAAXPEAUIUnknown@@W4Defe.c)
 *     ??$_Destroy_range@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU1234@AEAV?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@0@@Z @ 0x180068CA4 (--$_Destroy_range@V-$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUA.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Api::CreateExpressionAnimationWithExpression(
        struct _RTL_CRITICAL_SECTION *this,
        HSTRING a2,
        struct Windows::UI::Composition::IExpressionAnimation **a3)
{
  Windows::UI::Composition::CompositorCommon *v3; // rsi
  HANDLE ProcessHeap; // rax
  void *v7; // rax
  Windows::UI::Composition::ExpressionAnimation *v8; // rax
  __int64 v9; // rbx
  unsigned int v10; // ecx
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // edi
  char v14; // al
  HSTRING v15; // rcx
  HRESULT v16; // eax
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 i; // rdi
  Windows::UI::Composition::AnimationObjectInfo *v20; // rcx
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v27; // [rsp+80h] [rbp+40h] BYREF
  void *v28; // [rsp+90h] [rbp+50h] BYREF
  __int64 v29; // [rsp+98h] [rbp+58h] BYREF

  *a3 = 0LL;
  v3 = (Windows::UI::Composition::CompositorCommon *)&this[-27];
  Microsoft::WRL2::ContextSession::BeginApiEntry(this - 27);
  if ( (*((_BYTE *)v3 + 32) & 2) == 0 )
  {
    v13 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_19;
  }
  v25 = 0LL;
  v29 = 0LL;
  v27 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x400uLL);
  v28 = v7;
  if ( !v7 )
  {
    v13 = -2147024882;
LABEL_28:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v28);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v27);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68D,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)v13);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v29);
    DoStackCaptureDirect(v13, 0x3B6u);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v25);
    goto LABEL_19;
  }
  v8 = (Windows::UI::Composition::ExpressionAnimation *)memset_0(v7, 0, 0x400uLL);
  if ( v8 )
    v9 = Windows::UI::Composition::ExpressionAnimation::ExpressionAnimation(v8);
  else
    v9 = 0LL;
  v28 = 0LL;
  *(_QWORD *)(v9 + 8) = &Windows::UI::Composition::ExpressionAnimation::s_InterfaceType;
  *(_QWORD *)(v9 + 24) = v3;
  v27 = v9;
  if ( v3 != (Windows::UI::Composition::CompositorCommon *)v9
    && _InterlockedIncrement((volatile signed __int32 *)v3 + 4) == 1 )
  {
    (*(void (__fastcall **)(Windows::UI::Composition::CompositorCommon *))(*(_QWORD *)v3 + 80LL))(v3);
  }
  v10 = *(_DWORD *)(v9 + 32) & 0xFFFFFF00 | 0x1F;
  *(_DWORD *)(v9 + 32) = v10;
  *(_DWORD *)(v9 + 32) = v10 ^ (*((_DWORD *)v3 + 8) ^ v10) & 0x100;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(*((_QWORD *)v3 + 53) + 32LL) + 24LL))(
          *(_QWORD *)(*((_QWORD *)v3 + 53) + 32LL),
          *(unsigned int *)(*((_QWORD *)v3 + 53) + 64LL),
          v9,
          v9 + 120);
  v13 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionobject.cpp",
      (const char *)(unsigned int)v11);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionanimation.cpp",
      (const char *)v13);
    v23 = 54LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtexpressionanimation.cpp",
      (const char *)v13);
    goto LABEL_28;
  }
  v14 = *((_BYTE *)v3 + 452);
  if ( (v14 & 1) == 0 )
  {
    v22 = *((_DWORD *)v3 + 112) == 0;
    *((_BYTE *)v3 + 452) = v14 | 1;
    if ( v22 )
      Windows::UI::Composition::CompositorCommon::EnableMessageGroup(v3, v12);
  }
  *(_DWORD *)(v9 + 124) |= 1u;
  *(_QWORD *)(v9 + 296) = 1LL;
  if ( !a2 )
    goto LABEL_18;
  v15 = *(HSTRING *)(v9 + 992);
  if ( v15 )
  {
    WindowsDeleteString(v15);
    *(_QWORD *)(v9 + 992) = 0LL;
  }
  v16 = WindowsDuplicateString(a2, (HSTRING *)(v9 + 992));
  v13 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtexpressionanimation.cpp",
      (const char *)(unsigned int)v16);
    v23 = 61LL;
    goto LABEL_27;
  }
  Windows::UI::Composition::ExpressionAnimationBuilder::Reset((Windows::UI::Composition::ExpressionAnimationBuilder *)(v9 + 360));
  v17 = *(_QWORD *)(v9 + 24);
  *(_BYTE *)(v9 + 336) &= 0xFCu;
  v18 = *(_QWORD *)(v9 + 320);
  for ( i = *(_QWORD *)(v9 + 312); i != v18; i += 40LL )
  {
    v24 = *(_QWORD *)(i + 8);
    *(_QWORD *)(i + 8) = 0LL;
    Microsoft::WRL2::ContextSession::EnqueueOperationAndPassOwnershipWorker(v17, v24);
  }
  v20 = *(Windows::UI::Composition::AnimationObjectInfo **)(v9 + 312);
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(v9 + 320) - (_QWORD)v20) >> 3) )
  {
    std::_Destroy_range<std::allocator<Windows::UI::Composition::AnimationObjectInfo>>(v20);
    *(_QWORD *)(v9 + 320) = *(_QWORD *)(v9 + 312);
    ++*(_DWORD *)(v9 + 340);
  }
LABEL_18:
  *a3 = (struct Windows::UI::Composition::IExpressionAnimation *)((v9 + 344) & -(__int64)(v9 != 0));
  v13 = 0;
LABEL_19:
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v3);
  return v13;
}
