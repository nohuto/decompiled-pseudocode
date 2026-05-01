/*
 * XREFs of ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18014A300
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A5144 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z @ 0x18014A448 (-SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z.c)
 *     ??$_Copy_unchecked@PEAV?$shared_ptr@UKBViewInfo@@@std@@PEAV12@@std@@YAPEAV?$shared_ptr@UKBViewInfo@@@0@PEAV10@00@Z @ 0x18014B6B0 (--$_Copy_unchecked@PEAV-$shared_ptr@UKBViewInfo@@@std@@PEAV12@@std@@YAPEAV-$shared_ptr@UKBViewIn.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAUtagRECT@@AEBU1@@Z @ 0x1805092FC (--$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTeleme.c)
 *     KeyboardHosting::ForceToFitRectWithinMonitorRect @ 0x18050F9F0 (KeyboardHosting--ForceToFitRectWithinMonitorRect.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x180515F74 (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?_Clear_and_reserve_geometric@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAX_K@Z @ 0x18051C598 (-_Clear_and_reserve_geometric@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_p.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::WorkAreaChanged(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        struct tagRECT *a3)
{
  __int64 v4; // rbx
  RTL_SRWLOCK *v5; // r13
  _QWORD *v6; // rsi
  char *v7; // r12
  char *v8; // r14
  _QWORD *v9; // r14
  _QWORD *v10; // rdi
  struct tagRECT *v11; // rax
  int v12; // eax
  unsigned int v13; // r15d
  struct tagRECT *v15; // r13
  __int64 v16; // r14
  int (__fastcall *v17)(__int64, struct IApplicationFrame **); // rbx
  TouchKeyboardExperienceManager *v18; // rcx
  int v19; // eax
  _QWORD *j; // rsi
  std::_Ref_count_base *v21; // rcx
  _QWORD *i; // rsi
  std::_Ref_count_base *v23; // rcx
  struct IApplicationFrame *v24; // [rsp+20h] [rbp-69h] BYREF
  __int128 v25; // [rsp+28h] [rbp-61h] BYREF
  __int64 v26; // [rsp+38h] [rbp-51h]
  struct tagRECT *v27; // [rsp+40h] [rbp-49h]
  __int128 v28; // [rsp+48h] [rbp-41h] BYREF
  __int128 v29; // [rsp+58h] [rbp-31h]
  HWND hWnd; // [rsp+68h] [rbp-21h] BYREF
  float v31; // [rsp+70h] [rbp-19h] BYREF
  float v32; // [rsp+74h] [rbp-15h]
  float v33; // [rsp+78h] [rbp-11h]
  float v34; // [rsp+7Ch] [rbp-Dh]
  struct tagRECT v35; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT Rect; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v27 = a3;
  if ( !*((_QWORD *)this + 57) )
    return 0LL;
  v25 = 0LL;
  v4 = 0LL;
  v26 = 0LL;
  v5 = (RTL_SRWLOCK *)((char *)this + 296);
  AcquireSRWLockShared((PSRWLOCK)this + 37);
  *(_QWORD *)&v28 = v5;
  v6 = 0LL;
  if ( &v25 == (__int128 *)((char *)this + 304) )
  {
    v9 = (_QWORD *)*((_QWORD *)&v25 + 1);
    goto LABEL_5;
  }
  v7 = (char *)*((_QWORD *)this + 39);
  v8 = (char *)*((_QWORD *)this + 38);
  if ( !((v7 - v8) >> 4) )
  {
    v6 = 0LL;
    std::_Copy_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *>(
      *((_QWORD *)this + 38),
      *((_QWORD *)this + 39),
      0LL);
    v9 = 0LL;
    *((_QWORD *)&v25 + 1) = 0LL;
LABEL_5:
    v10 = (_QWORD *)v25;
    goto LABEL_6;
  }
  std::vector<std::shared_ptr<KBViewInfo>>::_Clear_and_reserve_geometric(&v25, (v7 - v8) >> 4);
  v10 = (_QWORD *)v25;
  std::_Copy_unchecked<std::shared_ptr<KBViewInfo> *,std::shared_ptr<KBViewInfo> *>(v8, v8, v25);
  v6 = (_QWORD *)*((_QWORD *)&v25 + 1);
  while ( v8 != v7 )
  {
    std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
      v6,
      v8);
    v6 += 2;
    v8 += 16;
  }
  v9 = v6;
  *((_QWORD *)&v25 + 1) = v6;
  v4 = v26;
LABEL_6:
  if ( v5 )
    ReleaseSRWLockShared(v5);
  if ( v10 != v6 )
  {
    v15 = v27;
    do
    {
      if ( !*(_BYTE *)(*v10 + 34LL) )
      {
        v16 = *(_QWORD *)(*v10 + 8LL);
        if ( v16 )
        {
          v24 = 0LL;
          v17 = *(int (__fastcall **)(__int64, struct IApplicationFrame **))(*(_QWORD *)v16 + 32LL);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
          if ( v17(v16, &v24) >= 0
            && (*(int (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)v24 + 24LL))(v24, &hWnd) >= 0 )
          {
            if ( GetWindowRect(hWnd, &Rect) )
            {
              if ( *((_DWORD *)this + 86) <= Rect.left
                && Rect.right <= *((_DWORD *)this + 88)
                && *((_DWORD *)this + 87) <= Rect.top
                && Rect.bottom <= *((_DWORD *)this + 89) )
              {
                *(float *)&v29 = (float)Rect.left;
                *((float *)&v29 + 1) = (float)Rect.top;
                *((float *)&v29 + 2) = (float)(Rect.right - Rect.left);
                *((float *)&v29 + 3) = (float)(Rect.bottom - Rect.top);
                v28 = v29;
                if ( (unsigned __int8)KeyboardHosting::ForceToFitRectWithinMonitorRect(&v28, v15, &v31) )
                {
                  v35.left = (int)v31;
                  v35.top = (int)v32;
                  v35.right = (int)(float)(v33 + v31);
                  v35.bottom = (int)(float)(v34 + v32);
                  v19 = TouchKeyboardExperienceManager::SetHostedPos(
                          v18,
                          *(struct IApplicationFrameWrapper **)(*v10 + 8LL),
                          v24,
                          &v35);
                  if ( v19 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0xE9D,
                      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                      (const char *)(unsigned int)v19);
                  *(_QWORD *)&v28 = WindowsGetStringRawBuffer(*(HSTRING *)(*v10 + 112LL), 0LL);
                  TouchKeyboardExperienceTelemetryLogger::WorkAreaChanged_ForceToFitRectInMonitor<unsigned short const *,tagRECT &,tagRECT const &>(
                    &v28,
                    &Rect,
                    &v35);
                }
              }
            }
          }
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
        }
      }
      v10 += 2;
    }
    while ( v10 != v6 );
    v4 = v26;
    v9 = (_QWORD *)*((_QWORD *)&v25 + 1);
    v10 = (_QWORD *)v25;
  }
  v11 = v27;
  *(struct tagRECT *)((char *)this + 344) = *v27;
  v12 = KeyboardHosting::TabTipAdapter::SetWorkAreaRect(*((KeyboardHosting::TabTipAdapter **)this + 57), v11);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( v10 )
    {
      for ( i = v10; i != v9; i += 2 )
      {
        v23 = (std::_Ref_count_base *)i[1];
        if ( v23 )
          std::_Ref_count_base::_Decref(v23);
      }
      std::_Deallocate<16,0>(v10, (v4 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEA7,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v12);
  if ( v10 )
  {
    for ( j = v10; j != v9; j += 2 )
    {
      v21 = (std::_Ref_count_base *)j[1];
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
    }
    std::_Deallocate<16,0>(v10, (v4 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v13;
}
