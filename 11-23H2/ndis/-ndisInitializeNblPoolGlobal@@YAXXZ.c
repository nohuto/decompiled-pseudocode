/*
 * XREFs of ?ndisInitializeNblPoolGlobal@@YAXXZ @ 0x1C016393C
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0120F0C (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 */

void ndisInitializeNblPoolGlobal(void)
{
  unsigned __int8 (*v0)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  struct KnobDescriptor v1; // [rsp+30h] [rbp-38h] BYREF

  KeInitializeSpinLock(&qword_1C00F5E50);
  v1.DefaultValue = 0LL;
  qword_1C00F5EA8 = (__int64)&qword_1C00F5EA0;
  qword_1C00F5EA0 = (__int64)&qword_1C00F5EA0;
  v1.Flags = AllowDynamicUpdate|BooleanDatatype;
  v1.Name = L"DisableNblUseAfterFreeVerifier";
  v1.Value = &ndisDisableNblUseAfterFreeVerifier;
  *(_OWORD *)&v1.MinimumValue = 0LL;
  ndisRegisterKnobs(&v1, 1LL, v0, 0LL);
}
