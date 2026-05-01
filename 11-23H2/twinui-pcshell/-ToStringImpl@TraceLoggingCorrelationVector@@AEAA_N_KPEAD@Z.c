/*
 * XREFs of ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800BBD2C
 * Callers:
 *     ?StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperationKind@2@AEBVCorrelationVector@@@Z @ 0x1800BB51C (-StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperat.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1800BB7BC (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ?StartActivity@HideFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z @ 0x1806BFFD0 (-StartActivity@HideFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z.c)
 *     ?StartActivity@ShowFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@W4LaunchSource@2@@Z @ 0x1806C00E4 (-StartActivity@ShowFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@W4LaunchSource@2@@Z.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1806C2168 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 *     ?LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelationVector@@@Z @ 0x1806C2460 (-LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelation.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1806C2684 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     ?StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z @ 0x1806C2EEC (-StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z.c)
 *     ?EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z @ 0x1806C526C (-EnsureWindow@ApplicationFlyoutView@@AEAAPEAUHWND__@@_JAEBVCorrelationVector@@@Z.c)
 *     ?StartActivity@FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z @ 0x1806C5DD4 (-StartActivity@FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1801C73EA (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     sprintf_s @ 0x1801C7874 (sprintf_s.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 */

char __fastcall TraceLoggingCorrelationVector::ToStringImpl(
        TraceLoggingCorrelationVector *this,
        unsigned __int64 a2,
        char *a3)
{
  unsigned __int64 v4; // rbp
  int v5; // esi
  size_t v7; // rax
  __int64 v8; // rax
  size_t v9; // rdx
  char *v10; // rcx

  v4 = a2 >> 63;
  v5 = a2;
  if ( !a3 )
    return 0;
  *a3 = 0;
  v7 = *((unsigned __int8 *)this + 130);
  if ( WORD2(a2) )
  {
    if ( v7 < WORD2(a2) )
    {
      memset_0(a3, 0, v7);
      *(_DWORD *)_o__errno() = 34;
      invalid_parameter_noinfo();
      return 0;
    }
    memcpy_0(a3, this, WORD2(a2));
  }
  if ( !(_BYTE)v4 || v5 )
  {
    v8 = *((unsigned __int8 *)this + 129);
    v9 = *((unsigned __int8 *)this + 130) - v8;
    v10 = &a3[v8];
    if ( !(_BYTE)v4 )
      return sprintf_s(v10, v9, "%u", v5) != -1;
    return sprintf_s(v10, v9, "%u!", v5) != -1;
  }
  a3[*((unsigned __int8 *)this + 129)] = 33;
  a3[*((unsigned __int8 *)this + 129) + 1] = 0;
  return 1;
}
