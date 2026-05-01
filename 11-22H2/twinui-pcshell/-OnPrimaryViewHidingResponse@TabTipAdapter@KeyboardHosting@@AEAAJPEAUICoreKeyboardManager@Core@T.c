/*
 * XREFs of ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x180527770
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x180185C88 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?InvokeIsAnyViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NXZ @ 0x180185EA8 (-InvokeIsAnyViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x18018B7A0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CF31A (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x1802D2954 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ??0PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@AEBU012@@Z @ 0x180521284 (--0PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@AEBU012@@Z.c)
 *     ??1PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@XZ @ 0x180521514 (--1PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@V?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@XZ @ 0x180521718 (--B-$ComPtrRef@V-$ComPtr@U-$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI.c)
 *     ?InvokeInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJI_N@Z @ 0x180524960 (-InvokeInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJI_N@Z.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x18074B410 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnPrimaryViewHidingResponse(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewHidingResponseEventArgs *a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  IhmNotification *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, _QWORD, _BYTE *, char *, int *, __int64 *); // rbx
  __int64 *v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  int v22; // [rsp+20h] [rbp-89h]
  char v23; // [rsp+40h] [rbp-69h] BYREF
  char v24; // [rsp+41h] [rbp-68h] BYREF
  _BYTE v25[6]; // [rsp+42h] [rbp-67h] BYREF
  __int64 v26; // [rsp+48h] [rbp-61h] BYREF
  int v27; // [rsp+50h] [rbp-59h] BYREF
  __int64 v28; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v29[64]; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v30; // [rsp+A0h] [rbp-9h]
  char v31; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v5 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   (__int64)this,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
  {
    v26 = (__int64)"TabTipAdapter::OnPrimaryViewHidingResponse";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)v5,
      byte_18085D78C,
      v6,
      v7,
      (const wchar_t **)&v26);
  }
  if ( *((_QWORD *)this + 66) )
  {
    KeyboardHosting::TabTipAdapter::PendingShowHideViewData::PendingShowHideViewData(
      (KeyboardHosting::TabTipAdapter::PendingShowHideViewData *)v29,
      *(const struct KeyboardHosting::TabTipAdapter::PendingShowHideViewData **)(*((_QWORD *)this + 63)
                                                                               + 8
                                                                               * (*((_QWORD *)this + 65) & (*((_QWORD *)this + 64) - 1LL))));
    if ( v31 )
    {
      while ( *((_QWORD *)this + 66) )
      {
        std::vector<Geometry::CRect>::_Tidy(*(_QWORD *)(*((_QWORD *)this + 63)
                                                      + 8 * (*((_QWORD *)this + 65) & (*((_QWORD *)this + 64) - 1LL))) + 96LL);
        v9 = (*((_QWORD *)this + 66))-- == 1LL;
        if ( v9 )
          *((_QWORD *)this + 65) = 0LL;
        else
          ++*((_QWORD *)this + 65);
      }
      v8 = -2147418113;
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x4DA,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_30;
    }
    v23 = 0;
    (*(void (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewHidingResponseEventArgs *, char *))(*(_QWORD *)a3 + 48LL))(
      a3,
      &v23);
    if ( !v23 )
    {
      v8 = KeyboardHosting::TabTipAdapter::InvokeInputAppRequestedHide(this);
      if ( v8 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 9) + 112LL))(
                *((_QWORD *)this + 9),
                v30,
                0LL);
        if ( v11 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xE0,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)(unsigned int)v11,
            v22);
        goto LABEL_30;
      }
      if ( !KeyboardHosting::TabTipAdapter::InvokeIsAnyViewShown(this) )
      {
        v12 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, 0);
        v8 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4ED,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)(unsigned int)v12);
LABEL_30:
          KeyboardHosting::TabTipAdapter::PendingShowHideViewData::~PendingShowHideViewData((KeyboardHosting::TabTipAdapter::PendingShowHideViewData *)v29);
          return v8;
        }
      }
LABEL_26:
      std::vector<Geometry::CRect>::_Tidy(*(_QWORD *)(*((_QWORD *)this + 63)
                                                    + 8 * (*((_QWORD *)this + 65) & (*((_QWORD *)this + 64) - 1LL))) + 96LL);
      v9 = (*((_QWORD *)this + 66))-- == 1LL;
      if ( v9 )
        *((_QWORD *)this + 65) = 0LL;
      else
        ++*((_QWORD *)this + 65);
      v8 = 0;
      goto LABEL_30;
    }
    v13 = (IhmNotification *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                               v10,
                               _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v13 > 5u )
    {
      v28 = (__int64)"TabTipAdapter::OnPrimaryViewHidingResponse - HideCancelled";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)v13,
        byte_18085D78C,
        v14,
        v15,
        (const wchar_t **)&v28);
    }
    LOBYTE(v13) = 1;
    IhmNotification::SendKeyboardSetVisible(v13, 0, v14);
    v26 = 0LL;
    v16 = *((_QWORD *)this + 15);
    v17 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, char *, int *, __int64 *))(*(_QWORD *)v16 + 304LL);
    v28 = (__int64)&v26;
    v18 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption>>>::operator Windows::Foundation::Collections::IVectorView<Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeOption> * *((__int64 **)&v28);
    v19 = v17(v16, 0LL, v25, &v24, &v27, v18);
    v8 = v19;
    if ( v19 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 24LL))(
              (char *)this + 8,
              (unsigned int)v27,
              0LL);
      v8 = v19;
      if ( v19 >= 0 )
      {
        Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v26);
        goto LABEL_26;
      }
      v20 = 1278LL;
    }
    else
    {
      v20 = 1277LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v19);
    Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v26);
    goto LABEL_30;
  }
  v8 = -2147418113;
  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x4CF,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)0x8000FFFFLL);
  return v8;
}
