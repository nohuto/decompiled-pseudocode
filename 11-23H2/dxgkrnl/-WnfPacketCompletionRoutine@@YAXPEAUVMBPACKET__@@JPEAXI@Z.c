/*
 * XREFs of ?WnfPacketCompletionRoutine@@YAXPEAUVMBPACKET__@@JPEAXI@Z @ 0x1C005DB50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C0040BC0 (McTemplateK0p_EtwWriteTransfer.c)
 */

void __fastcall WnfPacketCompletionRoutine(struct VMBPACKET__ *a1, __int64 a2, void *a3)
{
  __int64 v4; // r8

  _InterlockedDecrement((volatile signed __int32 *)(((__int64 (__fastcall *)(struct VMBPACKET__ *, __int64, void *))qword_1C0141FD0)(
                                                      a1,
                                                      a2,
                                                      a3)
                                                  + 76));
  ((void (__fastcall *)(struct VMBPACKET__ *))qword_1C0141FC0)(a1);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      McTemplateK0p_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, &EventVmBusCompletePacketAsync, v4, a1);
  }
}
