/*
 * XREFs of RaidAdapterSetBootLunIoctl @ 0x1C0037B34
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B7BC (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0002F28 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidCompleteRequestEx @ 0x1C0008480 (RaidCompleteRequestEx.c)
 *     RaBuildSetBootLunBufferForMiniport @ 0x1C004D748 (RaBuildSetBootLunBufferForMiniport.c)
 */

__int64 __fastcall RaidAdapterSetBootLunIoctl(__int64 a1, IRP *a2)
{
  PVOID v2; // rbx
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned int v8; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0LL;
  v8 = 0;
  a2->IoStatus.Information = 0LL;
  P = 0LL;
  if ( *(_QWORD *)(a1 + 568) && *(_QWORD *)(a1 + 576) )
  {
    if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options < 0x18 )
    {
      v5 = -1073741820;
      return RaidCompleteRequestEx(a2, 0, v5);
    }
    v6 = RaBuildSetBootLunBufferForMiniport(a1, a2, &P, &v8);
    v2 = P;
    v5 = v6;
    if ( !v6 )
    {
      if ( P )
      {
        v5 = RaidAdapterSendSrbIoControlSynchronously(a1, a2, (__int64)P, v8, 0LL, 0, 128);
        goto LABEL_11;
      }
      v5 = -1073741801;
    }
    a2->IoStatus.Information = 0LL;
  }
  else
  {
    v5 = -1073741823;
  }
LABEL_11:
  if ( v2 )
    ExFreePoolWithTag(v2, 0x72536152u);
  return RaidCompleteRequestEx(a2, 0, v5);
}
