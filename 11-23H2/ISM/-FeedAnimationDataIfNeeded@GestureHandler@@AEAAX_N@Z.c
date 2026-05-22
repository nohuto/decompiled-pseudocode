/*
 * XREFs of ?FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z @ 0x180156C98
 * Callers:
 *     ?CancelOperation@GestureHandler@@QEAAXXZ @ 0x1801568C0 (-CancelOperation@GestureHandler@@QEAAXXZ.c)
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180157738 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 *     ?StartAnimation@GestureHandler@@QEAAXAEAV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@_N@Z @ 0x180157BB8 (-StartAnimation@GestureHandler@@QEAAXAEAV-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$allo.c)
 *     ?StartAnimation@GestureHandler@@QEAAXI_N@Z @ 0x180157D70 (-StartAnimation@GestureHandler@@QEAAXI_N@Z.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x180034EC0 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FeedAnimationData@InputGesture@InputETW@@SAXPEBG_K11UtagPOINTF@@22_N@Z @ 0x180156B34 (-FeedAnimationData@InputGesture@InputETW@@SAXPEBG_K11UtagPOINTF@@22_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GestureHandler::FeedAnimationDataIfNeeded(GestureHandler *this, bool a2)
{
  struct IAnimationDataProvider *AnimationDataProvider; // rdi
  void (__fastcall *v5)(struct IAnimationDataProvider *, __int64 *, void (__fastcall ****)(_QWORD)); // rbp
  void (__fastcall ***v6)(_QWORD); // rcx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  void (__fastcall ***v15)(_QWORD); // [rsp+80h] [rbp+18h] BYREF

  if ( *((_QWORD *)this + 31) )
  {
    AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
    v5 = *(void (__fastcall **)(struct IAnimationDataProvider *, __int64 *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)AnimationDataProvider + 48LL);
    v6 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 31);
    v15 = v6;
    if ( v6 )
      (**v6)(v6);
    v5(AnimationDataProvider, &v14, &v15);
    InputETW::InputGesture::FeedAnimationData(
      *((const unsigned __int16 **)this + 3),
      *((unsigned int *)this + 34),
      *((_QWORD *)this + 33),
      *((_QWORD *)this + 32),
      *(struct tagPOINTF *)((char *)this + 152),
      *(struct tagPOINTF *)((char *)this + 160),
      *(struct tagPOINTF *)((char *)this + 168),
      a2);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v14 + 8) + 48LL))(v14 + 8, 1LL);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1DE,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturehandler.cpp",
        (const char *)(unsigned int)v7,
        0);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v14 + 8) + 48LL))(v14 + 8, 4LL);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1E1,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturehandler.cpp",
        (const char *)(unsigned int)v8,
        0);
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v14 + 8) + 48LL))(v14 + 8, 2LL);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1E4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturehandler.cpp",
        (const char *)(unsigned int)v9,
        0);
    LOBYTE(v10) = a2;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v14 + 8) + 24LL))(v14 + 8, 3LL, v10);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1E6,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\components\\inputgestures\\system\\gesturehandler.cpp",
        (const char *)(unsigned int)v11,
        0);
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
}
