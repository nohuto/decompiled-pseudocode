/*
 * XREFs of RaidLunQueueWaitForQuiescence @ 0x1C00405F4
 * Callers:
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C0062040 (RaidUnitQuiesceDeviceWorkRoutine.c)
 * Callees:
 *     RiDisableDeviceQueueFastPath @ 0x1C0019640 (RiDisableDeviceQueueFastPath.c)
 *     WPP_SF_d @ 0x1C003E84C (WPP_SF_d.c)
 */

__int64 __fastcall RaidLunQueueWaitForQuiescence(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // ebp
  KIRQL v5; // bl
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
  RiDisableDeviceQueueFastPath((struct _EX_RUNDOWN_REF *)a1);
  if ( (((__int64)*(unsigned int *)(a1 + 88) >> 1) & 0x7FFFFFFF) != 0 )
  {
    if ( (_DWORD)v2 )
    {
      Timeout.QuadPart = -10000000 * v2;
      v4 = KeWaitForSingleObject((PVOID)(a1 + 48), Executive, 0, 0, &Timeout);
      if ( v4 == 258
        && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
      {
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xFu,
          (__int64)&WPP_4696d8e4a6e63693584f196800ba175c_Traceguids,
          v2);
      }
    }
    else
    {
      v4 = KeWaitForSingleObject((PVOID)(a1 + 48), Executive, 0, 0, 0LL);
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 40), 0xFFFFFFFF) == 1 && v4 != 258 )
  {
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    KeClearEvent((PRKEVENT)(a1 + 48));
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v5);
  }
  return v4;
}
