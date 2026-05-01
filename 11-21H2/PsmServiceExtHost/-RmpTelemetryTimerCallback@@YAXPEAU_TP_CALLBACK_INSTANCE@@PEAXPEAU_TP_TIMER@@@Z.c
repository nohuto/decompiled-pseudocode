/*
 * XREFs of ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18003EE10
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18003EF70 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave@@@details@wi.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x180083E84 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall RmpTelemetryTimerCallback(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_TIMER *a3)
{
  LSTATUS v4; // eax
  bool v5; // sf
  LSTATUS v6; // eax
  bool v7; // sf
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  LSTATUS v11; // eax
  bool v12; // sf
  int v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+64h] [rbp-9Ch] BYREF
  int v15; // [rsp+68h] [rbp-98h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-90h] BYREF
  HKEY phkResult; // [rsp+78h] [rbp-88h] BYREF
  __int64 v18; // [rsp+80h] [rbp-80h] BYREF
  __int64 v19; // [rsp+88h] [rbp-78h] BYREF
  __int64 v20; // [rsp+90h] [rbp-70h] BYREF
  __int64 v21; // [rsp+98h] [rbp-68h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v23[144]; // [rsp+B0h] [rbp-50h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v23);
  hKey = 0LL;
  phkResult = 0LL;
  RmpAcquireGlobalLock();
  if ( a2[77] )
  {
    if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 0x200000000001LL) )
    {
      v14 = a2[76];
      v19 = *((_QWORD *)a2 + 37);
      v20 = *((_QWORD *)a2 + 36);
      v21 = *((_QWORD *)a2 + 35);
      v22 = *((_QWORD *)a2 + 34);
      v18 = 0x1000000LL;
      v13 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v8,
        (unsigned int)&unk_1800C203E,
        v9,
        v10,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v18);
    }
    *((_QWORD *)a2 + 34) = 0LL;
    *((_QWORD *)a2 + 35) = -1LL;
    *((_QWORD *)a2 + 36) = 0LL;
    *((_QWORD *)a2 + 37) = 0LL;
    a2[76] = 0;
    a2[77] = 0;
  }
  a2[142] = GetTickCount();
  RmpReleaseGlobalLock();
  RtlGetDeviceFamilyInfoEnum(0LL, &v15, 0LL);
  if ( v15 == 3 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_ResourceManagerLcdCommitSave>::GetImpl'::`2'::impl,
      0LL);
    v4 = RegOpenKeyExW(
           HKEY_LOCAL_MACHINE,
           L"System\\CurrentControlSet\\Control\\Session Manager\\Memory Management",
           0,
           0x20006u,
           &hKey);
    v5 = v4 < 0;
    if ( v4 > 0 )
      v5 = 1;
    if ( !v5 )
    {
      v6 = RegOpenKeyExW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows NT\\ResourceManager",
             0,
             0x20006u,
             &phkResult);
      v7 = v6 < 0;
      if ( v6 > 0 )
        v7 = 1;
      if ( !v7 )
      {
        v11 = RegDeleteValueW(phkResult, L"SimulateCommitSavings");
        v12 = v11 < 0;
        if ( v11 > 0 )
          v12 = 1;
        if ( !v12 )
          RegDeleteValueW(hKey, L"SimulateCommitSavings");
      }
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  if ( phkResult )
    RegCloseKey(phkResult);
  CempLockTrackerClearForThread(HampLockTrackerId);
}
