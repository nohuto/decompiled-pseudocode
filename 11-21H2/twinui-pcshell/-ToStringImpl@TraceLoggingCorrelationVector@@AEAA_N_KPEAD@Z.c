/*
 * XREFs of ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800C7D14
 * Callers:
 *     ?StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperationKind@2@AEBVCorrelationVector@@@Z @ 0x1800C74C4 (-StartActivity@MeetAndChatManagerOperation@MeetAndChatTelemetry@@QEAAXW4MeetAndChatManagerOperat.c)
 *     ?Increment@CorrelationVector@@QEAAAEBV1@XZ @ 0x1800C7878 (-Increment@CorrelationVector@@QEAAAEBV1@XZ.c)
 *     ?StartActivity@ShowFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@W4LaunchSource@2@@Z @ 0x1805CE7BC (-StartActivity@ShowFlyout@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@W4LaunchSource@2@@Z.c)
 *     ?ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z @ 0x1805CF200 (-ToString@CorrelationVector@@QEBAPEADAEAY0IB@D@Z.c)
 *     ?Extend@CorrelationVector@@QEBA?AV1@XZ @ 0x1805D0708 (-Extend@CorrelationVector@@QEBA-AV1@XZ.c)
 *     ?LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelationVector@@@Z @ 0x1805D0A78 (-LaunchAppWithProgIdAndUriWithOpenWithSuppressed@ProtocolLauncher@Utils@@CAXPEBG0AEBVCorrelation.c)
 *     ?StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z @ 0x1805D0EEC (-StartActivity@UriLaunch@MeetAndChatTelemetry@@QEAAXPEBG0AEBVCorrelationVector@@@Z.c)
 *     ?StartActivity@FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z @ 0x1805D2E08 (-StartActivity@FlyoutWindowRegistered@MeetAndChatTelemetry@@QEAAXAEBVCorrelationVector@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180188E82 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     sprintf_s @ 0x180189274 (sprintf_s.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 */

bool __fastcall TraceLoggingCorrelationVector::ToStringImpl(
        TraceLoggingCorrelationVector *this,
        unsigned __int64 a2,
        char *a3)
{
  unsigned __int64 v4; // rbp
  unsigned int v5; // esi
  size_t v7; // rax
  __int64 v8; // rax
  size_t v9; // rdx
  char *v10; // rcx
  int v11; // eax

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
  if ( (_BYTE)v4 && !v5 )
  {
    a3[*((unsigned __int8 *)this + 129)] = 33;
    a3[*((unsigned __int8 *)this + 129) + 1] = 0;
    return 1;
  }
  v8 = *((unsigned __int8 *)this + 129);
  v9 = *((unsigned __int8 *)this + 130) - v8;
  v10 = &a3[v8];
  if ( (_BYTE)v4 )
    v11 = sprintf_s(v10, v9, "%u!", v5);
  else
    v11 = sprintf_s(v10, v9, "%u", v5);
  return v11 != -1;
}
