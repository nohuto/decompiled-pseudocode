/*
 * XREFs of VidSchiSubmitPreemptionCommand @ 0x1C009A910
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0009B20 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C00130E0 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiResetEngine @ 0x1C003987C (VidSchiResetEngine.c)
 *     VidSchiCheckHwProgress @ 0x1C00978E0 (VidSchiCheckHwProgress.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00F3380 (VidSchiPreemptEngineNodes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C009A9EC (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C009AA58 (VidSchiAllocateDmaPacket.c)
 */

__int64 __fastcall VidSchiSubmitPreemptionCommand(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 DmaPacket; // r14
  __int64 v6; // rax
  void (__fastcall *v8)(_QWORD); // rax

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(v1 + 104);
  DmaPacket = VidSchiAllocateDmaPacket(a1);
  *(_DWORD *)DmaPacket = 912353622;
  *(_QWORD *)(DmaPacket + 48) = v1;
  v6 = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(DmaPacket + 92) = 0;
  *(_QWORD *)(DmaPacket + 80) = v6;
  *(_DWORD *)(DmaPacket + 72) = 7;
  *(_DWORD *)(DmaPacket + 88) = 3;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 724));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2892));
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 1580));
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 784));
  *(_BYTE *)(v3 + 54) = 1;
  if ( *(_DWORD *)(a1 + 11240) != -1 )
  {
    v8 = *(void (__fastcall **)(_QWORD))(v3 + 3056);
    if ( v8 )
      v8(*(_QWORD *)(v3 + 3120));
  }
  *(_BYTE *)(v3 + 54) = 0;
  *(_DWORD *)(DmaPacket + 92) |= 0x400u;
  return VidSchiSendToExecutionQueueWithWait(DmaPacket, 0LL);
}
