/*
 * XREFs of ??$Callback_Error@AEAY0DM@$$CBGUhresult@winrt@@AEAY00$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0DM@$$CBG$$QEAUhresult@winrt@@AEAY00$$CBG@Z @ 0x1806EEBA0
 * Callers:
 *     __lambda_03899bd9ba5a14c04410ab955a36d1b6_::operator()_::_1_::catch$0 @ 0x1806F0BE9 (__lambda_03899bd9ba5a14c04410ab955a36d1b6_--operator()_--_1_--catch$0.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VCAppBackupListenerLogging@@@details@wil@@QEAAPEAVCAppBackupListenerLogging@@P6AXXZ@Z @ 0x18018F6C4 (-get@-$static_lazy@VCAppBackupListenerLogging@@@details@wil@@QEAAPEAVCAppBackupListenerLogging@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1804A8FA8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 */

char __fastcall CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[60],winrt::hresult,unsigned short const (&)[1]>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 *v4; // rax
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a3;
  v11 = a1;
  v4 = wil::details::static_lazy<CAppBackupListenerLogging>::get(
         a1,
         (void (__cdecl *)())_lambda_f0e7b1f4516883ab4fcec3efade13bff_::_lambda_invoker_cdecl_);
  v5 = (_DWORD *)v4[1];
  if ( *v5 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v5, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v11 = 0x1000000LL;
      v13 = (__int64)&LocaleName;
      LODWORD(v12) = *a2;
      v10 = (__int64)L"Developer Mode registry watcher callback failed with error.";
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v6,
                     (unsigned __int8 *)dword_18087B958,
                     v7,
                     v8,
                     (const WCHAR **)&v10,
                     (__int64)&v12,
                     (const WCHAR **)&v13,
                     (__int64)&v11);
    }
  }
  return (char)v4;
}
