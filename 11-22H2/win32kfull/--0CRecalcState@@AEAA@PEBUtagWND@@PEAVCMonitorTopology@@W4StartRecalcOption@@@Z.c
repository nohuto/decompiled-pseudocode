/*
 * XREFs of ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C2DDC
 * Callers:
 *     ?CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@PEAW4ProcessingDecision@1@@Z @ 0x1C00C2B6C (-CreateRecalcState@CRecalcState@@SAPEAV1@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@.c)
 * Callees:
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C00C3000 (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x1C00C3038 (-GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1C00C3074 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z @ 0x1C00C32E8 (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdsddddddds @ 0x1C00C333C (WPP_RECORDER_AND_TRACE_SF_qdsddddddds.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

__int64 __fastcall CRecalcState::CRecalcState(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  __int64 v8; // rcx
  const struct tagWND *v9; // rdx
  __int64 v10; // rcx
  char v11; // bl
  __int128 v12; // xmm0
  char v13; // bl
  int v14; // esi
  int v15; // r14d
  int v16; // r12d
  int v17; // ebp
  int v18; // r15d
  unsigned int WindowState; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 StateString; // rdi
  char ThreadId; // al
  int v25; // r8d
  int v26; // edx
  const char *v27; // r10
  __int128 *Prop; // rax
  int v30; // r8d
  int v31; // [rsp+20h] [rbp-C8h]
  int v32; // [rsp+28h] [rbp-C0h]
  int v33; // [rsp+30h] [rbp-B8h]
  int v34; // [rsp+38h] [rbp-B0h]
  struct tagRECT v35; // [rsp+A0h] [rbp-48h] BYREF
  char v37; // [rsp+F8h] [rbp+10h]
  bool v38; // [rsp+108h] [rbp+20h]

  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)a1 = &CRecalcState::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  v4 = a1;
  *(_DWORD *)(a1 + 24) = AdvancedWindowPos::GetWindowState(a2);
  *(_OWORD *)(v4 + 28) = *(_OWORD *)(*(_QWORD *)(v8 + 40) + 88LL);
  v11 = 1;
  v37 = 1;
  if ( (unsigned int)AdvancedWindowPos::GetWindowState(v8) )
  {
    Prop = (__int128 *)GetProp(v10, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
    if ( Prop )
    {
      v12 = *Prop;
      goto LABEL_3;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v9,
        v30,
        11,
        2,
        7,
        11,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids,
        *(_QWORD *)a2);
    }
  }
  v12 = *(_OWORD *)(*(_QWORD *)(a2 + 40) + 88LL);
LABEL_3:
  *(_BYTE *)(v4 + 60) = 0;
  *(_OWORD *)(v4 + 44) = v12;
  *(_BYTE *)(v4 + 61) = AdvancedWindowPos::HasFullscreenState((AdvancedWindowPos *)a2, v9);
  *(_DWORD *)(v4 + 64) = a4;
  *(_QWORD *)(v4 + 72) = 0LL;
  _InterlockedAdd((volatile signed __int32 *)a3, 1u);
  v35 = *(struct tagRECT *)(((*(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 0x20) != 0 ? 0x10 : 0) + v4 + 28);
  *(_QWORD *)(v4 + 72) = CMonitorTopology::MonitorDataFromRect((CMonitorTopology *)a3, (const struct tagWND *)a2, &v35);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v11 = 0;
    v37 = 0;
  }
  v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(_BYTE *)(v4 + 61);
    v14 = *(_DWORD *)(a3 + 4);
    v15 = *(_DWORD *)(v4 + 56);
    v16 = *(_DWORD *)(v4 + 48);
    v17 = *(_DWORD *)(v4 + 52);
    v18 = *(_DWORD *)(v4 + 44);
    WindowState = AdvancedWindowPos::GetWindowState(a2);
    StateString = AdvancedWindowPos::GetStateString(WindowState, v20, v21, v22);
    ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(a2 + 16));
    LOBYTE(v25) = v38;
    LOBYTE(v26) = v37;
    v27 = " (fullscreen)";
    if ( !v13 )
      v27 = " ";
    WPP_RECORDER_AND_TRACE_SF_qdsddddddds(
      WPP_GLOBAL_Control->AttachedDevice,
      v26,
      v25,
      (_DWORD)gFullLog,
      v31,
      v32,
      v33,
      v34,
      *(_QWORD *)a2,
      ThreadId,
      StateString,
      v18,
      v16,
      v17,
      v15,
      v17 - v18,
      v15 - v16,
      v14,
      (__int64)v27);
    return a1;
  }
  return v4;
}
