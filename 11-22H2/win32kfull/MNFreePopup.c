/*
 * XREFs of MNFreePopup @ 0x1C01FF474
 * Callers:
 *     MNFlushDestroyedPopups @ 0x1C01FF380 (MNFlushDestroyedPopups.c)
 *     xxxMNEndMenuState @ 0x1C01FF9F0 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C020009C (xxxMNStartMenuState.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0215BAC (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0062940 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C013A398 (safe_cast_fnid_to_PMENUWND.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     UnlockPopupMenu @ 0x1C0216A48 (UnlockPopupMenu.c)
 */

_QWORD *__fastcall MNFreePopup(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi

  v2 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)*a1 + 16LL));
  v3 = v2;
  if ( v2 && *(void *const *)*a1 != gpopupMenu )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    if ( *(_QWORD *)(v2 + 16) && *(_QWORD *)(v2 + 16) != *(_QWORD *)*a1 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 248);
    *(_QWORD *)(v3 + 16) = *(_QWORD *)*a1;
  }
  HMAssignmentUnlock(*(_QWORD *)*a1 + 24LL);
  HMAssignmentUnlock(*(_QWORD *)*a1 + 32LL);
  UnlockPopupMenu(a1, *(_QWORD *)*a1 + 40LL);
  UnlockPopupMenu(a1, *(_QWORD *)*a1 + 48LL);
  HMAssignmentUnlock(*(_QWORD *)*a1 + 8LL);
  HMAssignmentUnlock(*(_QWORD *)*a1 + 56LL);
  HMAssignmentUnlock(*(_QWORD *)*a1 + 16LL);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a1);
}
