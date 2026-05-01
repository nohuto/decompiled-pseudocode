/*
 * XREFs of ??$WindowTabHostCreationBlocked@AEAY00$$CBG@WindowTabHostTelemetry@@SAXAEAY00$$CBG@Z @ 0x1806394F4
 * Callers:
 *     ?IsHwndFromValidPublisher@@YA_NPEAUHWND__@@@Z @ 0x180639690 (-IsHwndFromValidPublisher@@YA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18018F764 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

char __fastcall WindowTabHostTelemetry::WindowTabHostCreationBlocked<unsigned short const (&)[1]>(__int64 a1)
{
  _QWORD *v1; // rax
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v6 = a1;
  v1 = wil::details::static_lazy<WindowManagementLogging>::get(
         a1,
         (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v2 = (_DWORD *)v1[1];
  if ( *v2 > 5u )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)v2, 0x400000000000LL);
    if ( (_BYTE)v1 )
    {
      v6 = 0x1000000LL;
      v7 = (__int64)&LocaleName;
      LOBYTE(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v3,
                     (unsigned __int8 *)dword_180870973,
                     0LL,
                     v4,
                     (const WCHAR **)&v7,
                     (__int64)&v6);
    }
  }
  return (char)v1;
}
