/*
 * XREFs of RIMUpdatePrimaryDevice @ 0x1C0195A10
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0187C10 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMRemoveFromActiveDevices @ 0x1C0194D44 (RIMRemoveFromActiveDevices.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01ADFB4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01AE2AC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     RIMGetPointerInputType @ 0x1C019369C (RIMGetPointerInputType.c)
 *     ApiSetIsPointerInputTypeRedirected @ 0x1C020E2CC (ApiSetIsPointerInputTypeRedirected.c)
 */

__int64 __fastcall RIMUpdatePrimaryDevice(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // eax

  result = 0LL;
  v4 = *(_QWORD *)(a1 + 504);
  if ( v4 )
    *(_DWORD *)(v4 + 360) &= ~1u;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 360) |= 1u;
    *(_QWORD *)(a1 + 504) = a2;
    v5 = RIMGetPointerInputType(a2);
    result = ApiSetIsPointerInputTypeRedirected(v5);
  }
  else
  {
    *(_QWORD *)(a1 + 504) = 0LL;
  }
  *(_DWORD *)(a1 + 512) = result;
  return result;
}
