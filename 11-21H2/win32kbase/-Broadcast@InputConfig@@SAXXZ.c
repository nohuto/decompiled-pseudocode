/*
 * XREFs of ?Broadcast@InputConfig@@SAXXZ @ 0x1C009F464
 * Callers:
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C009F3EC (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     _lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_ @ 0x1C00C6040 (_lambda_ebe346d30a668a9733c532f644f5367b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C003B78C (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void InputConfig::Broadcast(void)
{
  InputExtensibilityCallout *v0; // rdi
  char *v1; // rbx
  __int64 v2; // r8
  CInputConfig *v3; // r13
  __int64 v4; // rdx
  CInputConfig *v5; // rcx
  CInputConfig *i; // r12
  _QWORD **v7; // rdi
  __int64 v8; // rcx
  unsigned int v9; // r15d
  unsigned int v10; // ebp
  PVOID v11; // rsi
  __int64 v12; // rdx
  __int64 Pool2; // rbx
  unsigned int v14; // esi
  int v15; // ecx
  _QWORD **v16; // rdi
  _QWORD *j; // r9
  _OWORD *v18; // r8
  _OWORD *v19; // rdx
  __int128 v20; // xmm1
  _OWORD *v21; // r8
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  char v25; // r14
  PVOID BackTrace[28]; // [rsp+20h] [rbp-108h] BYREF

  v0 = gpInputExtensibilityCallout;
  v1 = (char *)gpInputExtensibilityCallout + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  LOBYTE(v0) = InputExtensibilityCallout::_CanSendMessageToDestinationInternal((__int64)v0, 7LL, v2);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v0 )
  {
    v3 = gpInputConfig;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
    v5 = *(CInputConfig **)v3;
    for ( i = **(CInputConfig ***)v3; ; i = *(CInputConfig **)i )
    {
      v7 = 0LL;
      if ( v5 != v3 )
        v7 = (_QWORD **)((char *)v5 + 16);
      if ( !v7 )
      {
LABEL_6:
        ExReleaseResourceLite(CInputConfig::slock);
        KeLeaveCriticalRegion();
        memset((char *)BackTrace + 4, 0, 0xD8uLL);
        LODWORD(BackTrace[0]) = 1;
        InputExtensibilityCallout::CoreMsgSendMessage(v8, 7);
        return;
      }
      v9 = *((_DWORD *)v7 + 363);
      if ( v9 > 1 )
      {
        v23 = 200LL * (v9 - 1);
        if ( v23 > 0xFFFFFFFF || (v10 = v23 + 220, (unsigned int)v23 >= 0xFFFFFF24) )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(0xFFFFFFFFLL, v4, 1866690121LL);
          goto LABEL_19;
        }
      }
      else
      {
        v10 = 220;
      }
      v11 = gpLeakTrackingAllocator;
      v12 = v10;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6F436E49) == 0x6F436E49
        && (v24 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v24) != 1866690121 )
        {
          if ( ++v24 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_11;
        }
        v25 = 0;
        if ( v10 < 0x1000uLL || (v10 & 0xFFF) != 0 )
        {
          v25 = 1;
          v12 = v10 + 16LL;
        }
        Pool2 = ExAllocatePool2(260LL, v12);
        if ( !Pool2 )
          goto LABEL_6;
        memset(BackTrace, 0, 0xA0uLL);
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( !v25 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v11,
                                   Pool2,
                                   BackTrace) )
          {
LABEL_36:
            ExFreePoolWithTag((PVOID)Pool2, 0);
            goto LABEL_6;
          }
          goto LABEL_13;
        }
        if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                 v11,
                                 Pool2,
                                 BackTrace) )
          goto LABEL_36;
        Pool2 += 16LL;
      }
      else
      {
LABEL_11:
        Pool2 = ExAllocatePool2(260LL, v10);
      }
      if ( !Pool2 )
        goto LABEL_6;
LABEL_13:
      *(_DWORD *)Pool2 = 0;
      v14 = 0;
      *(_QWORD *)(Pool2 + 4) = *v7;
      v15 = *((_DWORD *)v7 + 2);
      v16 = v7 + 182;
      *(_DWORD *)(Pool2 + 12) = v15;
      *(_DWORD *)(Pool2 + 16) = v9;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
      for ( j = *v16; ; j = (_QWORD *)*j )
      {
        v18 = 0LL;
        if ( j != v16 )
          v18 = j + 2;
        if ( !v18 )
          break;
        v19 = (_OWORD *)(200LL * v14 + Pool2 + 20);
        *v19 = *v18;
        v19[1] = v18[1];
        v19[2] = v18[2];
        v19[3] = v18[3];
        v19[4] = v18[4];
        v19[5] = v18[5];
        v19[6] = v18[6];
        v19 += 8;
        v20 = v18[7];
        v21 = v18 + 8;
        ++v14;
        *(v19 - 1) = v20;
        *v19 = *v21;
        v19[1] = v21[1];
        v19[2] = v21[2];
        v19[3] = v21[3];
        *((_QWORD *)v19 + 8) = *((_QWORD *)v21 + 8);
      }
      ExReleaseResourceLite(CInputConfig::slock);
      KeLeaveCriticalRegion();
      InputExtensibilityCallout::CoreMsgSendMessage(v22, 7);
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)Pool2);
LABEL_19:
      v5 = i;
    }
  }
}
