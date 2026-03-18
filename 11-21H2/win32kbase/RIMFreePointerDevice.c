/*
 * XREFs of RIMFreePointerDevice @ 0x1C0191E14
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     RIMReleasePointerDeviceInfo @ 0x1C0194C38 (RIMReleasePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0196000 (RIMVirtCreatePointerDeviceInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C019B10C (RIMIDECreateHIDDesc.c)
 *     UserDeactivateMITInputProcessing @ 0x1C01EBB48 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RIMRemoveFromActiveDevices @ 0x1C0194D44 (RIMRemoveFromActiveDevices.c)
 *     RIMCmFreePointerDeviceContacts @ 0x1C01B6804 (RIMCmFreePointerDeviceContacts.c)
 *     ApiSetFreePointerDeviceCalData @ 0x1C020CD80 (ApiSetFreePointerDeviceCalData.c)
 *     ApiSetFreePointerDeviceCalibrationInfo @ 0x1C020CED0 (ApiSetFreePointerDeviceCalibrationInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFreePointerDevice(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  char *v7; // rdx
  char *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  char *v12; // rdx
  char *v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  char *v16; // rdx
  _QWORD *v17; // rax
  char v18; // [rsp+30h] [rbp+8h] BYREF

  RIMRemoveFromActiveDevices(a1, a2, 1LL, &v18);
  v5 = *(_QWORD **)(a1 + 432);
  while ( v5 != (_QWORD *)(a1 + 432) )
  {
    v6 = v5 - 114;
    v4 = v5;
    v5 = (_QWORD *)*v5;
    if ( v6 == (_QWORD *)a2 )
    {
      if ( (_QWORD *)v5[1] != v4 || (v17 = (_QWORD *)v4[1], (_QWORD *)*v17 != v4) )
        __fastfail(3u);
      *v17 = v5;
      v5[1] = v17;
      v4[1] = v4;
      *v4 = v4;
      break;
    }
  }
  v7 = *(char **)(a2 + 1024);
  if ( v7 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v7);
    *(_QWORD *)(a2 + 1024) = 0LL;
  }
  v8 = *(char **)(a2 + 928);
  if ( v8 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v8);
    *(_QWORD *)(a2 + 928) = 0LL;
  }
  v9 = *(_QWORD *)(a2 + 392);
  if ( v9 )
  {
    ApiSetFreePointerDeviceCalData(v9, v8, v4);
    ApiSetFreePointerDeviceCalibrationInfo(*(_QWORD *)(a2 + 392));
    *(_QWORD *)(a2 + 392) = 0LL;
  }
  RIMCmFreePointerDeviceContacts(a2, v8, v4);
  v11 = *(_QWORD *)(a2 + 760);
  if ( v11 )
  {
    if ( *(_QWORD *)(v11 + 24) )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        *(char **)(v11 + 24));
      *(_QWORD *)(*(_QWORD *)(a2 + 760) + 24LL) = 0LL;
      v11 = *(_QWORD *)(a2 + 760);
    }
    if ( *(_QWORD *)(v11 + 16) )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        *(char **)(v11 + 16));
      *(_QWORD *)(*(_QWORD *)(a2 + 760) + 16LL) = 0LL;
      v11 = *(_QWORD *)(a2 + 760);
    }
    if ( v11 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)v11);
    *(_QWORD *)(a2 + 760) = 0LL;
  }
  v12 = *(char **)(a2 + 376);
  if ( v12 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v12);
    *(_QWORD *)(a2 + 376) = 0LL;
  }
  v13 = *(char **)(a2 + 816);
  if ( v13 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v13);
    *(_QWORD *)(a2 + 816) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 360) & 0x400) != 0 )
  {
    v14 = *(_DWORD *)(a1 + 756);
    v15 = *(unsigned int *)(a2 + 768);
    if ( v14 < (unsigned int)v15 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v13, v10);
      v14 = *(_DWORD *)(a1 + 756);
      LODWORD(v15) = *(_DWORD *)(a2 + 768);
    }
    *(_DWORD *)(a1 + 756) = v14 - v15;
  }
  if ( *(_QWORD *)(a2 + 912) != a2 + 912 )
    __int2c();
  v16 = *(char **)(a2 + 1064);
  if ( v16 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      v16);
    *(_QWORD *)(a2 + 1064) = 0LL;
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)a2);
}
