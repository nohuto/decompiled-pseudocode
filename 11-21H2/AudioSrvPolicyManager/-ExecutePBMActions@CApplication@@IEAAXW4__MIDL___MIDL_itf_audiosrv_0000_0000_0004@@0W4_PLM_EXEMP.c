/*
 * XREFs of ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180016B1C
 * Callers:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001F2CC (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x18000E8E8 (WPP_SF_.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x1800192B0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180019414 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x1800197A0 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     WPP_SF_SS @ 0x18001DF64 (WPP_SF_SS.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180024DB4 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x1800253E0 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplication::ExecutePBMActions(__int64 a1, int a2, unsigned int a3, int a4, unsigned int a5, int a6)
{
  unsigned int i; // ebp
  BOOL v11; // edi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r10
  _DWORD v15[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]

  for ( i = a5; i; i >>= 3 )
  {
    v11 = 0;
    switch ( i & 7 )
    {
      case 1u:
        v12 = *(_DWORD *)(a1 + 216);
        LOBYTE(v11) = v12 == 0;
        *(_DWORD *)(a1 + 216) = a3;
        if ( v12 == a3 )
        {
          if ( a6 )
            CApplication::RecalculateVolume(a1, 3LL);
        }
        else
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v13 = SoundLevelToString(a3);
            WPP_SF_SS(
              *(_QWORD *)(v14 + 16),
              12,
              (unsigned int)&WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
              *(_QWORD *)(a1 + 24),
              v13);
          }
          if ( v11 != (a3 == 0) )
            CApplicationManager::UpdateVolumeForAllAppsInSession(g_ApplicationManager, *(unsigned int *)(a1 + 212), 3LL);
          CApplication::RecalculateVolume(a1, 3LL);
          EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
          v16 = a1 + 224;
          *(_DWORD *)(a1 + 272) = 1;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids);
          }
          v15[0] = -4400000;
          v15[1] = -1;
          (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, _DWORD *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                              + 24LL))(
            ThreadPool,
            *(_QWORD *)(a1 + 264),
            v15,
            0LL,
            0);
          if ( a1 != -224 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
        }
        break;
      case 2u:
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 280));
        *(_DWORD *)(a1 + 324) = a2;
        if ( a2 < *(_DWORD *)(a1 + 328) )
          v11 = *(_DWORD *)(a1 + 272) != 0;
        if ( a1 != -280 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 280));
        if ( !v11 )
          CApplication::ProcessPendingSoundLevelNotification((CApplication *)a1);
        break;
      case 3u:
        EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
        *(_DWORD *)(a1 + 380) = a4;
        if ( a4 == 1 )
          v11 = *(_DWORD *)(a1 + 272) != 0;
        if ( a1 != -336 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
        if ( !v11 )
          CApplication::ProcessPendingPLMExemptionChange((CApplication *)a1);
        break;
      case 4u:
        Sleep(0xAu);
        break;
    }
  }
}
