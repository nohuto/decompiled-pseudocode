/*
 * XREFs of ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180018D28
 * Callers:
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x1800192B0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x18001AB8C (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18001ECD8 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021714 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180022440 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180015ED8 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::NotifyPLM(__int64 a1, int a2)
{
  HRESULT Instance; // edi
  int v4; // edx
  _QWORD *v5; // rsi
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  _QWORD *v9; // rsi
  int v10; // eax

  Instance = 0;
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( *(_DWORD *)(a1 + 416) )
        return;
      if ( !*(_DWORD *)(a1 + 232) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x29u,
            &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
            *(_DWORD *)(a1 + 160));
        }
        v5 = (_QWORD *)(a1 + 240);
        if ( !*(_QWORD *)(a1 + 240) )
        {
          *v5 = 0LL;
          Instance = CoCreateInstance(
                       &CLSID_OSTaskCompletion,
                       0LL,
                       1u,
                       &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                       (LPVOID *)(a1 + 240));
          if ( Instance < 0 )
            goto LABEL_39;
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v5 + 32LL))(
                     *v5,
                     *(_QWORD *)(a1 + 152),
                     1LL);
        if ( Instance < 0 )
          goto LABEL_39;
        *(_DWORD *)(a1 + 232) = 1;
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 232) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Au,
        &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
        *(_DWORD *)(a1 + 160));
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 240) + 40LL))(*(_QWORD *)(a1 + 240));
    Instance = v6;
    if ( v6 == -2147023728 )
    {
      Instance = 0;
    }
    else if ( v6 < 0 )
    {
      goto LABEL_39;
    }
    *(_DWORD *)(a1 + 232) = 0;
  }
  v7 = *(_QWORD *)(a1 + 224);
  if ( v7 )
  {
    v8 = CApplication::Category(v7);
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
    if ( !*(_DWORD *)(a1 + 236) )
    {
LABEL_38:
      if ( Instance >= 0 )
        return;
      goto LABEL_39;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Cu,
        &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
        *(_DWORD *)(a1 + 160));
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 248) + 40LL))(*(_QWORD *)(a1 + 248));
    Instance = v10;
    if ( v10 == -2147023728 || v10 >= 0 )
    {
      *(_DWORD *)(a1 + 236) = 0;
      return;
    }
  }
  else
  {
    if ( *(_DWORD *)(a1 + 236) )
      goto LABEL_38;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Bu,
        &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
        *(_DWORD *)(a1 + 160));
    }
    v9 = (_QWORD *)(a1 + 248);
    if ( *(_QWORD *)(a1 + 248)
      || (*v9 = 0LL,
          Instance = CoCreateInstance(
                       &CLSID_OSTaskCompletion,
                       0LL,
                       1u,
                       &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                       (LPVOID *)(a1 + 248)),
          Instance >= 0) )
    {
      Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v9 + 32LL))(
                   *v9,
                   *(_QWORD *)(a1 + 152),
                   0x80000LL);
      if ( Instance >= 0 )
      {
        *(_DWORD *)(a1 + 236) = 1;
        goto LABEL_38;
      }
    }
  }
LABEL_39:
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Du, &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids, Instance);
  }
  AudPolicyLogError("CProcess::NotifyPLM", 3464, Instance);
}
