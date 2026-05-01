/*
 * XREFs of ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x180168B90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA?AW4PLM_APPLICATION_STATE@@XZ @ 0x180063150 (-GetInputAppState@TabTipAdapter@KeyboardHosting@@AEAA-AW4PLM_APPLICATION_STATE@@XZ.c)
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18014B338 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ??$?9UIRemoteTabTipPolicy@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIRemoteTabTipPolicy@@@01@$$T@Z @ 0x180168DBC (--$-9UIRemoteTabTipPolicy@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIRemoteTabTipPolicy@@@01@$$T@Z.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180188BA0 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$EditControlPositionChanged@PEBGAEAURect@Foundation@Windows@@AEAU123@AEAU123@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAURect@Foundation@Windows@@11@Z @ 0x18051E36C (--$EditControlPositionChanged@PEBGAEAURect@Foundation@Windows@@AEAU123@AEAU123@@TouchKeyboardExp.c)
 *     ?GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA?AW4IHM_DISPLAY_MODE@@XZ @ 0x1805239A8 (-GetPrimaryViewDisplayMode@TabTipAdapter@KeyboardHosting@@QEAA-AW4IHM_DISPLAY_MODE@@XZ.c)
 *     ?InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1805248FC (-InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlPositionChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *a3)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // r9
  __int64 (__fastcall *v12)(__int64, __int64 *); // r8
  int v13; // eax
  unsigned int v14; // ebx
  _BYTE v15[4]; // [rsp+20h] [rbp-19h] BYREF
  _DWORD v16[3]; // [rsp+24h] [rbp-15h] BYREF
  __int64 v17; // [rsp+30h] [rbp-9h] BYREF
  int v18; // [rsp+38h] [rbp-1h]
  int v19; // [rsp+3Ch] [rbp+3h]
  __int128 v20; // [rsp+40h] [rbp+7h] BYREF
  __int128 v21; // [rsp+50h] [rbp+17h] BYREF
  _BYTE v22[32]; // [rsp+60h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  v20 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlPositionChangedEventArgs *, __int128 *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v20);
  if ( v4 < 0 )
  {
    v5 = 872LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  *(_OWORD *)((char *)this + 440) = v20;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 16) + 240LL))(*((_QWORD *)this + 16), v15);
  if ( v15[0] && (unsigned int)KeyboardHosting::TabTipAdapter::GetPrimaryViewDisplayMode(this) == 3 )
  {
    KeyboardHosting::TabTipAdapter::InvokeGetForegroundAppId(this, v22);
    (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 16) + 296LL))(*((_QWORD *)this + 16), &v21);
    v17 = std::wstring::c_str(v22);
    TouchKeyboardExperienceTelemetryLogger::EditControlPositionChanged<unsigned short const *,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect &>(
      &v17,
      &v21,
      &v20,
      (char *)this + 456);
    wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>(v22, v7);
  }
  v8 = (__int64 *)*((_QWORD *)this + 15);
  v9 = *v8;
  v21 = v20;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _DWORD *))(v9 + 80))(v8, &v21, v16);
  if ( v4 < 0 )
  {
    v5 = 889LL;
    goto LABEL_3;
  }
  if ( (unsigned __int8)Microsoft::WRL::operator!=<IRemoteTabTipPolicy>((char *)this + 56) )
  {
    v11 = *v10;
    v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v10 + 48LL);
    LODWORD(v17) = (int)*(float *)&v20;
    HIDWORD(v17) = (int)*((float *)&v20 + 1);
    v18 = (int)(float)(*((float *)&v20 + 2) + *(float *)&v20);
    v19 = (int)(float)(*((float *)&v20 + 3) + *((float *)&v20 + 1));
    v4 = v12(v11, &v17);
    if ( v4 < 0 )
    {
      v5 = 892LL;
      goto LABEL_3;
    }
  }
  if ( v16[0] != 3 )
    return 0LL;
  if ( (unsigned int)KeyboardHosting::TabTipAdapter::GetInputAppState((__int64)this) != 1 )
    return 0LL;
  v13 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate((RTL_SRWLOCK *)this);
  v14 = v13;
  if ( v13 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x384,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v13);
  return v14;
}
