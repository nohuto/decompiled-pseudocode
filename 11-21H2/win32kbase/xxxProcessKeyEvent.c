/*
 * XREFs of xxxProcessKeyEvent @ 0x1C00CABA0
 * Callers:
 *     ProcessKeyboardInjectedInput @ 0x1C00053AC (ProcessKeyboardInjectedInput.c)
 *     ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B9A90 (-xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B9B50 (-xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01BAA50 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01BADF0 (-xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01BB060 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01E0298 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01E98CC (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ?SendKeyUpDown@@YAXEE@Z @ 0x1C01E9B0C (-SendKeyUpDown@@YAXEE@Z.c)
 *     ProcessKeyboardInputWorker @ 0x1C01E9C00 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C003D084 (ApiSetEditionIsGpqForegroundAccessibleCurrent.c)
 *     xxxKeyEventEx @ 0x1C003D9F0 (xxxKeyEventEx.c)
 *     GetActiveHKL @ 0x1C003F290 (GetActiveHKL.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C007D200 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C007DBA0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     UpdateRawKeyState @ 0x1C00A2908 (UpdateRawKeyState.c)
 *     ApiSetEditionHandleSonarKeyEvent @ 0x1C00A8C18 (ApiSetEditionHandleSonarKeyEvent.c)
 *     KEOEMProcs @ 0x1C00ADB84 (KEOEMProcs.c)
 *     xxxKELocaleProcs @ 0x1C00AF9AC (xxxKELocaleProcs.c)
 *     xxxKENLSProcs @ 0x1C00B20B0 (xxxKENLSProcs.c)
 *     ApiSetEditionGetExecutionEvironment @ 0x1C00C1BC8 (ApiSetEditionGetExecutionEvironment.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C01DB3B8 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C01DE9BC (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 */

void __fastcall xxxProcessKeyEvent(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a6)
{
  unsigned int v6; // esi
  __int16 ActiveHKL; // ax
  __int16 v11; // r10
  void *v12; // rdi
  int v13; // eax
  int v14; // r9d
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rbp
  char v23; // cl
  __int64 v24; // rdx
  __int64 v25; // r8

  v6 = a1[2];
  ActiveHKL = GetActiveHKL();
  v11 = *((_WORD *)a1 + 1);
  if ( (ActiveHKL & 0x3FF) == 0x12
    && (v11 & 0x9000) == 0x8000
    && (unsigned __int8)(*a1 + 15) <= 1u
    && ((unsigned __int8)(1 << (2 * (v6 & 3))) & gafRawKeyState[(unsigned __int64)v6 >> 2]) == 0 )
  {
    *((_WORD *)a1 + 1) = v11 & 0x7FFF;
  }
  else
  {
    UpdateRawKeyState(v6, v11 < 0);
  }
  if ( (unsigned __int8)(v6 + 96) <= 5u )
  {
    LOBYTE(v6) = (int)(v6 - 160) / 2 + 16;
    UpdateRawKeyState(v6, *((__int16 *)a1 + 1) < 0);
  }
  v12 = 0LL;
  if ( a5 )
    v13 = -(*(_DWORD *)(a5 + 492) & 1);
  else
    v13 = 0;
  if ( (unsigned __int8)v6 < 0xADu || (unsigned __int8)v6 > 0xB3u )
  {
    v14 = a3 != 0 ? 8 : 0;
    if ( !v13
      && ((unsigned __int8)(1 << (2 * (v6 & 3))) & gafRawKeyState[(unsigned __int64)(unsigned __int8)v6 >> 2]) != 0 )
    {
      v14 = (a3 != 0 ? 8 : 0) | 0x20;
    }
  }
  else
  {
    v14 = a3 != 0 ? 8 : 0;
  }
  v15 = v14 | 0x40;
  if ( *((_WORD *)a1 + 8) != 0xFFFD )
    v15 = v14;
  CInputGlobals::UpdateInputGlobals(
    (__int64)gpInputGlobals,
    (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
    1u,
    0LL,
    0,
    v15);
  v18 = (unsigned int *)(a1 + 4);
  if ( !a3 || !*v18 )
    *v18 = CInputGlobals::GetLastInputTime(gpInputGlobals);
  LOBYTE(v16) = v6;
  ApiSetEditionHandleSonarKeyEvent((__int64)a1, v16, v17);
  if ( a5 && (*(_DWORD *)(a5 + 184) & 0x2000) != 0 )
    v22 = a5 + 392;
  else
    v22 = 0LL;
  if ( _bittest16((const signed __int16 *)a1 + 1, 0xCu) )
  {
    if ( (dword_1C0296EA4 & 1) != 0 )
    {
      v23 = byte_1C0296EA8;
    }
    else
    {
      dword_1C0296EA4 |= 1u;
      v23 = (unsigned int)ApiSetEditionGetExecutionEvironment(v20, v19, v21) == 2;
      byte_1C0296EA8 = v23;
    }
    if ( v23 )
      v12 = (void *)*((_QWORD *)a1 + 1);
    xxxKeyEventEx(
      *((_WORD *)a1 + 1),
      *(_WORD *)a1,
      *v18,
      a2,
      v12,
      (unsigned __int16 *)((unsigned __int64)(a1 + 16) & -(__int64)(a3 != 0)),
      a3,
      a4,
      v22,
      a6);
  }
  else if ( (unsigned int)KEOEMProcs((struct tagKE *)a1)
         && (unsigned int)xxxKELocaleProcs((struct tagKE *)a1)
         && (unsigned int)xxxKENLSProcs((__int64)a1, a2) )
  {
    if ( (unsigned int)ApiSetEditionIsGpqForegroundAccessibleCurrent(a3, v24, v25) )
    {
      if ( !a4 && !a3 )
        CPTPProcessor::OnKeyEvent(v6, *((_WORD *)a1 + 1) >= 0);
      xxxKeyEventEx(*((_WORD *)a1 + 1), *a1, *v18, a2, *((void **)a1 + 1), (unsigned __int16 *)a1 + 8, a3, a4, v22, a6);
    }
    else
    {
      InputTraceLogging::Keyboard::DropInput(0LL);
    }
  }
}
