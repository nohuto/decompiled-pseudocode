/*
 * XREFs of ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180009790
 * Callers:
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x1800093D0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180009540 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 *     ?Cleanup@CProcess@@QEAAJH@Z @ 0x180026048 (-Cleanup@CProcess@@QEAAJH@Z.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@@Z @ 0x1800285B8 (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002E128 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113A0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::NotifyPLM(__int64 a1, int a2)
{
  HRESULT Instance; // esi
  int v4; // edx
  _QWORD *v5; // rdi
  int v6; // eax
  __int64 v7; // rdi
  int v8; // ebp
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // r8d
  _QWORD *v13; // rdi

  Instance = 0;
  v4 = a2 - 1;
  if ( !v4 )
  {
    if ( *(_DWORD *)(a1 + 232) )
    {
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          42LL,
          &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
          *(unsigned int *)(a1 + 160));
      }
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 240) + 40LL))(*(_QWORD *)(a1 + 240));
      Instance = v6;
      if ( v6 == -2147023728 )
      {
        Instance = 0;
      }
      else if ( v6 < 0 )
      {
        goto LABEL_61;
      }
      *(_DWORD *)(a1 + 232) = 0;
    }
LABEL_22:
    v7 = *(_QWORD *)(a1 + 224);
    if ( v7 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 32));
      v8 = 4;
      if ( *(_DWORD *)(v7 + 612) )
      {
        v8 = *(_DWORD *)(v7 + 616);
      }
      else
      {
        v9 = *(_QWORD **)(v7 + 72);
        while ( v9 )
        {
          v10 = v9[2];
          v9 = (_QWORD *)*v9;
          if ( !*(_DWORD *)(v10 + 416) || *(_QWORD *)(v10 + 360) )
          {
            v11 = *(_DWORD *)(v10 + 480);
            v12 = v11 ? *(_DWORD *)(v10 + 484) : *(_DWORD *)(v10 + 312);
            if ( v12 < v8 )
            {
              if ( v11 )
                v8 = *(_DWORD *)(v10 + 484);
              else
                v8 = *(_DWORD *)(v10 + 312);
            }
          }
        }
      }
      if ( v7 != -32 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 32));
    }
    else if ( *(_DWORD *)(a1 + 480) )
    {
      v8 = *(_DWORD *)(a1 + 484);
    }
    else
    {
      v8 = *(_DWORD *)(a1 + 312);
    }
    if ( v8 || !*(_DWORD *)(a1 + 436) )
    {
      if ( *(_DWORD *)(a1 + 236) )
      {
        if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            44LL,
            &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
            *(unsigned int *)(a1 + 160));
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 248) + 40LL))(*(_QWORD *)(a1 + 248));
        if ( (int)(Instance + 0x80000000) < 0 || Instance == -2147023728 )
        {
          *(_DWORD *)(a1 + 236) = 0;
          return;
        }
        goto LABEL_61;
      }
    }
    else if ( !*(_DWORD *)(a1 + 236) )
    {
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          43LL,
          &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
          *(unsigned int *)(a1 + 160));
      }
      v13 = (_QWORD *)(a1 + 248);
      if ( *(_QWORD *)(a1 + 248)
        || (*v13 = 0LL,
            Instance = CoCreateInstance(
                         &CLSID_OSTaskCompletion,
                         0LL,
                         1u,
                         &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                         (LPVOID *)(a1 + 248)),
            Instance >= 0) )
      {
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v13 + 32LL))(
                     *v13,
                     *(_QWORD *)(a1 + 152),
                     0x80000LL);
        if ( Instance >= 0 )
        {
          *(_DWORD *)(a1 + 236) = 1;
          return;
        }
      }
      goto LABEL_61;
    }
    if ( Instance >= 0 )
      return;
    goto LABEL_61;
  }
  if ( v4 != 1 )
    goto LABEL_22;
  if ( *(_DWORD *)(a1 + 416) )
    return;
  if ( *(_DWORD *)(a1 + 232) )
    goto LABEL_22;
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      41LL,
      &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
      *(unsigned int *)(a1 + 160));
  }
  v5 = (_QWORD *)(a1 + 240);
  if ( *(_QWORD *)(a1 + 240)
    || (*v5 = 0LL,
        Instance = CoCreateInstance(
                     &CLSID_OSTaskCompletion,
                     0LL,
                     1u,
                     &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                     (LPVOID *)(a1 + 240)),
        Instance >= 0) )
  {
    Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v5 + 32LL))(
                 *v5,
                 *(_QWORD *)(a1 + 152),
                 1LL);
    if ( Instance >= 0 )
    {
      *(_DWORD *)(a1 + 232) = 1;
      goto LABEL_22;
    }
  }
LABEL_61:
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      45LL,
      &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
      (unsigned int)Instance);
  }
  AudPolicyLogError("CProcess::NotifyPLM", 3464, Instance);
}
