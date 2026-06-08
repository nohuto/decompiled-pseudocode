/*
 * XREFs of RegisterKernelCoordinatedStates @ 0x1C003E2FC
 * Callers:
 *     RegisterIdleComplete @ 0x1C002C3F4 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceCoordinatedIdleStates @ 0x1C0033E98 (ProcLibTraceCoordinatedIdleStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C0040B44 (PepNotifyQueryCoordinatedStates.c)
 */

__int64 __fastcall RegisterKernelCoordinatedStates(__int64 a1)
{
  int v1; // edi
  int v2; // eax
  _QWORD *v3; // rbx
  PVOID v4; // rcx
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  P = 0LL;
  if ( dword_1C001E33C )
  {
    v2 = PepNotifyQueryCoordinatedStates(a1, &P);
    v3 = P;
    v1 = v2;
    if ( v2 >= 0 )
    {
      v4 = P;
      *(_DWORD *)P = dword_1C001E33C;
      v3[4] = PepQueryPlatformStateResidency;
      v3[2] = PepIdlePreExecute;
      v3[3] = PepIdleComplete;
      v1 = ((__int64 (__fastcall *)(PVOID))qword_1C001E010)(v4);
      if ( v1 >= 0 )
      {
        qword_1C001E348 = (__int64)v3;
        v3 = 0LL;
        ProcLibTraceCoordinatedIdleStates(0);
        v1 = 0;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x16u,
          (__int64)&WPP_bbd7f1d6b60732b23d6f9f773c2a3ec3_Traceguids,
          v1);
      }
    }
    if ( v3 )
      ExFreePoolWithTag(v3, (ULONG)1919119952);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v1;
}
