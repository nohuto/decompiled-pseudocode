/*
 * XREFs of CpcHighestNotifyWorker @ 0x1C00233A4
 * Callers:
 *     CpcNativeInterruptWorker @ 0x1C00236B0 (CpcNativeInterruptWorker.c)
 *     AcpiCppcHighestNotifyWorker @ 0x1C00258C0 (AcpiCppcHighestNotifyWorker.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001840 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C00027D4 (ResetEnumerationContext.c)
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0003AA4 (ReadGenAddrMaybeHiddenEx.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0003E10 (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_s @ 0x1C000514C (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     ExecutePccCommand @ 0x1C0024F38 (ExecutePccCommand.c)
 *     StartPccCommand @ 0x1C00252C0 (StartPccCommand.c)
 *     GetPerfDomain @ 0x1C002CF98 (GetPerfDomain.c)
 */

__int64 __fastcall CpcHighestNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2, const char *a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned __int16 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rsi
  char v10; // r14
  unsigned __int64 GenAddrMaybeHidden; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v17[8]; // [rsp+38h] [rbp-31h] BYREF
  _OWORD v18[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v19; // [rsp+60h] [rbp-9h] BYREF
  int v20; // [rsp+68h] [rbp-1h]
  struct _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp+7h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp+17h] BYREF

  v16 = 0LL;
  v19 = 0LL;
  v20 = 0;
  Affinity = 0LL;
  memset(v18, 0, sizeof(v18));
  PreviousAffinity = 0LL;
  if ( a2 )
    IoFreeWorkItem(a2);
  v5 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(v5 + 280);
  if ( (result & 0x8000000) == 0 )
  {
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v7 = 22;
    return WPP_RECORDER_SF_s(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             1u,
             v7,
             (__int64)&WPP_8e58de59150337489f5f05510e333dbf_Traceguids,
             a3);
  }
  v8 = *(_QWORD *)(v5 + 248);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 144);
    if ( *(_BYTE *)(v9 + 8) == 126 )
    {
      result = (__int64)&WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = 23;
        return WPP_RECORDER_SF_s(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 2u,
                 1u,
                 v7,
                 (__int64)&WPP_8e58de59150337489f5f05510e333dbf_Traceguids,
                 a3);
      }
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C0011458,
        0LL);
      if ( !*(_BYTE *)(v8 + 134)
        || (int)StartPccCommand(*(_QWORD *)(v5 + 256)) >= 0 && (int)ExecutePccCommand(*(_QWORD *)(v5 + 256), 0LL) >= 0 )
      {
        if ( *(_BYTE *)(v9 + 8) != 127 || *(_DWORD *)(v5 + 80) )
        {
          v10 = 0;
        }
        else
        {
          KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v5 + 56));
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          v10 = 1;
        }
        GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx(v5, (_BYTE *)(v9 + 8));
        if ( v10 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v12 = *(_QWORD *)(v8 + 48);
        if ( GenAddrMaybeHidden < v12 )
        {
          GenAddrMaybeHidden = *(_QWORD *)(v8 + 48);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_s(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              1u,
              0x18u,
              (__int64)&WPP_8e58de59150337489f5f05510e333dbf_Traceguids,
              a3);
            GenAddrMaybeHidden = *(_QWORD *)(v8 + 48);
          }
          v12 = GenAddrMaybeHidden;
        }
        *(_QWORD *)(v8 + 40) = GenAddrMaybeHidden;
        v13 = 100 * GenAddrMaybeHidden / v12;
        *(_DWORD *)(v8 + 100) = v13;
        if ( (unsigned int)v13 > *(_DWORD *)(v8 + 104) )
          *(_DWORD *)(v8 + 104) = v13;
        v20 = 0;
        LODWORD(v19) = *(_DWORD *)(v8 + 100);
        if ( *(_DWORD *)(v5 + 80) )
        {
          v20 = *(_DWORD *)(v5 + 80);
          v14 = *(_DWORD *)(v5 + 84);
        }
        else
        {
          v14 = *(_DWORD *)(v5 + 56);
        }
        HIDWORD(v19) = v14;
        GetPerfDomain(v5, v18, v17);
        ResetEnumerationContext((__int64 *)v18);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v18, &v16) )
        {
          v15 = v16;
          if ( v5 != v16 )
          {
            *(_QWORD *)(*(_QWORD *)(v16 + 248) + 40LL) = *(_QWORD *)(v8 + 40);
            *(_DWORD *)(*(_QWORD *)(v15 + 248) + 100LL) = *(_DWORD *)(v8 + 100);
            *(_DWORD *)(*(_QWORD *)(v15 + 248) + 104LL) = *(_DWORD *)(v8 + 104);
          }
        }
        ((void (__fastcall *)(__int64 *))qword_1C0011740)(&v19);
        ProcLibTraceProcessorSpecificEvent(v5, (__int64)&PPM_ETW_NOTIFY_85, (__int64)&PPM_ETW_NOTIFY_85_HV, 0, 0LL);
      }
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
               WdfDriverGlobals,
               qword_1C0011458);
    }
  }
  return result;
}
