/*
 * XREFs of ??$CompatInfoBackup_Error@AEAY0CG@$$CBGHPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CG@$$CBG$$QEAH$$QEAPEBG@Z @ 0x1806EEC44
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoAsync_::_1_::catch$22 @ 0x1806F11BC (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppCompa_ea_1806F11BC.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VCAppBackupListenerLogging@@@details@wil@@QEAAPEAVCAppBackupListenerLogging@@P6AXXZ@Z @ 0x18018F6C4 (-get@-$static_lazy@VCAppBackupListenerLogging@@@details@wil@@QEAAPEAVCAppBackupListenerLogging@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1804A8FA8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 */

char __fastcall CAppBackupListenerTelemetry::CompatInfoBackup_Error<unsigned short const (&)[38],int,unsigned short const *>(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  __int64 *v5; // rax
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = a1;
  v5 = wil::details::static_lazy<CAppBackupListenerLogging>::get(
         a1,
         (void (__cdecl *)())_lambda_f0e7b1f4516883ab4fcec3efade13bff_::_lambda_invoker_cdecl_);
  v6 = (_DWORD *)v5[1];
  if ( *v6 > 5u )
  {
    LOBYTE(v5) = tlgKeywordOn((__int64)v6, 0x400000000000LL);
    if ( (_BYTE)v5 )
    {
      v11 = *a3;
      LODWORD(v13) = *a2;
      v12 = (__int64)L"Compat Info Backup failed with error.";
      v14 = 0x1000000LL;
      LOBYTE(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v7,
                     (unsigned __int8 *)dword_18087BB7F,
                     v8,
                     v9,
                     (const WCHAR **)&v12,
                     (__int64)&v13,
                     (const WCHAR **)&v11,
                     (__int64)&v14);
    }
  }
  return (char)v5;
}
