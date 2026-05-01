/*
 * XREFs of ??$AppBackup_Error@AEAY0CL@$$CBGHPEBGPEBGPEBG@CAppBackupListenerTelemetry@@SAXAEAY0CL@$$CBG$$QEAH$$QEAPEBG22@Z @ 0x1806EE2C0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppAsync$_ResumeCoro$1_::_1_::catch$14 @ 0x180258E3E (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--BackupAppAsync_ea_180258E3E.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VCAppBackupListenerLogging@@@details@wil@@QEAAPEAVCAppBackupListenerLogging@@P6AXXZ@Z @ 0x18018F6C4 (-get@-$static_lazy@VCAppBackupListenerLogging@@@details@wil@@QEAAPEAVCAppBackupListenerLogging@@.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1806EF224 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWrit.c)
 */

char __fastcall CAppBackupListenerTelemetry::AppBackup_Error<unsigned short const (&)[43],int,unsigned short const *,unsigned short const *,unsigned short const *>(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5)
{
  __int64 *v8; // rax
  int v9; // r10d
  __int64 v10; // rcx
  __int64 v12; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h] BYREF
  __int64 v17; // [rsp+90h] [rbp+10h] BYREF

  v17 = a1;
  v8 = wil::details::static_lazy<CAppBackupListenerLogging>::get(
         a1,
         (void (__cdecl *)())_lambda_f0e7b1f4516883ab4fcec3efade13bff_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v8[1] > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn(v8[1], 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v12 = 0x1000000LL;
      v10 = *a5;
      v14 = *a4;
      v15 = *a3;
      LODWORD(v17) = *a2;
      v16 = (__int64)L"Event-driven App Backup failed with error.";
      v13 = v10;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v9,
                     (int)&dword_18087B867,
                     (__int64)&v16,
                     (__int64)&v17,
                     (__int64)&v15,
                     (__int64)&v14,
                     (__int64)&v13,
                     (__int64)&v12);
    }
  }
  return (char)v8;
}
