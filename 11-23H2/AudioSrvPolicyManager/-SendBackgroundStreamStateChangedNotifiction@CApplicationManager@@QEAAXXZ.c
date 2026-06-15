/*
 * XREFs of ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18002F23C
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180005E20 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000CCE0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180005D80 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000B5A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAAEAPEAVCApplication@@AEAPEAU__POSITION@@@Z @ 0x18000BC10 (-GetNext@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??2@YAPEAX_K@Z @ 0x18000CCA0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000D330 (--3@YAXPEAX@Z.c)
 *     ??1?$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001BD38 (--1-$com_ptr_t@VCApplication@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBackgroundTaskId@CApplication@@QEAA?AU_GUID@@XZ @ 0x180026C5C (-GetBackgroundTaskId@CApplication@@QEAA-AU_GUID@@XZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x180027020 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 */

void __fastcall CApplicationManager::SendBackgroundStreamStateChangedNotifiction(CApplicationManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  struct _GUID *v3; // rdi
  int v4; // r14d
  struct _GUID *v5; // rax
  _QWORD *v6; // rcx
  struct _GUID *v7; // rsi
  volatile int *v8; // rdx
  __int64 v9; // rbx
  struct _GUID v10; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+70h] [rbp+18h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v3 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v13 = v1;
  if ( *((_QWORD *)this + 11) )
  {
    v4 = 0;
    v5 = (struct _GUID *)operator new(saturated_mul(*((_QWORD *)this + 11), 0x14uLL));
    v3 = v5;
    if ( v5 )
    {
      v6 = (_QWORD *)*((_QWORD *)this + 9);
      v11 = v6;
      if ( v6 )
      {
        v7 = v5;
        do
        {
          v9 = *ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::GetNext((__int64)v6, &v11);
          v12 = v9;
          if ( v9 )
            Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 12), v8);
          if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v9) )
          {
            *v7 = *CApplication::GetBackgroundTaskId((CApplication *)v9, &v10);
            ++v4;
            LOBYTE(v7[1].Data1) = (unsigned int)CApplication::GetTotalActiveRenderStreamCount((CApplication *)v9) != 0;
            v7 = (struct _GUID *)((char *)v7 + 20);
          }
          wil::com_ptr_t<CApplication,wil::err_returncode_policy>::~com_ptr_t<CApplication,wil::err_returncode_policy>(&v12);
        }
        while ( v11 );
        if ( v4 )
          RtlPublishWnfStateData(WNF_BMP_BG_PLAYSTATE_CHANGED, 0LL, v3, (unsigned int)(20 * v4), 0LL);
      }
    }
  }
  operator delete(v3);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
}
