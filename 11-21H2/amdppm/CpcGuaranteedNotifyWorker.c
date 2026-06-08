/*
 * XREFs of CpcGuaranteedNotifyWorker @ 0x1C00230F0
 * Callers:
 *     CpcNativeInterruptWorker @ 0x1C00236B0 (CpcNativeInterruptWorker.c)
 *     AcpiCppcGuaranteedNotifyWorker @ 0x1C00258A0 (AcpiCppcGuaranteedNotifyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0003AA4 (ReadGenAddrMaybeHiddenEx.c)
 *     ProcLibTracePccCapChange @ 0x1C0003DD8 (ProcLibTracePccCapChange.c)
 *     WPP_RECORDER_SF_s @ 0x1C000514C (WPP_RECORDER_SF_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     ExecutePccCommand @ 0x1C0024F38 (ExecutePccCommand.c)
 *     StartPccCommand @ 0x1C00252C0 (StartPccCommand.c)
 *     ProcLibCapChange @ 0x1C002B85C (ProcLibCapChange.c)
 */

__int64 __fastcall CpcGuaranteedNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2, const char *a3)
{
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  char v9; // si
  unsigned __int64 GenAddrMaybeHidden; // rbp
  unsigned __int64 v11; // rcx
  unsigned int v12; // esi
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( a2 )
    IoFreeWorkItem(a2);
  v5 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(v5 + 280);
  if ( (result & 0x8000000) != 0 )
  {
    v7 = *(_QWORD *)(v5 + 248);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 144);
      if ( *(_BYTE *)(v7 + 131) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C0011458,
          0LL);
        if ( !*(_BYTE *)(v7 + 133)
          || (int)StartPccCommand(*(_QWORD *)(v5 + 256)) >= 0 && (int)ExecutePccCommand(*(_QWORD *)(v5 + 256), 0LL) >= 0 )
        {
          if ( *(_BYTE *)(v8 + 104) != 127 || *(_DWORD *)(v5 + 80) )
          {
            v9 = 0;
          }
          else
          {
            KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v5 + 56));
            KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
            v9 = 1;
          }
          GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx(v5, (_BYTE *)(v8 + 104));
          if ( v9 )
            KeRevertToUserGroupAffinityThread(&PreviousAffinity);
          v11 = *(_QWORD *)(v7 + 48);
          if ( GenAddrMaybeHidden > v11 )
          {
            GenAddrMaybeHidden = *(_QWORD *)(v7 + 48);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_s(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                1u,
                0x14u,
                (__int64)&WPP_8e58de59150337489f5f05510e333dbf_Traceguids,
                a3);
              GenAddrMaybeHidden = *(_QWORD *)(v7 + 48);
            }
            v11 = GenAddrMaybeHidden;
          }
          if ( GenAddrMaybeHidden < *(_QWORD *)(v7 + 64) )
          {
            GenAddrMaybeHidden = *(_QWORD *)(v7 + 64);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_s(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                1u,
                0x15u,
                (__int64)&WPP_8e58de59150337489f5f05510e333dbf_Traceguids,
                a3);
              v11 = *(_QWORD *)(v7 + 48);
              GenAddrMaybeHidden = *(_QWORD *)(v7 + 64);
            }
          }
          v12 = *(_DWORD *)(v7 + 112);
          *(_QWORD *)(v7 + 88) = GenAddrMaybeHidden;
          if ( (unsigned int)(100 * GenAddrMaybeHidden / v11) > v12 )
            v12 = 100 * GenAddrMaybeHidden / v11;
          *(_DWORD *)(v7 + 116) = v12;
          if ( v12 != *(_DWORD *)(v5 + 740) )
          {
            ProcLibCapChange(v5, *(unsigned int *)(v5 + 464), *(unsigned int *)(v5 + 512), v12);
            ((void (__fastcall *)(__int64))qword_1C0011958)(v5);
          }
          ProcLibTracePccCapChange(v5, v12);
        }
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                 WdfDriverGlobals,
                 qword_1C0011458);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    return WPP_RECORDER_SF_s(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             1u,
             0x13u,
             (__int64)&WPP_8e58de59150337489f5f05510e333dbf_Traceguids,
             a3);
  }
  return result;
}
