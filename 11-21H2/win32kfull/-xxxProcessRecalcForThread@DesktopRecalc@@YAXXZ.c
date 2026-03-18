/*
 * XREFs of ?xxxProcessRecalcForThread@DesktopRecalc@@YAXXZ @ 0x1C00AEE98
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C006A158 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?s_xxxProcessTopologyChange@CRecalcProp@@SA?AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcContext@@@Z @ 0x1C00AEF6C (-s_xxxProcessTopologyChange@CRecalcProp@@SA-AW4ProcessRecalcResult@@PEAUHWND__@@PEAVCRecalcConte.c)
 *     DesktopWindowFromDesktop @ 0x1C011812C (DesktopWindowFromDesktop.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall DesktopRecalc::xxxProcessRecalcForThread(DesktopRecalc *this)
{
  ShellWindowManagement *v1; // r9
  bool v2; // al
  char v3; // bl
  ShellWindowManagement *v4; // r10
  __int64 v5; // r11
  struct tagBWL *v6; // rax
  int v7; // r8d
  int v8; // r9d
  struct tagBWL *v9; // rsi
  __int64 *i; // rdi
  __int64 v11; // rax
  int v12; // edx
  _BYTE v13[4]; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+44h] [rbp-34h]
  char v15; // [rsp+48h] [rbp-30h]
  __int128 v16; // [rsp+4Ch] [rbp-2Ch]

  DesktopWindowFromDesktop(*(_QWORD *)(gptiCurrent + 456LL));
  v2 = ShellWindowManagement::BehaviorEnabled(v1, (const struct tagDESKTOP *)0x20);
  v3 = 1;
  v6 = BuildHwndList(v4, (const struct tagWND *)(32 * (unsigned int)v2 + 2), v5, 1);
  v9 = v6;
  if ( v6 )
  {
    for ( i = (__int64 *)((char *)v6 + 32); ; ++i )
    {
      v11 = *i;
      if ( *i == 1 )
        break;
      v14 = 0;
      v13[0] = 0;
      v15 = 0;
      v16 = 0LL;
      CRecalcProp::s_xxxProcessTopologyChange(v11, v13);
    }
    FreeHwndList(v9);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v3 = 0;
    }
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 82;
      LOBYTE(v12) = v3;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v7,
        v8,
        2,
        23,
        82,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids);
    }
  }
}
