/*
 * XREFs of CpcHighestNotifyWorker @ 0x1C0036564
 * Callers:
 *     CpcNativeInterruptWorker @ 0x1C0036880 (CpcNativeInterruptWorker.c)
 *     AcpiCppcHighestNotifyWorker @ 0x1C0039B00 (AcpiCppcHighestNotifyWorker.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C000248C (EnumerateNextDevice.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C00024D8 (ReadGenAddrMaybeHiddenEx.c)
 *     ResetEnumerationContext @ 0x1C0002528 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002544 (WPP_RECORDER_SF_s.c)
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0003DF0 (ProcLibTraceProcessorSpecificEvent.c)
 *     GetPerfDomain @ 0x1C002478C (GetPerfDomain.c)
 *     StartPccCommand @ 0x1C0039AA0 (StartPccCommand.c)
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
  char v12; // r15
  unsigned __int64 GenAddrMaybeHidden; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // [rsp+30h] [rbp-49h] BYREF
  int v19; // [rsp+38h] [rbp-41h] BYREF
  _OWORD v20[2]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v21; // [rsp+60h] [rbp-19h] BYREF
  int v22; // [rsp+68h] [rbp-11h]
  struct _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp-9h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp+7h] BYREF

  v18 = 0LL;
  v21 = 0LL;
  v22 = 0;
  Affinity = 0LL;
  memset(v20, 0, sizeof(v20));
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
        qword_1C001DCF8,
        0LL);
      if ( !*(_BYTE *)(v8 + 134)
        || (int)StartPccCommand(*(_QWORD *)(v5 + 256)) >= 0
        && (v10 = *(_QWORD *)(v5 + 256),
            v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v10 + 120))(*(_QWORD *)(v10 + 72), 0LL),
            *(_DWORD *)(v10 + 144) &= ~1u,
            v11 >= 0) )
      {
        if ( *(_BYTE *)(v9 + 8) != 127 || *(_DWORD *)(v5 + 80) )
        {
          v12 = 0;
        }
        else
        {
          KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v5 + 56));
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          v12 = 1;
        }
        GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx(v5, v9 + 8);
        if ( v12 )
          KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        v14 = *(_QWORD *)(v8 + 48);
        if ( GenAddrMaybeHidden < v14 )
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
          v14 = GenAddrMaybeHidden;
        }
        *(_QWORD *)(v8 + 40) = GenAddrMaybeHidden;
        v15 = 100 * GenAddrMaybeHidden / v14;
        *(_DWORD *)(v8 + 100) = v15;
        if ( (unsigned int)v15 > *(_DWORD *)(v8 + 104) )
          *(_DWORD *)(v8 + 104) = v15;
        v22 = 0;
        LODWORD(v21) = *(_DWORD *)(v8 + 100);
        if ( *(_DWORD *)(v5 + 80) )
        {
          v22 = *(_DWORD *)(v5 + 80);
          v16 = *(_DWORD *)(v5 + 84);
        }
        else
        {
          v16 = *(_DWORD *)(v5 + 56);
        }
        HIDWORD(v21) = v16;
        GetPerfDomain(v5, (__int64)v20, &v19);
        ResetEnumerationContext((__int64 *)v20);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v20, &v18) )
        {
          v17 = v18;
          if ( v5 != v18 )
          {
            *(_QWORD *)(*(_QWORD *)(v18 + 248) + 40LL) = *(_QWORD *)(v8 + 40);
            *(_DWORD *)(*(_QWORD *)(v17 + 248) + 100LL) = *(_DWORD *)(v8 + 100);
            *(_DWORD *)(*(_QWORD *)(v17 + 248) + 104LL) = *(_DWORD *)(v8 + 104);
          }
        }
        ((void (__fastcall *)(__int64 *))qword_1C001DFE0)(&v21);
        ProcLibTraceProcessorSpecificEvent(v5, (__int64)&PPM_ETW_NOTIFY_85, (__int64)&PPM_ETW_NOTIFY_85_HV, 0, 0LL);
      }
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
               WdfDriverGlobals,
               qword_1C001DCF8);
    }
  }
  return result;
}
