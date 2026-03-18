/*
 * XREFs of ACPIDevicePowerProcessPhase3 @ 0x1C0022FAC
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C000F880 (ACPIDevicePowerDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007340 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qsL @ 0x1C0009F30 (WPP_RECORDER_SF_qsL.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C0023550 (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIDeviceCompletePhase3Off @ 0x1C002B300 (ACPIDeviceCompletePhase3Off.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 ACPIDevicePowerProcessPhase3()
{
  unsigned int v0; // edi
  char v1; // bp
  char v2; // r9
  char v3; // r13
  __int64 *v4; // r12
  char v5; // cl
  __int64 *v6; // rbx
  __int64 *v7; // rsi
  __int64 *v8; // rbx
  unsigned int v9; // eax
  bool v10; // zf
  __int64 *v12; // r9
  __int32 v13; // ecx
  __int64 v14; // rax
  __int64 *v15; // r8
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  __int64 *v19; // rsi
  const char *v20; // r15
  __int64 (__fastcall *v21)(); // r14
  __int64 v22; // rdx
  unsigned int v23; // edi
  __int64 v24; // rax
  __int64 v25; // [rsp+30h] [rbp-48h]
  char v26; // [rsp+80h] [rbp+8h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      10,
      69,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids);
  v0 = 0;
  v1 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  while ( 1 )
  {
    if ( Phase3PendingOffWorkCount )
    {
      v2 = 1;
      v26 = 1;
    }
    else
    {
      Phase3CurrentOffResourceOrder = -1;
      v2 = 0;
      v26 = 0;
    }
    if ( Phase3PendingOnWorkCount )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      Phase3CurrentOnResourceOrder = 0;
    }
    if ( !Phase3PendingOnWorkCount && !Phase3PendingOffWorkCount )
      v1 = 1;
    v4 = (__int64 *)AcpiPowerNodeList;
    ++Phase3PendingOnWorkCount;
    v5 = 0;
    if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
    {
      while ( 1 )
      {
        v6 = v4;
        v4 = (__int64 *)*v4;
        if ( v3 && *((unsigned __int8 *)v6 + 40) > (unsigned int)Phase3CurrentOnResourceOrder )
          goto LABEL_16;
        if ( v2
          && *((unsigned __int8 *)v6 + 40) > (unsigned int)Phase3CurrentOffResourceOrder
          && _InterlockedCompareExchange((volatile signed __int32 *)v6 + 16, 1, 1) == 3 )
        {
          v5 = 1;
          break;
        }
        if ( _InterlockedCompareExchange((volatile signed __int32 *)v6 + 16, 4, 3) != 3 )
          goto LABEL_15;
        v1 = 0;
        v12 = (__int64 *)v6[6];
        v13 = 0;
        while ( v12 != v6 + 6 )
        {
          v15 = v12;
          v16 = *(v12 - 1);
          v12 = (__int64 *)*v12;
          if ( _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 552), 0, 0) && *((_BYTE *)v15 - 16) )
            goto LABEL_53;
          v17 = *(_DWORD *)(v16 + 544);
          if ( v17 == *((_DWORD *)v15 - 5) )
          {
            if ( v17 == 4 )
            {
              if ( (*(_DWORD *)(v16 + 8) & 0x800LL) != 0 && (*(_DWORD *)(v16 + 1000) & 0x10000000) == 0
                || *(_BYTE *)(v16 + 665) )
              {
                goto LABEL_53;
              }
            }
            else
            {
              if ( v17 == 1 )
                *(_BYTE *)(v16 + 665) = 0;
LABEL_53:
              ++v13;
            }
          }
        }
        _InterlockedExchange((volatile __int32 *)v6 + 6, v13);
        v14 = v6[2];
        if ( (v14 & 0x440) == 0 && ((v14 & 0x2220) != 0 || v13) )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)v6 + 16, 1, 4);
          ++Phase3PendingOnWorkCount;
          *((_DWORD *)v6 + 17) = 0;
          KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
          v18 = v6[2] & 0x2000;
          if ( (v6[2] & 0x2000) != 0 )
            v19 = (__int64 *)v6[11];
          else
            v19 = (__int64 *)v6[9];
          v20 = "_RST";
          if ( !v18 )
            v20 = "_ON";
          v21 = ACPIDeviceCompletePhase3Reset;
          if ( !v18 )
            v21 = ACPIDeviceCompletePhase3On;
          if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v6) )
          {
            v23 = -1073741661;
          }
          else
          {
            v23 = AMLIAsyncEvalObject(v19, 0LL, 0, 0LL, v21, v6);
            v24 = v6[2];
            if ( (v24 & 0x2000) != 0 )
              v6[2] = v24 & 0xFFFFFFFFFFFFDFFFuLL;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qsL(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v22,
              0xAu,
              0x46u,
              (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
              (char)v6,
              v20);
          if ( v23 != 259 )
            ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64 *))v21)(v19, v23, 0LL, v6);
          KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
          v2 = v26;
          if ( v23 == 259 )
          {
            v0 = 0;
            if ( !v3 )
            {
              v3 = 1;
              Phase3CurrentOnResourceOrder = *((unsigned __int8 *)v6 + 40);
            }
          }
          else
          {
            v0 = 0;
          }
        }
        else
        {
          v2 = v26;
        }
LABEL_15:
        if ( v4 == &AcpiPowerNodeList )
        {
LABEL_16:
          v5 = 0;
          break;
        }
      }
    }
    if ( --Phase3PendingOnWorkCount )
    {
      if ( v3 )
        break;
    }
    else
    {
      Phase3CurrentOnResourceOrder = 0;
    }
    if ( v4 == &AcpiPowerNodeList || v5 )
    {
      do
      {
        ++Phase3PendingOffWorkCount;
        v7 = (__int64 *)qword_1C00813D8;
        while ( v7 != &AcpiPowerNodeList )
        {
          v8 = v7;
          v7 = (__int64 *)v7[1];
          v9 = *((unsigned __int8 *)v8 + 40);
          if ( v9 <= Phase3CurrentOffResourceOrder )
          {
            if ( v2 && v9 < Phase3CurrentOffResourceOrder )
              break;
            if ( _InterlockedCompareExchange((volatile signed __int32 *)v8 + 16, 1, 4) == 4 )
            {
              ++Phase3PendingOffWorkCount;
              v1 = 0;
              *((_DWORD *)v8 + 17) = 0;
              KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
              if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v8) )
              {
                v0 = -1073741661;
              }
              else if ( (AcpiOverrideAttributes & 0x4000000) == 0 || !AcpiKsrInProgress )
              {
                v0 = AMLIAsyncEvalObject((__int64 *)v8[10], 0LL, 0, 0LL, ACPIDeviceCompletePhase3Off, v8);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LODWORD(v25) = v0;
                WPP_RECORDER_SF_qD(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  4u,
                  0xAu,
                  0x47u,
                  (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
                  v8,
                  v25);
              }
              if ( v0 != 259 )
                ACPIDeviceCompletePhase3Off(v8[10], v0, 0LL, v8);
              KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
              if ( v0 == 259 )
              {
                v2 = 1;
                Phase3CurrentOffResourceOrder = *((unsigned __int8 *)v8 + 40);
                v26 = 1;
              }
              else
              {
                v2 = v26;
              }
              v0 = 0;
            }
          }
        }
        v10 = Phase3PendingOffWorkCount-- == 1;
        v26 = v2;
        if ( v10 )
        {
          Phase3CurrentOffResourceOrder = -1;
          v2 = 0;
          v26 = 0;
        }
        else if ( v2 )
        {
          goto LABEL_33;
        }
      }
      while ( v7 != &AcpiPowerNodeList );
      if ( v1 )
        break;
    }
  }
LABEL_33:
  if ( Phase3PendingOffWorkCount > 0 || Phase3PendingOnWorkCount > 0 )
    v1 = 0;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v1 == 0 ? 0x103 : 0;
}
