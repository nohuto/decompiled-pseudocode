/*
 * XREFs of ??$StartEndWindowStates@II@WindowArrangementHotkeyMode@CSnapComponentTelemetry@@QEAAX$$QEAI0@Z @ 0x1806756F4
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x180676370 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800B2DB8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 */

char __fastcall CSnapComponentTelemetry::WindowArrangementHotkeyMode::StartEndWindowStates<unsigned int,unsigned int>(
        __int64 a1,
        int *a2,
        int *a3)
{
  _QWORD *v6; // rax
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  v6 = wil::details::static_lazy<WindowManagementLogging>::get(
         a1,
         (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v6[1];
  if ( *v7 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v7, 0x200000000000LL);
    if ( (_BYTE)v6 )
    {
      v10 = *(_QWORD *)(a1 + 48);
      v13 = *a3;
      v14 = *a2;
      v12[0] = 0x1000000LL;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v8,
                     (int)&unk_180874263,
                     (int)v10 + 8,
                     v9,
                     (__int64)&v14,
                     (__int64)&v13,
                     (__int64)v12);
    }
  }
  return (char)v6;
}
