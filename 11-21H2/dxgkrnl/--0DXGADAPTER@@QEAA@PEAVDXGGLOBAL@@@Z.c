/*
 * XREFs of ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C01FC130
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD460 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x1C01FC5AC (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 */

DXGADAPTER *__fastcall DXGADAPTER::DXGADAPTER(char *DeferredContext, struct DXGGLOBAL *a2)
{
  KSPIN_LOCK *v3; // rcx
  __int64 v4; // rcx
  EVENT_TYPE v5; // edx
  DXGADAPTER *result; // rax

  *((_QWORD *)DeferredContext + 2) = a2;
  *(_OWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 3) = 0LL;
  *((_DWORD *)DeferredContext + 24) = -1;
  *((_QWORD *)DeferredContext + 9) = 0LL;
  *((_QWORD *)DeferredContext + 10) = 0LL;
  *((_DWORD *)DeferredContext + 22) = 0;
  *((_DWORD *)DeferredContext + 23) = 33;
  *((_DWORD *)DeferredContext + 32) = -1;
  *((_QWORD *)DeferredContext + 13) = 0LL;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 30) = 0;
  *((_DWORD *)DeferredContext + 31) = 64;
  *((_QWORD *)DeferredContext + 17) = 0LL;
  *((_QWORD *)DeferredContext + 18) = 0LL;
  *((_DWORD *)DeferredContext + 38) = 0;
  *(_QWORD *)(DeferredContext + 156) = 39LL;
  *((_QWORD *)DeferredContext + 21) = 0LL;
  *((_DWORD *)DeferredContext + 44) = 2;
  *((_DWORD *)DeferredContext + 50) = 0;
  DeferredContext[205] = 0;
  *(_DWORD *)(DeferredContext + 206) = 256;
  *((_WORD *)DeferredContext + 105) = 0;
  DeferredContext[212] = 0;
  *((_QWORD *)DeferredContext + 27) = 0LL;
  *((_QWORD *)DeferredContext + 29) = 0LL;
  *((_DWORD *)DeferredContext + 60) = -1;
  *((_DWORD *)DeferredContext + 61) = -1;
  *((_QWORD *)DeferredContext + 34) = 0LL;
  *((_DWORD *)DeferredContext + 673) = 1000;
  *((_QWORD *)DeferredContext + 337) = 0LL;
  DeferredContext[2705] = 0;
  *((_WORD *)DeferredContext + 1355) = 0;
  *((_DWORD *)DeferredContext + 680) = 0;
  *((_DWORD *)DeferredContext + 682) = 0;
  *((_WORD *)DeferredContext + 1371) = 256;
  *(_WORD *)(DeferredContext + 2747) = 0;
  *((_QWORD *)DeferredContext + 349) = 0LL;
  *((_QWORD *)DeferredContext + 350) = 0LL;
  *((_QWORD *)DeferredContext + 351) = 0LL;
  *((_DWORD *)DeferredContext + 722) = 0;
  *((_QWORD *)DeferredContext + 362) = 0LL;
  *((_QWORD *)DeferredContext + 363) = 0LL;
  *((_DWORD *)DeferredContext + 760) = 0;
  *((_DWORD *)DeferredContext + 761) = -1;
  *((_DWORD *)DeferredContext + 762) = -1;
  *(_QWORD *)(DeferredContext + 3052) = 0LL;
  *((_QWORD *)DeferredContext + 407) = 0LL;
  *(_DWORD *)(DeferredContext + 3333) = 0;
  *(_WORD *)(DeferredContext + 3337) = 256;
  *((_DWORD *)DeferredContext + 835) = 0;
  v3 = (KSPIN_LOCK *)(DeferredContext + 3360);
  v3[1] = 0LL;
  KeInitializeSpinLock(v3);
  *((_QWORD *)DeferredContext + 422) = 0LL;
  *((_DWORD *)DeferredContext + 894) = 0;
  *((_DWORD *)DeferredContext + 916) = 0;
  *((_QWORD *)DeferredContext + 464) = 0LL;
  DeferredContext[3720] = 0;
  *((_QWORD *)DeferredContext + 498) = 0LL;
  *((_QWORD *)DeferredContext + 499) = 0LL;
  *((_QWORD *)DeferredContext + 500) = 0LL;
  *((_QWORD *)DeferredContext + 501) = 0LL;
  *((_QWORD *)DeferredContext + 502) = 0LL;
  *((_QWORD *)DeferredContext + 503) = 0LL;
  *((_DWORD *)DeferredContext + 1014) = -1;
  *((_QWORD *)DeferredContext + 504) = 0LL;
  *((_QWORD *)DeferredContext + 505) = 0LL;
  *((_DWORD *)DeferredContext + 1012) = 0;
  *((_DWORD *)DeferredContext + 1013) = 64;
  *((_QWORD *)DeferredContext + 509) = 0LL;
  *((_QWORD *)DeferredContext + 510) = 0LL;
  *((_QWORD *)DeferredContext + 513) = 0LL;
  *((_DWORD *)DeferredContext + 1028) = 0;
  DeferredContext[4312] = 0;
  *((_DWORD *)DeferredContext + 1079) = 0;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE(DeferredContext + 4344, 0LL);
  *(_QWORD *)(v4 + 72) = 0LL;
  *(_BYTE *)(v4 + 80) = 0;
  *((_QWORD *)DeferredContext + 563) = 0LL;
  *((_DWORD *)DeferredContext + 1130) = 0;
  *((_DWORD *)DeferredContext + 1148) = -1;
  *((_QWORD *)DeferredContext + 568) = 0LL;
  *((_QWORD *)DeferredContext + 560) = 32LL;
  DeferredContext[4488] = 0;
  *((_DWORD *)DeferredContext + 1138) = -1;
  *((_QWORD *)DeferredContext + 570) = 0LL;
  *((_QWORD *)DeferredContext + 571) = 0LL;
  *((_QWORD *)DeferredContext + 572) = 0LL;
  *((_QWORD *)DeferredContext + 573) = 0LL;
  *((_DWORD *)DeferredContext + 1149) = 1;
  *((_QWORD *)DeferredContext + 575) = 0LL;
  *((_QWORD *)DeferredContext + 576) = 0LL;
  *((_DWORD *)DeferredContext + 1154) = 0;
  *((_DWORD *)DeferredContext + 1155) = 1;
  *((_QWORD *)DeferredContext + 580) = 0LL;
  DeferredContext[4696] = 0;
  KeInitializeEvent((PRKEVENT)DeferredContext + 2, v5, 1u);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 248), NotificationEvent, 1u);
  memset(DeferredContext + 280, 0, 0x698uLL);
  memset(DeferredContext + 1976, 0, 0x70uLL);
  memset(DeferredContext + 2088, 0, 0x250uLL);
  *(_OWORD *)(DeferredContext + 184) = 0LL;
  memset(DeferredContext + 2824, 0, 0x40uLL);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 2768), NotificationEvent, 0);
  KeInitializeTimer((PKTIMER)(DeferredContext + 3448));
  KeInitializeDpc((PRKDPC)(DeferredContext + 3512), (PKDEFERRED_ROUTINE)DxgkpComponentIdleListTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 508);
  KeInitializeTimer((PKTIMER)(DeferredContext + 4176));
  KeInitializeDpc((PRKDPC)(DeferredContext + 4240), (PKDEFERRED_ROUTINE)DxgkpFirstFrameTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 538);
  *((_QWORD *)DeferredContext + 519) = DeferredContext;
  *((_QWORD *)DeferredContext + 518) = DxgkpProcessPowerPStateWork;
  *((_QWORD *)DeferredContext + 516) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 520);
  *((_QWORD *)DeferredContext + 426) = DeferredContext + 3400;
  *((_QWORD *)DeferredContext + 425) = DeferredContext + 3400;
  *((_QWORD *)DeferredContext + 428) = DeferredContext + 3416;
  *((_QWORD *)DeferredContext + 427) = DeferredContext + 3416;
  *((_QWORD *)DeferredContext + 579) = DeferredContext + 4624;
  *((_QWORD *)DeferredContext + 578) = DeferredContext + 4624;
  *((_QWORD *)DeferredContext + 585) = DxgkDelayedEvictionThread;
  result = (DXGADAPTER *)DeferredContext;
  *((_QWORD *)DeferredContext + 586) = DeferredContext;
  *((_QWORD *)DeferredContext + 583) = 0LL;
  return result;
}
