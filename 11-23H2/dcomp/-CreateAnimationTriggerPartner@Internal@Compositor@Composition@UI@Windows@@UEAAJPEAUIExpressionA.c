/*
 * XREFs of ?CreateAnimationTriggerPartner@Internal@Compositor@Composition@UI@Windows@@UEAAJPEAUIExpressionAnimation@345@PEAU?$IIterable@PEAVCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@Collections@Foundation@5@PEAPEAUICompositionAnimationTriggerPartner@1345@@Z @ 0x18010E7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x180080BA8 (-InternalUnlock@-$RefPtr@VCompositionDrawingSurface@Composition@UI@Windows@@@WRL2@Microsoft@@IEA.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180086BFC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$SaveIterableListToLocal@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@UICompositionAnimationTriggerValuePartner@2345@@AnimationHelper@Composition@UI@Windows@@YAJPEAU?$IIterable@PEAVCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@Collections@Foundation@3@PEAV?$vector@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V?$allocator@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@std@@@std@@@Z @ 0x18010DF68 (--$SaveIterableListToLocal@VCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Wind.c)
 *     ??1?$vector@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V?$allocator@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x18010E31C (--1-$vector@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@V-$all.c)
 *     ??$MakeAndInitialize2@VCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@V12345@PEAVCompositor@345@AEAPEAVExpressionAnimation@345@AEBV?$span@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$0?0@gsl@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@$$QEAPEAVCompositor@567@AEAPEAVExpressionAnimation@567@AEBV?$span@PEAUICompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@@$0?0@gsl@@@Z @ 0x180120064 (--$MakeAndInitialize2@VCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@@V1234.c)
 */

__int64 __fastcall Windows::UI::Composition::Compositor::Internal::CreateAnimationTriggerPartner(
        __int64 a1,
        struct IUnknown *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdi
  int v10; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v11; // r14
  void *v12; // rsi
  gsl::details *v13; // rcx
  int v14; // eax
  unsigned int v15; // edx
  int v16; // ecx
  Microsoft::WRL2::NestableRuntimeClass *v18; // [rsp+20h] [rbp-40h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v19; // [rsp+28h] [rbp-38h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v21[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v22; // [rsp+48h] [rbp-18h] BYREF
  __int64 v23; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct Microsoft::WRL2::ContextRuntimeClass *v25; // [rsp+98h] [rbp+38h] BYREF

  *a4 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v7 = Windows::UI::Composition::AnimationHelper::SaveIterableListToLocal<Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner>(
         a3,
         (__int64)&v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D9,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)(unsigned int)v7);
LABEL_5:
    std::vector<Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner *>::~vector<Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner *>((__int64)&v22);
    return v8;
  }
  v9 = a1 - 1112;
  Microsoft::WRL2::ContextSession::BeginApiEntry((struct _RTL_CRITICAL_SECTION *)v9);
  if ( (*(_BYTE *)(v9 + 32) & 2) == 0 )
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v9);
    goto LABEL_5;
  }
  v18 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v18);
  v10 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
          (struct Microsoft::WRL2::ContextSession *)v9,
          a2,
          (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::ExpressionAnimation::s_InterfaceType,
          &v25);
  v11 = v25;
  v8 = v10;
  v12 = (void *)v22;
  v18 = v25;
  if ( v10 < 0 )
  {
    v15 = 2014;
    v16 = v10;
  }
  else
  {
    gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v21, (__int64)(*((_QWORD *)&v22 + 1) - v22) >> 3);
    v21[1] = v12;
    if ( v21[0] == -1LL || !v12 && v21[0] )
    {
      gsl::details::terminate(v13);
      __debugbreak();
    }
    v25 = 0LL;
    v19 = v11;
    v20 = v9;
    v14 = ((__int64 (__fastcall *)(struct Microsoft::WRL2::ContextRuntimeClass **, __int64 *, struct Microsoft::WRL2::ContextRuntimeClass **, _QWORD *, Microsoft::WRL2::NestableRuntimeClass *))Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,Windows::UI::Composition::Internal::CompositionAnimationTriggerPartner,Windows::UI::Composition::Compositor *,Windows::UI::Composition::ExpressionAnimation * &,gsl::span<Windows::UI::Composition::Internal::ICompositionAnimationTriggerValuePartner *,-1> const &>)(
            &v25,
            &v20,
            &v19,
            v21,
            v18);
    v8 = v14;
    if ( v14 >= 0 )
    {
      *a4 = ((unsigned __int64)v25 + 136) & -(__int64)(v25 != 0LL);
      v8 = 0;
      goto LABEL_16;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x159F,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v25);
    v15 = 2022;
    v16 = v8;
  }
  DoStackCaptureDirect(v16, v15);
LABEL_16:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionDrawingSurface>::InternalUnlock(&v18);
  Microsoft::WRL2::ContextSession::EndApiEntry((struct _RTL_CRITICAL_SECTION *)v9);
  if ( v12 )
    std::_Deallocate<16,0>(v12, (v23 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL);
  return v8;
}
