/*
 * XREFs of ?CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z @ 0x18002DA20
 * Callers:
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x1800293AC (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 *     ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x18002D930 (-SetPosition@DWMCursor@@UEAAJJJ@Z.c)
 *     ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180046DE0 (-OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018310 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18009C748 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?OnRasterizationScaleChanged@DWMCursor@@AEAAJXZ @ 0x1801CFB8C (-OnRasterizationScaleChanged@DWMCursor@@AEAAJXZ.c)
 */

__int64 __fastcall DWMCursor::CheckAndUpdateRasterizationScale(POINT *this, char a2)
{
  LONG x; // edi
  __int64 v4; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // ecx
  int v9; // eax
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  int v16; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  POINT pt; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  x = this[11].x;
  v4 = (__int64)this[4];
  if ( v4 )
  {
    x = 100;
    v6 = *(_QWORD *)(v4 + 480);
    v7 = *(_QWORD *)(v4 + 488);
    pt = this[10];
    while ( v6 != v7 )
    {
      if ( PtInRect((const RECT *)v6, pt) )
      {
        v8 = *(unsigned __int16 *)(v6 + 22);
        if ( !*(_WORD *)(v6 + 22) )
          v8 = *(unsigned __int16 *)(v6 + 20);
        v9 = MulDiv(v8, 100, 96);
        if ( !v9 )
          v9 = 100;
        x = v9;
        break;
      }
      v6 += 200LL;
    }
  }
  if ( this[11].x != x )
  {
    v11 = (unsigned int)this[5].x;
    this[11].x = x;
    v12 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                        v4,
                        _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
          + 1);
    if ( *(_DWORD *)v12 > 4u
      && (*(_BYTE *)(v12 + 16) & 8) != 0
      && (*(_QWORD *)(v12 + 24) & 8LL) == *(_QWORD *)(v12 + 24) )
    {
      pt.x = x;
      v19 = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v12,
        (unsigned int)&unk_180207398,
        v13,
        v14,
        (__int64)&v19,
        (__int64)&pt);
    }
    if ( a2 )
    {
      v15 = DWMCursor::OnRasterizationScaleChanged((DWMCursor *)this);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1B3,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v15,
          v16);
    }
  }
  return 0LL;
}
