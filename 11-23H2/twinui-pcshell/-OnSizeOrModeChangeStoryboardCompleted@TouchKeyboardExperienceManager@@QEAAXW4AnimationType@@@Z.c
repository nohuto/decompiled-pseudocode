/*
 * XREFs of ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x180514BE8
 * Callers:
 *     ?OnStoryboardCompleted@HostingAnimationListener@@UEAAXXZ @ 0x180514E50 (-OnStoryboardCompleted@HostingAnimationListener@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180110D88 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x1802092F0 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180209468 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802DB1F8 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18050DCC8 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::OnSizeOrModeChangeStoryboardCompleted(__int64 a1, int a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r9
  __int32 v7; // eax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // eax
  std::_Ref_count_base *v14; // rdi
  int v15; // [rsp+20h] [rbp-19h]
  int v16; // [rsp+30h] [rbp-9h] BYREF
  std::_Ref_count_base *v17[2]; // [rsp+38h] [rbp-1h] BYREF
  __int64 v18; // [rsp+48h] [rbp+Fh] BYREF
  struct tagRECT v19; // [rsp+50h] [rbp+17h] BYREF
  struct tagRECT v20; // [rsp+60h] [rbp+27h] BYREF
  struct tagRECT v21; // [rsp+70h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  v4 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   a1,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v4 > 5u && tlgKeywordOn((__int64)v4, 16LL) )
  {
    v18 = 0x1000000LL;
    v16 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v5,
      byte_18085D653,
      0LL,
      v6,
      (__int64)&v16,
      (__int64)&v18);
  }
  *(_OWORD *)v17 = 0LL;
  TouchKeyboardExperienceManager::FindViewInfo((RTL_SRWLOCK *)a1, *(_DWORD *)(a1 + 612), (__int64)v17);
  if ( *(_DWORD *)(a1 + 616) == 1 )
  {
    if ( *(_BYTE *)(a1 + 944) && *(_DWORD *)(a1 + 940) == 1 )
    {
      v7 = 2;
LABEL_27:
      _InterlockedExchange((volatile __int32 *)(a1 + 940), v7);
      goto LABEL_31;
    }
    if ( *(_DWORD *)(a1 + 940) != 1 && !*((_BYTE *)v17[0] + 34) )
    {
      v19 = *(struct tagRECT *)((char *)v17[0] + 120);
      v8 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
             (KeyboardHosting::TabTipAdapter **)a1,
             (const struct tagRECT *)*(unsigned int *)(a1 + 612),
             &v19,
             (struct tagRECT *)((char *)v17[0] + 136));
      v9 = retaddr;
      if ( v8 < 0 )
      {
        v10 = 1065LL;
LABEL_25:
        wil::details::in1diag3::_Log_Hr(
          v9,
          (void *)v10,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
        goto LABEL_26;
      }
      goto LABEL_26;
    }
    v11 = *(_QWORD *)(a1 + 816);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 96LL))(v11);
    v12 = 1;
    while ( _InterlockedExchange((volatile __int32 *)(a1 + 840), 1) )
    {
      while ( *(_DWORD *)(a1 + 840) )
      {
        v13 = v12;
        if ( !v12 )
          goto LABEL_19;
        do
        {
          _mm_pause();
          --v13;
        }
        while ( v13 );
        if ( v12 >= 64 )
          v12 = 64;
        else
LABEL_19:
          v12 *= 2;
      }
    }
    v21 = *(struct tagRECT *)(a1 + 844);
    _InterlockedExchange((volatile __int32 *)(a1 + 840), 0);
    v15 = a2;
    v14 = v17[0];
    if ( (int)TouchKeyboardExperienceManager::AnimateInputViewForSizeOrModeChange(
                a1,
                (__int64)v17[0],
                1u,
                &v21,
                v15,
                L"StoryboardCompleted") < 0 )
    {
      v20 = *(struct tagRECT *)((char *)v14 + 120);
      v8 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
             (KeyboardHosting::TabTipAdapter **)a1,
             (const struct tagRECT *)*(unsigned int *)(a1 + 612),
             &v20,
             (struct tagRECT *)((char *)v14 + 136));
      v9 = retaddr;
      if ( v8 < 0 )
      {
        v10 = 1058LL;
        goto LABEL_25;
      }
LABEL_26:
      v7 = 0;
      goto LABEL_27;
    }
  }
  else if ( !*(_BYTE *)(a1 + 937) && *(_DWORD *)(a1 + 620) != 1 )
  {
    TouchKeyboardExperienceManager::FireInputPaneHidingEvent(
      (TouchKeyboardExperienceManager *)a1,
      *(_DWORD *)(a1 + 612),
      0);
  }
LABEL_31:
  if ( v17[1] )
    std::_Ref_count_base::_Decref(v17[1]);
}
