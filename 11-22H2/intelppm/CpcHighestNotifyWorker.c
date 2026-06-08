/*
 * XREFs of CpcHighestNotifyWorker @ 0x1C0037788
 * Callers:
 *     CpcNativeInterruptWorker @ 0x1C0037AA0 (CpcNativeInterruptWorker.c)
 *     AcpiCppcHighestNotifyWorker @ 0x1C003ADF0 (AcpiCppcHighestNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C000316C (WPP_RECORDER_SF_s.c)
 *     EnumerateNextDevice @ 0x1C00033D8 (EnumerateNextDevice.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0003424 (ReadGenAddrMaybeHiddenEx.c)
 *     ResetEnumerationContext @ 0x1C0003474 (ResetEnumerationContext.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0004EF4 (ProcLibTraceProcessorSpecificEvent.c)
 *     GetPerfDomain @ 0x1C002CA14 (GetPerfDomain.c)
 *     StartPccCommand @ 0x1C003AD90 (StartPccCommand.c)
 */

__int64 __fastcall CpcHighestNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2, const char *a3)
{
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int16 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rbx
  int v11; // eax
  int *v12; // rbx
  char v13; // r15
  unsigned __int64 GenAddrMaybeHidden; // r14
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // [rsp+30h] [rbp-49h] BYREF
  int v20; // [rsp+38h] [rbp-41h] BYREF
  _OWORD v21[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v22; // [rsp+60h] [rbp-19h] BYREF
  int v23; // [rsp+68h] [rbp-11h]
  struct _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp-9h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp+7h] BYREF

  v19 = 0LL;
  v22 = 0LL;
  v23 = 0;
  Affinity = 0LL;
  memset(v21, 0, sizeof(v21));
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
        qword_1C001F018,
        0LL);
      if ( !*(_BYTE *)(v8 + 134)
        || (int)StartPccCommand(*(_QWORD *)(v5 + 256)) >= 0
        && (v10 = *(_QWORD *)(v5 + 256),
            v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v10 + 120))(*(_QWORD *)(v10 + 72), 0LL),
            *(_DWORD *)(v10 + 144) &= ~1u,
            v11 >= 0) )
      {
        v12 = (int *)(v5 + 80);
        if ( *(_BYTE *)(v9 + 8) != 127 || *v12 )
        {
          v13 = 0;
        }
        else
        {
          KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v5 + 56));
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          v13 = 1;
        }
        GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx(v5, v9 + 8);
        if ( v13 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v15 = *(_QWORD *)(v8 + 48);
        if ( GenAddrMaybeHidden < v15 )
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
          v15 = GenAddrMaybeHidden;
        }
        *(_QWORD *)(v8 + 40) = GenAddrMaybeHidden;
        v16 = 100 * GenAddrMaybeHidden / v15;
        *(_DWORD *)(v8 + 100) = v16;
        if ( (unsigned int)v16 > *(_DWORD *)(v8 + 104) )
          *(_DWORD *)(v8 + 104) = v16;
        v23 = 0;
        LODWORD(v22) = *(_DWORD *)(v8 + 100);
        if ( *v12 )
        {
          v23 = *v12;
          v17 = *(_DWORD *)(v5 + 84);
        }
        else
        {
          v17 = *(_DWORD *)(v5 + 56);
        }
        HIDWORD(v22) = v17;
        GetPerfDomain(v5, (__int64)v21, &v20);
        ResetEnumerationContext((__int64 *)v21);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v21, &v19) )
        {
          v18 = v19;
          if ( v5 != v19 )
          {
            *(_QWORD *)(*(_QWORD *)(v19 + 248) + 40LL) = *(_QWORD *)(v8 + 40);
            *(_DWORD *)(*(_QWORD *)(v18 + 248) + 100LL) = *(_DWORD *)(v8 + 100);
            *(_DWORD *)(*(_QWORD *)(v18 + 248) + 104LL) = *(_DWORD *)(v8 + 104);
          }
        }
        ((void (__fastcall *)(__int64 *))qword_1C001F310)(&v22);
        ProcLibTraceProcessorSpecificEvent(v5, (__int64)&PPM_ETW_NOTIFY_85, (__int64)&PPM_ETW_NOTIFY_85_HV, 0, 0LL);
      }
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
               WdfDriverGlobals,
               qword_1C001F018);
    }
  }
  return result;
}
