/*
 * XREFs of ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180006730
 * Callers:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180012290 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 * Callees:
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180006BD0 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180007C70 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180008670 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ?RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ @ 0x180008780 (-RecalculateVolume@AudioStateMonitorManager@@QEAAJXZ.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x1800092E0 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x1800093D0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     WPP_SF_ @ 0x18001F1CC (WPP_SF_.c)
 *     WPP_SF_SS @ 0x18002B9E0 (WPP_SF_SS.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18002F4D4 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CApplication::ExecutePBMActions(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5, int a6)
{
  int v6; // r15d
  int v7; // esi
  unsigned int v9; // ebp
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // r10
  _QWORD *v18; // rsi
  __int64 v19; // rbp
  _QWORD *v20; // rdi
  _QWORD *i; // rbx
  __int64 v22; // rcx
  int v23; // r13d
  AudioStateMonitorManager *v24; // rcx
  int v25; // [rsp+20h] [rbp-88h]
  __int64 v26; // [rsp+40h] [rbp-68h] BYREF
  __int64 v27; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v29; // [rsp+60h] [rbp-48h]
  unsigned int v31; // [rsp+C0h] [rbp+18h]

  v31 = a3;
  v6 = a4;
  v7 = a2;
  v9 = a5;
  if ( a5 )
  {
    while ( 1 )
    {
      v10 = 0;
      v11 = v9 & 7;
      if ( v11 == 1 )
        break;
      v12 = v11 - 2;
      if ( !v12 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 280));
        *(_DWORD *)(a1 + 324) = v7;
        if ( v7 < *(_DWORD *)(a1 + 328) )
          v10 = *(_DWORD *)(a1 + 272) != 0;
        if ( a1 != -280 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 280));
        if ( !v10 )
          CApplication::ProcessPendingSoundLevelNotification((CApplication *)a1);
        goto LABEL_54;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
        *(_DWORD *)(a1 + 380) = v6;
        if ( v6 == 1 )
          v10 = *(_DWORD *)(a1 + 272) != 0;
        if ( a1 != -336 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
        if ( !v10 )
          CApplication::ProcessPendingPLMExemptionChange((CApplication *)a1);
        goto LABEL_54;
      }
      if ( v13 == 1 )
      {
        Sleep(0xAu);
LABEL_54:
        a3 = v31;
      }
LABEL_55:
      v9 >>= 3;
      a5 = v9;
      if ( !v9 )
        return;
    }
    v14 = *(_DWORD *)(a1 + 216);
    v15 = v14 == 0;
    LOBYTE(v10) = a3 == 0;
    *(_DWORD *)(a1 + 216) = a3;
    if ( v14 == a3 )
    {
      if ( !a6 )
        goto LABEL_55;
      CApplication::RecalculateVolume(a1, 3LL);
      goto LABEL_54;
    }
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v16 = SoundLevelToString(a3);
      WPP_SF_SS(
        *(_QWORD *)(v17 + 16),
        12,
        (unsigned int)&WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
        *(_QWORD *)(a1 + 24),
        v16);
    }
    if ( v15 != v10 )
      CApplicationManager::UpdateVolumeForAllAppsInSession(g_ApplicationManager, *(unsigned int *)(a1 + 212), 3LL);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
    v28[1] = a1 + 32;
    v18 = *(_QWORD **)(a1 + 72);
    if ( !v18 )
    {
LABEL_45:
      CApplication::NotifyVolumePolicyChange((CApplication *)a1);
      if ( a1 != -32 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
      v29 = a1 + 224;
      *(_DWORD *)(a1 + 272) = 1;
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids);
      }
      v28[0] = -4400000LL;
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, _QWORD *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        *(_QWORD *)(a1 + 264),
        v28,
        0LL,
        0);
      if ( a1 != -224 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
      v6 = a4;
      v7 = a2;
      goto LABEL_54;
    }
LABEL_27:
    v19 = v18[2];
    v18 = (_QWORD *)*v18;
    if ( *(_DWORD *)(v19 + 416) )
      goto LABEL_43;
    EnterCriticalSection((LPCRITICAL_SECTION)(v19 + 24));
    v29 = v19 + 24;
    v20 = *(_QWORD **)(v19 + 72);
    for ( i = (_QWORD *)*v20; ; i = (_QWORD *)*i )
    {
      if ( i == v20 )
      {
        v24 = *(AudioStateMonitorManager **)(v19 + 704);
        if ( v24 )
          AudioStateMonitorManager::RecalculateVolume(v24);
        if ( v19 != -24 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v19 + 24));
LABEL_43:
        if ( !v18 )
        {
          v9 = a5;
          goto LABEL_45;
        }
        goto LABEL_27;
      }
      v22 = i[3];
      v26 = 0LL;
      v23 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v22 + 24LL))(
              v22,
              &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
              &v27);
      if ( v23 >= 0 )
      {
        if ( !v27 )
          goto LABEL_36;
        v23 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v27)(
                v27,
                &GUID_fe394136_900b_469c_bdfc_4321bcd92f34,
                &v26);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      if ( v23 >= 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v26 + 32LL))(v26) != 2 )
      {
        LOBYTE(v25) = 0;
        (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD))(*(_QWORD *)v26 + 152LL))(
          v26,
          3LL,
          0LL,
          0xFFFFFFFFLL,
          v25,
          0LL);
      }
LABEL_36:
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
  }
}
