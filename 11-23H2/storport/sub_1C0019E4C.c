/*
 * XREFs of sub_1C0019E4C @ 0x1C0019E4C
 * Callers:
 *     sub_1C00042F0 @ 0x1C00042F0 (sub_1C00042F0.c)
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 *     sub_1C000F3C0 @ 0x1C000F3C0 (sub_1C000F3C0.c)
 *     sub_1C0012FC0 @ 0x1C0012FC0 (sub_1C0012FC0.c)
 *     sub_1C0019CFC @ 0x1C0019CFC (sub_1C0019CFC.c)
 *     sub_1C0019D54 @ 0x1C0019D54 (sub_1C0019D54.c)
 *     sub_1C00201F4 @ 0x1C00201F4 (sub_1C00201F4.c)
 *     sub_1C0037EE0 @ 0x1C0037EE0 (sub_1C0037EE0.c)
 *     sub_1C003DB10 @ 0x1C003DB10 (sub_1C003DB10.c)
 *     sub_1C0040D18 @ 0x1C0040D18 (sub_1C0040D18.c)
 *     sub_1C0040FA8 @ 0x1C0040FA8 (sub_1C0040FA8.c)
 *     sub_1C004123C @ 0x1C004123C (sub_1C004123C.c)
 *     sub_1C0045080 @ 0x1C0045080 (sub_1C0045080.c)
 *     StorPortBusy @ 0x1C0045E10 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C0045F40 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C00460E0 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C0046270 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C0046980 (StorPortPause.c)
 *     StorPortPauseDevice @ 0x1C0046AE0 (StorPortPauseDevice.c)
 *     StorPortReady @ 0x1C0046E60 (StorPortReady.c)
 *     StorPortResume @ 0x1C0047270 (StorPortResume.c)
 *     StorPortResumeDevice @ 0x1C0047380 (StorPortResumeDevice.c)
 *     sub_1C0049C54 @ 0x1C0049C54 (sub_1C0049C54.c)
 *     sub_1C0058E18 @ 0x1C0058E18 (sub_1C0058E18.c)
 *     sub_1C0060EDC @ 0x1C0060EDC (sub_1C0060EDC.c)
 *     sub_1C0061148 @ 0x1C0061148 (sub_1C0061148.c)
 *     sub_1C0063710 @ 0x1C0063710 (sub_1C0063710.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0019E4C(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( a1 && *(_DWORD *)(a1 + 4868) && *(_QWORD *)(a1 + 4872) )
  {
    v7 = a7;
    v8 = *(_QWORD *)(a1 + 4872)
       + 48LL * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 4864)) % *(_DWORD *)(a1 + 4868));
    *(_DWORD *)v8 = a2;
    if ( !a7 )
      v7 = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v8 + 40) = v7;
    *(_QWORD *)(v8 + 24) = a5;
    *(_QWORD *)(v8 + 32) = a6;
    *(_QWORD *)(v8 + 8) = a3;
    *(_QWORD *)(v8 + 16) = a4;
  }
}
