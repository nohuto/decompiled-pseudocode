/*
 * XREFs of ?UpdateClientOwner@DWMCursor@@UEAAJXZ @ 0x1801FBAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800CE544 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?SetCursorClientOwner@SystemCursorController2@@QEAAJUCursorId@@@Z @ 0x18011145C (-SetCursorClientOwner@SystemCursorController2@@QEAAJUCursorId@@@Z.c)
 */

__int64 __fastcall DWMCursor::UpdateClientOwner(DWMCursor *this)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v2 = dword_180278C58 + 1;
  if ( dword_180278C58 == -1 )
    v2 = 1;
  *((_DWORD *)this + 11) = v2;
  dword_180278C58 = v2;
  v3 = *(_QWORD *)(*((_QWORD *)this + 20) + 248LL) + 8LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 232LL))(v3);
  if ( v4 )
  {
    v6 = SystemCursorController2::SetCursorClientOwner(v4);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA3,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v6);
  }
  v7 = *((_QWORD *)this + 5);
  v13 = v7;
  v8 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     v5,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v8 > 4u && (*(_BYTE *)(v8 + 16) & 8) != 0 && (*(_QWORD *)(v8 + 24) & 8LL) == *(_QWORD *)(v8 + 24) )
  {
    LODWORD(v13) = HIDWORD(v13);
    v14 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      byte_180238742,
      v9,
      v10,
      (__int64)&v14,
      (__int64)&v13);
  }
  return 0LL;
}
