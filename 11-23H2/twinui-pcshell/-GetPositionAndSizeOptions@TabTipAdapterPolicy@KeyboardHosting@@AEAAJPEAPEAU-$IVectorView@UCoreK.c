/*
 * XREFs of ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x18014A6FC
 * Callers:
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18014A6A0 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180531D94 (-CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@.c)
 * Callees:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800BE9A0 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z @ 0x18014A9FC (-GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z.c)
 *     ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x18014AB40 (-LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z.c)
 *     ??$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x18014AC44 (--$MonitorInfoUsedForCreatingOptions@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_K.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18017B820 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x1805321EC (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(
        KeyboardHosting::TabTipAdapterPolicy *this,
        _QWORD *a2)
{
  __int64 v4; // r8
  char *v5; // r9
  bool v6; // cf
  char *v7; // r10
  char *v8; // rdx
  __int128 v9; // xmm11
  __int128 v10; // xmm12
  __int128 v11; // xmm13
  __int128 v12; // xmm14
  __int128 v13; // xmm15
  char *v14; // r8
  unsigned __int64 v15; // rcx
  __int128 v16; // xmm6
  __int128 v17; // xmm7
  __int128 v18; // xmm8
  __int128 v19; // xmm9
  __int128 v20; // xmm10
  __int64 v21; // rax
  int ForegroundAppRect; // eax
  __int128 v23; // xmm0
  char v24; // al
  __int128 v25; // xmm1
  __int64 v26; // rcx
  __int128 v27; // xmm0
  int PositionAndSizeOptions; // ebx
  HMONITOR v30; // rax
  __int64 v31; // rdx
  const char *v32; // r9
  char *v33; // [rsp+40h] [rbp-C0h]
  char *v34; // [rsp+48h] [rbp-B8h]
  char *v35; // [rsp+50h] [rbp-B0h]
  unsigned int v36[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v37; // [rsp+70h] [rbp-90h] BYREF
  __int128 v38; // [rsp+80h] [rbp-80h] BYREF
  POINT pt[2]; // [rsp+90h] [rbp-70h] BYREF
  struct tagMONITORINFO mi; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  *a2 = 0LL;
  v35 = (char *)this + 544;
  v34 = (char *)this + 596;
  v4 = *((_BYTE *)this + 596) != 0 ? 0x50 : 0;
  v5 = (char *)this + 432;
  v6 = *((_BYTE *)this + 544) != 0;
  v7 = (char *)this + 400;
  v8 = (char *)this + 240;
  pt[0] = *(POINT *)((char *)this + 312);
  v9 = *(_OWORD *)((char *)this + v4 + 232);
  v10 = *(_OWORD *)((char *)this + v4 + 248);
  *(_QWORD *)&v38 = *((_QWORD *)this + 49);
  v11 = *(_OWORD *)((char *)this + v4 + 264);
  v12 = *(_OWORD *)((char *)this + v4 + 280);
  *(_QWORD *)&v37 = *((_QWORD *)this + 29);
  v13 = *(_OWORD *)((char *)this + v4 + 296);
  v33 = (char *)this + 352;
  v14 = (char *)this + 272;
  v15 = -(__int64)v6 & 0xFFFFFFFFFFFFFF60uLL;
  v16 = *(_OWORD *)((char *)this + v15 + 392);
  v17 = *(_OWORD *)((char *)this + v15 + 408);
  v18 = *(_OWORD *)((char *)this + v15 + 424);
  v19 = *(_OWORD *)((char *)this + v15 + 440);
  v20 = *(_OWORD *)((char *)this + v15 + 456);
  TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForCreatingOptions<unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,bool &,bool &>(
    &v37,
    v8,
    v14,
    &v38,
    v7,
    v5,
    pt,
    (char *)this + 320,
    v33,
    v34,
    v35);
  v21 = *((_QWORD *)this + 27);
  *(_OWORD *)(v21 + 40) = v9;
  *(_OWORD *)(v21 + 120) = v16;
  *(_OWORD *)(v21 + 56) = v10;
  *(_OWORD *)(v21 + 136) = v17;
  *(_OWORD *)(v21 + 72) = v11;
  *(_OWORD *)(v21 + 152) = v18;
  *(_OWORD *)(v21 + 88) = v12;
  *(_OWORD *)(v21 + 168) = v19;
  *(_OWORD *)(v21 + 104) = v13;
  *(_OWORD *)(v21 + 184) = v20;
  *(_OWORD *)(v21 + 200) = *(_OWORD *)((char *)this + 392);
  *(_OWORD *)(v21 + 216) = *(_OWORD *)((char *)this + 408);
  *(_OWORD *)(v21 + 232) = *(_OWORD *)((char *)this + 424);
  *(_OWORD *)(v21 + 248) = *(_OWORD *)((char *)this + 440);
  *(_OWORD *)(v21 + 264) = *(_OWORD *)((char *)this + 456);
  v36[0] = *((_DWORD *)this + 164);
  KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionFromRegistryIfNecessary(this, v36[0]);
  if ( !*(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                (char *)this + 560,
                                &v37,
                                v36)
                 + 40LL) )
    goto LABEL_2;
  KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
    this,
    (struct Windows::Foundation::Point *)&v38,
    v36[0]);
  pt[0].x = (int)*(float *)&v38;
  pt[0].y = (int)*((float *)&v38 + 1);
  v30 = MonitorFromPoint(pt[0], 2u);
  if ( !v30 )
  {
    PositionAndSizeOptions = -2147418113;
    v31 = 1165LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v31,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)PositionAndSizeOptions);
    return (unsigned int)PositionAndSizeOptions;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v30, &mi) )
  {
LABEL_2:
    v37 = 0LL;
    ForegroundAppRect = KeyboardHosting::ViewRectHelper::GetForegroundAppRect((struct Windows::Foundation::Rect *)&v37);
    if ( ForegroundAppRect < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x494,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)ForegroundAppRect);
    v23 = v37;
    v24 = *((_BYTE *)this + 605);
    v25 = *((_OWORD *)this + 9);
    v26 = *((_QWORD *)this + 27);
    *((_OWORD *)this + 12) = v37;
    v37 = v23;
    v27 = *((_OWORD *)this + 11);
    v38 = v25;
    *(_OWORD *)&pt[0].x = v27;
    PositionAndSizeOptions = KeyboardHosting::PositionAndSizeOptionsProvider::GetPositionAndSizeOptions(
                               v26,
                               &v38,
                               (float *)pt,
                               (float *)&v37,
                               v24,
                               (__int64)a2);
    if ( PositionAndSizeOptions >= 0 )
      return 0LL;
    v31 = 1175LL;
    goto LABEL_9;
  }
  return wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x490,
           (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
           v32);
}
