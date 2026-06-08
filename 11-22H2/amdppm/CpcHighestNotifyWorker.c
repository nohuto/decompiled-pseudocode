/*
 * XREFs of CpcHighestNotifyWorker @ 0x1C0024014
 * Callers:
 *     CpcNativeInterruptWorker @ 0x1C0024320 (CpcNativeInterruptWorker.c)
 *     AcpiCppcHighestNotifyWorker @ 0x1C00264B0 (AcpiCppcHighestNotifyWorker.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001850 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0002394 (ResetEnumerationContext.c)
 *     __security_check_cookie @ 0x1C0002BC0 (__security_check_cookie.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0003D78 (ReadGenAddrMaybeHiddenEx.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C00040F8 (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_s @ 0x1C00054FC (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     ExecutePccCommand @ 0x1C0025B88 (ExecutePccCommand.c)
 *     StartPccCommand @ 0x1C0025EB0 (StartPccCommand.c)
 *     GetPerfDomain @ 0x1C002DD08 (GetPerfDomain.c)
 */

__int64 __fastcall CpcHighestNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2, const char *a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  unsigned __int16 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // r14
  int *v10; // rsi
  char v11; // r15
  unsigned __int64 GenAddrMaybeHidden; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v18[8]; // [rsp+38h] [rbp-41h] BYREF
  _OWORD v19[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v20; // [rsp+60h] [rbp-19h] BYREF
  int v21; // [rsp+68h] [rbp-11h]
  struct _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp-9h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp+7h] BYREF

  v17 = 0LL;
  v20 = 0LL;
  v21 = 0;
  Affinity = 0LL;
  memset(v19, 0, sizeof(v19));
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
             (__int64)&WPP_d96244bd3e763d8819ec805b3358b28f_Traceguids,
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
                 (__int64)&WPP_d96244bd3e763d8819ec805b3358b28f_Traceguids,
                 a3);
      }
    }
    else
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C00124D8,
        0LL);
      if ( !*(_BYTE *)(v8 + 134)
        || (int)StartPccCommand(*(_QWORD *)(v5 + 256)) >= 0 && (int)ExecutePccCommand(*(_QWORD *)(v5 + 256), 0LL) >= 0 )
      {
        v10 = (int *)(v5 + 80);
        if ( *(_BYTE *)(v9 + 8) != 127 || *v10 )
        {
          v11 = 0;
        }
        else
        {
          KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v5 + 56));
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          v11 = 1;
        }
        GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx(v5, (_BYTE *)(v9 + 8));
        if ( v11 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v13 = *(_QWORD *)(v8 + 48);
        if ( GenAddrMaybeHidden < v13 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_s(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              1u,
              0x18u,
              (__int64)&WPP_d96244bd3e763d8819ec805b3358b28f_Traceguids,
              a3);
          GenAddrMaybeHidden = *(_QWORD *)(v8 + 48);
          v13 = GenAddrMaybeHidden;
        }
        *(_QWORD *)(v8 + 40) = GenAddrMaybeHidden;
        v14 = 100 * GenAddrMaybeHidden / v13;
        *(_DWORD *)(v8 + 100) = v14;
        if ( (unsigned int)v14 > *(_DWORD *)(v8 + 104) )
          *(_DWORD *)(v8 + 104) = v14;
        v21 = 0;
        LODWORD(v20) = *(_DWORD *)(v8 + 100);
        if ( *v10 )
        {
          v21 = *v10;
          v15 = *(_DWORD *)(v5 + 84);
        }
        else
        {
          v15 = *(_DWORD *)(v5 + 56);
        }
        HIDWORD(v20) = v15;
        GetPerfDomain(v5, v19, v18);
        ResetEnumerationContext((__int64 *)v19);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v19, &v17) )
        {
          v16 = v17;
          if ( v5 != v17 )
          {
            *(_QWORD *)(*(_QWORD *)(v17 + 248) + 40LL) = *(_QWORD *)(v8 + 40);
            *(_DWORD *)(*(_QWORD *)(v16 + 248) + 100LL) = *(_DWORD *)(v8 + 100);
            *(_DWORD *)(*(_QWORD *)(v16 + 248) + 104LL) = *(_DWORD *)(v8 + 104);
          }
        }
        ((void (__fastcall *)(__int64 *))qword_1C00127D0)(&v20);
        ProcLibTraceProcessorSpecificEvent(v5, (__int64)&PPM_ETW_NOTIFY_85, (__int64)&PPM_ETW_NOTIFY_85_HV, 0, 0LL);
      }
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
               WdfDriverGlobals,
               qword_1C00124D8);
    }
  }
  return result;
}
