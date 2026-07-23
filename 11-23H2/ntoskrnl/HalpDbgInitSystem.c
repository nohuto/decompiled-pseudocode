/*
 * XREFs of HalpDbgInitSystem @ 0x140A8F140
 * Callers:
 *     <none>
 * Callees:
 *     KdGetDebugDevice @ 0x140396AB0 (KdGetDebugDevice.c)
 *     HalAcpiGetTable @ 0x140396AC0 (HalAcpiGetTable.c)
 *     HalpRegisterKdSupportFunctions @ 0x140B34F54 (HalpRegisterKdSupportFunctions.c)
 *     HalpCopyDebugDescriptor @ 0x140B5D750 (HalpCopyDebugDescriptor.c)
 */

__int64 __fastcall HalpDbgInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 1 )
  {
    KdDebugDevice = HalpCopyDebugDescriptor(*(_QWORD *)(*(_QWORD *)(a3 + 240) + 2800LL));
    HalpRegisterKdSupportFunctions();
    HalpDebugPortTable = HalAcpiGetTable(a3, 1346847300);
    *KdGetDebugDevice() = KdDebugDevice;
  }
  return 0LL;
}
