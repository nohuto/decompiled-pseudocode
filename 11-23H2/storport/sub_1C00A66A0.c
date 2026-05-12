/*
 * XREFs of sub_1C00A66A0 @ 0x1C00A66A0
 * Callers:
 *     sub_1C0035198 @ 0x1C0035198 (sub_1C0035198.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 */

__int64 __fastcall sub_1C00A66A0(
        unsigned __int64 a1,
        ULONG a2,
        KIRQL a3,
        unsigned __int8 a4,
        int a5,
        BOOLEAN a6,
        __int64 a7)
{
  struct _DEVICE_OBJECT *v11; // rax
  NTSTATUS v12; // ecx
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Dst; // [rsp+20h] [rbp-50h] BYREF

  memset_0(&Dst, 0, sizeof(Dst));
  v11 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  Dst.FullySpecified.InterruptMode = LevelSensitive;
  Dst.FullySpecified.PhysicalDeviceObject = v11;
  Dst.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)sub_1C0025C60;
  Dst.FullySpecified.ProcessorEnableMask = *(_QWORD *)a7;
  Dst.FullySpecified.Group = *(_WORD *)(a7 + 8);
  Dst.FullySpecified.ShareVector = a6;
  Dst.Version = 4;
  Dst.FullySpecified.InterruptObject = (PKINTERRUPT *)(a1 + 728);
  *(_OWORD *)&Dst.MessageBased.ServiceContext = a1;
  Dst.FullySpecified.Vector = a2;
  Dst.FullySpecified.Irql = a3;
  *(_WORD *)&Dst.MessageBased.SynchronizeIrql = a4;
  v12 = IoConnectInterruptEx(&Dst);
  if ( v12 >= 0 )
    *(_DWORD *)(a1 + 740) = Dst.Version;
  else
    *(_QWORD *)(a1 + 728) = 0LL;
  return (unsigned int)v12;
}
