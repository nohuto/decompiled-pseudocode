/*
 * XREFs of ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180008BA0
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180005E20 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006E90 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180007E90 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18000B180 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000CCE0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18000D430 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180012290 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180008FE0 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall CApplication::IsUnrestrictedBackgroundAudioCapable(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rax
  __int64 Next; // rax
  int v7; // ebx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v4 = 0;
  v5 = *((_QWORD *)this + 9);
  v13 = v5;
  while ( v5 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v3, &v13);
    v3 = *(_QWORD *)Next;
    if ( !*(_DWORD *)(*(_QWORD *)Next + 416LL) && *(_DWORD *)(v3 + 432) )
    {
      v4 = 1;
      break;
    }
    v5 = v13;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( !v4 )
    return 0LL;
  EnterCriticalSection(v2);
  v7 = 0;
  v8 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v8 )
  {
    v9 = v8[2];
    v8 = (_QWORD *)*v8;
    if ( !*(_DWORD *)(v9 + 416) && *(_DWORD *)(v9 + 436) )
    {
      v7 = 1;
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( v7 )
    return 0LL;
  EnterCriticalSection(v2);
  v10 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v10 )
  {
    v11 = v10[2];
    v10 = (_QWORD *)*v10;
    if ( !*(_DWORD *)(v11 + 416) && *(_DWORD *)(v11 + 500) )
    {
      v7 = 1;
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7 != 0;
}
