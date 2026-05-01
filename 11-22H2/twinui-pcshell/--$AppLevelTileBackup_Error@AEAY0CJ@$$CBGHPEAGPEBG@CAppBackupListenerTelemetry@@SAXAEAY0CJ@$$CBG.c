/*
 * XREFs of ??$AppLevelTileBackup_Error@AEAY0CJ@$$CBGHPEAGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CJ@$$CBG$$QEAH$$QEAPEAG$$QEAPEBG@Z @ 0x1806EE3B0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppLevelTileAsync_::_1_::catch$64 @ 0x1806F1EE4 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppLevel_ea_1806F1EE4.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VCAppBackupListenerLogging@@@details@wil@@QEAAPEAVCAppBackupListenerLogging@@P6AXXZ@Z @ 0x18018F6C4 (-get@-$static_lazy@VCAppBackupListenerLogging@@@details@wil@@QEAAPEAVCAppBackupListenerLogging@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1806EF390 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTe.c)
 */

char __fastcall CAppBackupListenerTelemetry::AppLevelTileBackup_Error<unsigned short const (&)[41],int,unsigned short *,unsigned short const *>(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v7; // rax
  _DWORD *v8; // rcx
  int v9; // ecx
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h] BYREF
  __int64 v14; // [rsp+68h] [rbp-10h] BYREF
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF

  v15 = a1;
  v7 = wil::details::static_lazy<CAppBackupListenerLogging>::get(
         a1,
         (void (__cdecl *)())_lambda_f0e7b1f4516883ab4fcec3efade13bff_::_lambda_invoker_cdecl_);
  v8 = (_DWORD *)v7[1];
  if ( *v8 > 5u )
  {
    LOBYTE(v7) = tlgKeywordOn((__int64)v8, 0x400000000000LL);
    if ( (_BYTE)v7 )
    {
      v12 = *a4;
      v13 = *a3;
      LODWORD(v15) = *a2;
      v14 = (__int64)L"App-level Tile Backup failed with error.";
      v11 = 0x1000000LL;
      LOBYTE(v7) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v9,
                     (int)&dword_18087BA5E,
                     (__int64)&v14,
                     (__int64)&v15,
                     (__int64)&v13,
                     (__int64)&v12,
                     (__int64)&v11);
    }
  }
  return (char)v7;
}
