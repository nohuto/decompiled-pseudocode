/*
 * XREFs of HalpBlkInitSystem @ 0x140B48F28
 * Callers:
 *     HalpProcInitSystem @ 0x140A8A680 (HalpProcInitSystem.c)
 * Callees:
 *     KeSetTimer2 @ 0x140250220 (KeSetTimer2.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140B91ECC (HalpBlkInitializeVirtualAddressSpace.c)
 *     HalpBlkWdInitialize @ 0x140B92E18 (HalpBlkWdInitialize.c)
 */

void __fastcall HalpBlkInitSystem(int a1)
{
  int v1; // eax
  _QWORD v2[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 == 12 )
  {
    qword_140C01E18 = (__int64)HalpBlkPoGetPowerInterface;
    qword_140C01E20 = (__int64)HalpBlkPoGetPackageId;
    qword_140C01E28 = (__int64)HalpBlkPoGetProcessorCount;
    qword_140C01E30 = (__int64)HalpBlkPoGetApicIdByIndex;
    qword_140C01E38 = (__int64)HalpBlkPoRegisterIdleState;
    if ( HalpInterruptBlockedProcessors && HalpInterruptStartHyperthreadSiblings )
    {
      v1 = HalpBlkInitializeVirtualAddressSpace();
      if ( v1 < 0 )
        KeBugCheckEx(0x1DAu, 1uLL, v1, 0LL, 0LL);
      HalpBlkWdInitialize();
    }
  }
  else if ( HalpInterruptBlockedProcessors && a1 == 21 )
  {
    if ( HalpInterruptStartHyperthreadSiblings )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      KeSetTimer2((__int64)&HalpBlkWdTimer, -30000000LL, 30000000LL, (__int64)v2);
    }
  }
}
