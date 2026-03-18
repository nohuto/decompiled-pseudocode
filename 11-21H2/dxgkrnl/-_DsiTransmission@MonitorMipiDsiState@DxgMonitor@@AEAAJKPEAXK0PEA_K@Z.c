/*
 * XREFs of ?_DsiTransmission@MonitorMipiDsiState@DxgMonitor@@AEAAJKPEAXK0PEA_K@Z @ 0x1C03BA028
 * Callers:
 *     ?OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C03B9D7C (-OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C0012EA0 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0012ED0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?_ValidateMipiDsiPackets@MonitorMipiDsiState@DxgMonitor@@AEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z @ 0x1C03BA4AC (-_ValidateMipiDsiPackets@MonitorMipiDsiState@DxgMonitor@@AEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorMipiDsiState::_DsiTransmission(
        DxgMonitor::MonitorMipiDsiState *this,
        unsigned int a2,
        _BYTE *a3,
        __int64 a4,
        _BYTE *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // rbp
  __int64 v8; // rdi
  unsigned __int64 *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  int v17; // ecx
  char v18; // al
  DxgMonitor::MonitorMipiDsiState *v19; // rdx
  unsigned int v20; // r8d
  DxgMonitor::MonitorMipiDsiState *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  DxgMonitor::MonitorMipiDsiState *v24; // rdi

  v6 = (unsigned int)a4;
  v8 = a2;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  v10 = a6;
  if ( !a6 )
    WdLogSingleEntry0(1LL);
  *v10 = 0LL;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_MipiDsi2__private_reporting,
    0x11CEF90u,
    (__int64)a3,
    a4,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1);
  if ( !(unsigned __int8)ExIsManufacturingModeEnabled() )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MonitorIoctlTesting__private_reporting,
      0x133185Eu,
      v11,
      v12,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
      0);
    WdLogSingleEntry0(3LL);
    return 3221225659LL;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14) < 0xC002
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
  {
    WdLogSingleEntry0(3LL);
    return 3221225659LL;
  }
  v15 = 32LL;
  if ( (unsigned int)v8 < 0x20 )
  {
    v16 = v8;
LABEL_15:
    WdLogSingleEntry2(2LL, v15, v16);
    return 3221225507LL;
  }
  if ( (_DWORD)v8 != (_DWORD)v6 )
  {
    v16 = v6;
    v15 = v8;
    goto LABEL_15;
  }
  if ( a3 != a5 )
    WdLogSingleEntry0(1LL);
  v17 = (unsigned __int8)a3[4];
  v18 = a3[4];
  *v10 = v6;
  a3[5] = -1;
  if ( (unsigned __int8)(v18 - 1) > 0x7Fu )
  {
    *((_WORD *)a3 + 7) = 256;
    return 0LL;
  }
  v19 = (DxgMonitor::MonitorMipiDsiState *)*((unsigned __int16 *)a3 + 5);
  v20 = 14 * v17 + (_DWORD)v19 + 18;
  v21 = (DxgMonitor::MonitorMipiDsiState *)*(unsigned int *)a3;
  if ( (unsigned int)v8 < (unsigned int)v21 || (unsigned int)v21 < v20 )
  {
    *((_WORD *)a3 + 7) = 256;
    WdLogSingleEntry3(3LL, v8, v21, v20);
    return 0LL;
  }
  v22 = 65527LL;
  if ( (unsigned __int16)v19 <= 0xFFF7u )
  {
    v22 = 69632LL;
    if ( (unsigned int)v21 <= 0x11000 )
    {
      if ( (int)DxgMonitor::MonitorMipiDsiState::_ValidateMipiDsiPackets(v21, (struct _DXGK_DSI_TRANSMISSION *)a3) < 0 )
      {
        WdLogSingleEntry1(3LL, (unsigned __int8)a3[5]);
        return 0LL;
      }
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&a5, (DxgMonitor::MonitorMipiDsiState *)((char *)this + 32));
      v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 24LL))(*(_QWORD *)this);
      v24 = (DxgMonitor::MonitorMipiDsiState *)(*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v23 + 104LL))(
                                                 v23,
                                                 a3);
      MUTEX_LOCK::~MUTEX_LOCK((struct _KTHREAD ***)&a5);
      if ( (int)v24 >= 0 )
        return 0LL;
      v22 = *((unsigned __int16 *)a3 + 6);
      v19 = v24;
    }
    else
    {
      *((_WORD *)a3 + 7) = 256;
      v19 = v21;
    }
  }
  else
  {
    *((_WORD *)a3 + 7) = 256;
  }
  WdLogSingleEntry2(3LL, v19, v22);
  return 0LL;
}
