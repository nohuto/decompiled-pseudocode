/*
 * XREFs of UpdateRawMouseMode @ 0x1C005DFA4
 * Callers:
 *     LockCaptureWindow @ 0x1C0011A2C (LockCaptureWindow.c)
 *     TransferWakeBit @ 0x1C005B0A8 (TransferWakeBit.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C005C644 (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     SetNewForegroundQueue @ 0x1C005DEB0 (SetNewForegroundQueue.c)
 *     ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C009EE00 (-AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadHidObjects @ 0x1C009EFD0 (DestroyThreadHidObjects.c)
 *     UnlockCaptureWindow @ 0x1C00A6420 (UnlockCaptureWindow.c)
 *     ?SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x1C01398C0 (-SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z.c)
 * Callees:
 *     PtiMouseFromQ @ 0x1C005E080 (PtiMouseFromQ.c)
 *     HasHidTable @ 0x1C01184A0 (HasHidTable.c)
 */

__int64 __fastcall UpdateRawMouseMode(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rax

  result = gpqForeground;
  if ( a1 == gpqForeground )
  {
    v3 = ((__int64 (*)(void))PtiMouseFromQ)();
    if ( !(unsigned int)HasHidTable(v3)
      || (v6 = PtiMouseFromQ(a1),
          v5 = 1,
          v4 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v6 + 424) + 848LL) + 100LL),
          (v4 & 1) == 0) )
    {
      v5 = 0;
    }
    result = SGDGetUserSessionState(v4);
    *(_DWORD *)(result + 15956) = v5;
  }
  return result;
}
