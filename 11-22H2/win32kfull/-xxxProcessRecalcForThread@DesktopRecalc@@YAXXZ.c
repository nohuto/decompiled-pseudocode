/*
 * XREFs of ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C00C2734
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C00C09DC (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C00C0A58 (DesktopWindowFromDesktop.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00C2890 (-s_xxxProcessTopologyChange@CRecalcProp@@SAXPEAUHWND__@@PEAVCRecalcContext@@@Z.c)
 *     BuildHwndList @ 0x1C00D2540 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00D2E50 (FreeHwndList.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

void __fastcall DesktopRecalc::xxxProcessRecalcForThread(DesktopRecalc *this)
{
  ShellWindowManagement *v1; // r9
  char v2; // bl
  ShellWindowManagement *v3; // r10
  __int64 v4; // rax
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rsi
  int v8; // edx
  HWND *i; // rdi
  HWND v10; // rax
  _BYTE v11[4]; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+44h] [rbp-44h]
  int v13; // [rsp+48h] [rbp-40h]
  char v14; // [rsp+4Ch] [rbp-3Ch]
  __int128 v15; // [rsp+50h] [rbp-38h]
  int v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+64h] [rbp-24h]
  char v18; // [rsp+68h] [rbp-20h]

  DesktopWindowFromDesktop(*(_QWORD *)(gptiCurrent + 456LL));
  ShellWindowManagement::BehaviorEnabled(v1, (const struct tagDESKTOP *)0x20);
  v2 = 1;
  v4 = BuildHwndList(v3);
  v7 = v4;
  if ( v4 )
  {
    for ( i = (HWND *)(v4 + 32); ; ++i )
    {
      v10 = *i;
      if ( *i == (HWND)1 )
        break;
      v12 = 0;
      v13 = 0;
      v16 = 0;
      v17 = 0;
      v15 = 0LL;
      v11[0] = 0;
      v14 = 0;
      v18 = 1;
      CRecalcProp::s_xxxProcessTopologyChange(v10, (struct CRecalcContext *)v11);
    }
    FreeHwndList(v7);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v2 = 0;
    }
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 88;
      LOBYTE(v8) = v2;
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v5,
        v6,
        2,
        7,
        88,
        (__int64)&WPP_be08460427f83b68b58b8518e40b91a4_Traceguids);
    }
  }
}
