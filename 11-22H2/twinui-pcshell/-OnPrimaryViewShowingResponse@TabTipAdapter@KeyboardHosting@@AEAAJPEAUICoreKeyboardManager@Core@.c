/*
 * XREFs of ?OnPrimaryViewShowingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewShowingResponseEventArgs@45678@@Z @ 0x180527AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CF31A (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1802D2954 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??0ViewOptions@@QEAA@AEBU0@@Z @ 0x1802DA8C8 (--0ViewOptions@@QEAA@AEBU0@@Z.c)
 *     ??4ViewOptions@@QEAAAEAU0@$$QEAU0@@Z @ 0x1802DCDCE (--4ViewOptions@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ??0PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@AEBU012@@Z @ 0x180521284 (--0PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@AEBU012@@Z.c)
 *     ??1PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@XZ @ 0x180521514 (--1PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@XZ.c)
 *     ?GetViewOptions@@YA?AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@AEBV?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180523CF8 (-GetViewOptions@@YA-AUViewOptions@@AEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@.c)
 *     ?InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z @ 0x180524A60 (-InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18074B410 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnPrimaryViewShowingResponse(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewShowingResponseEventArgs *a3)
{
  unsigned int v5; // edi
  bool v6; // zf
  bool v7; // r8
  __int64 ViewOptions; // rax
  ViewOptions *v9; // rax
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  _BYTE v15[8]; // [rsp+30h] [rbp-D0h] BYREF
  int v16[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+4Ch] [rbp-B4h]
  int v19; // [rsp+54h] [rbp-ACh]
  __int128 v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]
  __m128 v22[4]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v23; // [rsp+C0h] [rbp-40h]
  float v24; // [rsp+C8h] [rbp-38h]
  float v25; // [rsp+CCh] [rbp-34h]
  float v26; // [rsp+D0h] [rbp-30h]
  float v27; // [rsp+D4h] [rbp-2Ch]
  char v28; // [rsp+D8h] [rbp-28h]
  _BYTE v29[32]; // [rsp+E0h] [rbp-20h] BYREF
  ViewOptions v30[8]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v31[24]; // [rsp+120h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  if ( *((_QWORD *)this + 66) )
  {
    KeyboardHosting::TabTipAdapter::PendingShowHideViewData::PendingShowHideViewData(
      (KeyboardHosting::TabTipAdapter::PendingShowHideViewData *)v22,
      *(const struct KeyboardHosting::TabTipAdapter::PendingShowHideViewData **)(*((_QWORD *)this + 63)
                                                                               + 8
                                                                               * (*((_QWORD *)this + 65) & (*((_QWORD *)this + 64) - 1LL))));
    if ( !v28 )
    {
      while ( *((_QWORD *)this + 66) )
      {
        std::vector<Geometry::CRect>::_Tidy(*(_QWORD *)(*((_QWORD *)this + 63)
                                                      + 8 * (*((_QWORD *)this + 65) & (*((_QWORD *)this + 64) - 1LL))) + 96LL);
        v6 = (*((_QWORD *)this + 66))-- == 1LL;
        if ( v6 )
          *((_QWORD *)this + 65) = 0LL;
        else
          ++*((_QWORD *)this + 65);
      }
      v5 = -2147418113;
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x4A3,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_22;
    }
    v15[0] = 0;
    (*(void (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewShowingResponseEventArgs *, _BYTE *))(*(_QWORD *)a3 + 48LL))(
      a3,
      v15);
    if ( v15[0] )
    {
      IhmNotification::SendKeyboardSetVisible(0LL, 0, v7);
    }
    else
    {
      v17 = 0;
      v18 = 0LL;
      v19 = 0;
      v20 = 0LL;
      v21 = 0LL;
      (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 16) + 256LL))(*((_QWORD *)this + 16), v16);
      ViewOptions = GetViewOptions((__int64)v30, v22, (__int64)v29, v16[0]);
      ViewOptions::operator=((__int64)&v17, ViewOptions);
      std::vector<Geometry::CRect>::_Tidy((__int64)v31);
      v16[0] = (int)v24;
      v16[1] = (int)v25;
      v16[2] = (int)(float)(v26 + v24);
      v16[3] = (int)(float)(v27 + v25);
      v9 = ViewOptions::ViewOptions(v30, (const struct ViewOptions *)&v17);
      v10 = v23;
      v11 = KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedShow((__int64)this, v23, v16, (__int64)v9);
      v5 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4AF,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v11);
        std::vector<Geometry::CRect>::_Tidy((__int64)&v20);
LABEL_22:
        KeyboardHosting::TabTipAdapter::PendingShowHideViewData::~PendingShowHideViewData((KeyboardHosting::TabTipAdapter::PendingShowHideViewData *)v22);
        return v5;
      }
      if ( v10 == *((_DWORD *)this + 120) )
      {
        v13 = *((unsigned int *)this + 92);
        if ( (_DWORD)v13 != 1 )
        {
          v13 = 2LL;
          *((_DWORD *)this + 92) = 2;
        }
        LOBYTE(v12) = *((_BYTE *)this + 372);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _BYTE))(**((_QWORD **)this + 4) + 624LL))(
          *((_QWORD *)this + 4),
          v13,
          0LL,
          v12,
          *((_BYTE *)this + 373));
        *((_DWORD *)this + 92) = 0;
      }
      std::vector<Geometry::CRect>::_Tidy((__int64)&v20);
    }
    std::vector<Geometry::CRect>::_Tidy(*(_QWORD *)(*((_QWORD *)this + 63)
                                                  + 8 * (*((_QWORD *)this + 65) & (*((_QWORD *)this + 64) - 1LL))) + 96LL);
    v6 = (*((_QWORD *)this + 66))-- == 1LL;
    if ( v6 )
      *((_QWORD *)this + 65) = 0LL;
    else
      ++*((_QWORD *)this + 65);
    v5 = 0;
    goto LABEL_22;
  }
  v5 = -2147418113;
  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x496,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)0x8000FFFFLL);
  return v5;
}
