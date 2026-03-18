/*
 * XREFs of ??0CRecalcState@@QEAA@PEBUtagWND@@PEAVCMonitorTopology@@PEBUtagRECT@@2W4StartRecalcOption@@@Z @ 0x1C015C600
 * Callers:
 *     ?CreateForTopologyChange@CRecalcProp@@SA?AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C015C6CC (-CreateForTopologyChange@CRecalcProp@@SA-AW4StartRecalcResult@@PEAUHWND__@@PEAVCMonitorTopology@.c)
 *     ?CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z @ 0x1C023AB38 (-CreateFromRDPSnapshot@CRecalcProp@@SAXPEAUtagWND@@PEAVCMonitorTopology@@AEBUtagRECT@@PEBU4@@Z.c)
 * Callees:
 *     ?s_GetRestoreRect@CRecalcState@@CA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C010DE70 (-s_GetRestoreRect@CRecalcState@@CA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C010DEDC (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1C0111DBC (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@PEBVCMonitorTopology@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall CRecalcState::CRecalcState(
        __int64 a1,
        const struct tagWND *a2,
        const struct tagWND *a3,
        __int128 *a4,
        struct tagRECT *a5,
        int a6)
{
  struct tagRECT *RestoreRect; // rax
  struct tagRECT v11; // xmm0
  AdvancedWindowPos *v12; // rcx
  const struct CMonitorTopology *v13; // r8
  __int128 v14; // xmm0
  char HasFullscreenState; // al
  struct tagRECT v17; // [rsp+20h] [rbp-48h] BYREF
  struct tagRECT v18; // [rsp+30h] [rbp-38h]

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = &CRecalcState::`vftable';
  RestoreRect = a5;
  if ( !a5 )
    RestoreRect = CRecalcState::s_GetRestoreRect(&v17, a2);
  v11 = *RestoreRect;
  *(_QWORD *)(a1 + 32) = a3;
  v18 = v11;
  *(struct tagRECT *)(a1 + 16) = v11;
  *(_DWORD *)(a1 + 40) = AdvancedWindowPos::GetWindowState(a2);
  if ( !a4 )
    a4 = (__int128 *)(*((_QWORD *)a2 + 5) + 88LL);
  v14 = *a4;
  *(_BYTE *)(a1 + 60) = 0;
  *(_OWORD *)(a1 + 44) = v14;
  HasFullscreenState = AdvancedWindowPos::HasFullscreenState(v12, a3, v13);
  *(_DWORD *)(a1 + 64) = a6;
  *(_BYTE *)(a1 + 61) = HasFullscreenState;
  _InterlockedIncrement((volatile signed __int32 *)a3);
  return a1;
}
