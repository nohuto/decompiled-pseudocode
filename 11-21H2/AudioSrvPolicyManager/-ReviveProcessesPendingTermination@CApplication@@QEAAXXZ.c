/*
 * XREFs of ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18001AB8C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Do_call @ 0x180027EC0 (std--_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_--_Do_call.c)
 * Callees:
 *     WPP_SF_SSd @ 0x1800135B8 (WPP_SF_SSd.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180018D28 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180019830 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001BB48 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001F894 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x1800253E0 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplication::ReviveProcessesPendingTermination(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _QWORD *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  char v8; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+68h] [rbp+20h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v9 = v2;
  v6 = 0;
  v7 = 1;
  CApplicationManager::GetApplicationPBMStatus(
    g_ApplicationManager,
    this,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v8,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v6,
    (enum _PLM_EXEMPTION *)&v7);
  v3 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    if ( *(_DWORD *)(v4 + 416) == 1 )
    {
      *(_DWORD *)(v4 + 416) = 0;
      if ( v6 )
        CApplicationManager::UpdateVolumeForAllAppsInSession(g_ApplicationManager, *(unsigned int *)(v4 + 164), 3LL);
      CProcess::RecalculateVolume(v4, 3u);
      if ( (*(_BYTE *)(v4 + 448) & 1) != 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          LODWORD(v5) = *(_DWORD *)(v4 + 160);
          WPP_SF_SSd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x30u,
            &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
            L"SoundLevelChanged",
            *(const wchar_t **)(v4 + 176),
            v5);
        }
        CProcess::SendPBMNotification(v4, 0LL);
      }
      CProcess::NotifyPLM(v4, v7);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
