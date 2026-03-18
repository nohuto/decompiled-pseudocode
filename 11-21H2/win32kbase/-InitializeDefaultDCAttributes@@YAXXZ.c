/*
 * XREFs of ?InitializeDefaultDCAttributes@@YAXXZ @ 0x1C01697C4
 * Callers:
 *     InitializeGre @ 0x1C02E38D0 (InitializeGre.c)
 * Callees:
 *     <none>
 */

void InitializeDefaultDCAttributes(void)
{
  WPP_MAIN_CB.DeviceQueue.1 = 0LL;
  WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
  LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) = 0;
  dword_1C0295DA8 = 0;
  dword_1C0295DAC = 0;
  dword_1C0295DB4 = 0;
  dword_1C0295DB8 = 0;
  dword_1C0295DD0 = 0;
  dword_1C0295DD4 = 0;
  WPP_MAIN_CB.Reserved = (PVOID)0xFFFFFF00FFFFFFLL;
  dword_1C0295D00 = 0xFFFFFF;
  dword_1C0295D04 = 0xFFFFFF;
  dword_1C0295D40 = -1;
  dword_1C0295D44 = -1;
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = 16;
  dword_1C0295D10 = 1;
  dword_1C0295D14 = 16843277;
  dword_1C0295D20 = 2;
  dword_1C0295D24 = 1;
  dword_1C0295D28 = 1;
  dword_1C0295D30 = 0;
  qword_1C0295D50 = 0LL;
  dword_1C0295DA0 = 1;
  *(_OWORD *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = _xmm;
  *(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 0LL;
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)0x3D8000000000004BLL;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)1031798784;
  *(PVOID *)((char *)&WPP_MAIN_CB.Dpc.DeferredContext + 4) = 0LL;
  HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1) = 83;
  dword_1C0295DA4 = 1065353216;
  dword_1C0295DB0 = 1065353216;
  qword_1C0295DBC = 0LL;
  dword_1C0295DC4 = 99;
  dword_1C0295DC8 = 1098907648;
  dword_1C0295DCC = 1098907648;
  LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) = 1;
  dword_1C0295D7C = 1;
  dword_1C0295D80 = 1;
  dword_1C0295D8C = 1;
  dword_1C0295D90 = 1;
  dword_1C0295D94 = 6146;
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 1;
}
