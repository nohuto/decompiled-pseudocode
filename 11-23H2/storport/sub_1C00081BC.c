/*
 * XREFs of sub_1C00081BC @ 0x1C00081BC
 * Callers:
 *     sub_1C0007D58 @ 0x1C0007D58 (sub_1C0007D58.c)
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 *     sub_1C000E38C @ 0x1C000E38C (sub_1C000E38C.c)
 *     StorPortSetDeviceQueueDepth @ 0x1C000EA10 (StorPortSetDeviceQueueDepth.c)
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 *     sub_1C0010F40 @ 0x1C0010F40 (sub_1C0010F40.c)
 *     sub_1C00142B0 @ 0x1C00142B0 (sub_1C00142B0.c)
 *     sub_1C00144FC @ 0x1C00144FC (sub_1C00144FC.c)
 *     sub_1C0016EE0 @ 0x1C0016EE0 (sub_1C0016EE0.c)
 *     sub_1C00188AC @ 0x1C00188AC (sub_1C00188AC.c)
 *     StorPortGetLogicalUnit @ 0x1C0025FF0 (StorPortGetLogicalUnit.c)
 *     sub_1C003562C @ 0x1C003562C (sub_1C003562C.c)
 *     sub_1C00356B8 @ 0x1C00356B8 (sub_1C00356B8.c)
 *     sub_1C0036F7C @ 0x1C0036F7C (sub_1C0036F7C.c)
 *     sub_1C00382BC @ 0x1C00382BC (sub_1C00382BC.c)
 *     sub_1C003A38C @ 0x1C003A38C (sub_1C003A38C.c)
 *     sub_1C003AC60 @ 0x1C003AC60 (sub_1C003AC60.c)
 *     sub_1C00456DC @ 0x1C00456DC (sub_1C00456DC.c)
 *     StorPortCompleteRequest @ 0x1C0045F40 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C00460E0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0046270 (StorPortDeviceReady.c)
 *     StorPortPauseDevice @ 0x1C0046AE0 (StorPortPauseDevice.c)
 *     StorPortResumeDevice @ 0x1C0047380 (StorPortResumeDevice.c)
 *     sub_1C0047794 @ 0x1C0047794 (sub_1C0047794.c)
 *     sub_1C0049B10 @ 0x1C0049B10 (sub_1C0049B10.c)
 *     sub_1C0049C54 @ 0x1C0049C54 (sub_1C0049C54.c)
 *     sub_1C004A6B0 @ 0x1C004A6B0 (sub_1C004A6B0.c)
 *     sub_1C0057CE4 @ 0x1C0057CE4 (sub_1C0057CE4.c)
 *     sub_1C00623A0 @ 0x1C00623A0 (sub_1C00623A0.c)
 *     sub_1C00692DC @ 0x1C00692DC (sub_1C00692DC.c)
 *     sub_1C00A2D68 @ 0x1C00A2D68 (sub_1C00A2D68.c)
 * Callees:
 *     sub_1C0008240 @ 0x1C0008240 (sub_1C0008240.c)
 *     sub_1C0008318 @ 0x1C0008318 (sub_1C0008318.c)
 *     sub_1C000889C @ 0x1C000889C (sub_1C000889C.c)
 *     sub_1C0008914 @ 0x1C0008914 (sub_1C0008914.c)
 */

__int64 __fastcall sub_1C00081BC(__int64 a1, unsigned int a2)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // rbx
  char v8; // di
  __int64 v9; // rax
  __int64 v10; // rdx

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    return sub_1C0008240(a1, a2);
  if ( (unsigned int)CurrentIrql < *(_DWORD *)(a1 + 736) )
  {
    v8 = sub_1C000889C(a1);
    v9 = sub_1C0008318(a1, a2);
    LOBYTE(v10) = v8;
    v6 = v9;
    sub_1C0008914(a1, v10);
    return v6;
  }
  return sub_1C0008318(a1, a2);
}
