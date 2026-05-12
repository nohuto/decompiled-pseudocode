/*
 * XREFs of sub_1C004BC0C @ 0x1C004BC0C
 * Callers:
 *     sub_1C000F3C0 @ 0x1C000F3C0 (sub_1C000F3C0.c)
 * Callees:
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 */

__int64 __fastcall sub_1C004BC0C(__int64 a1)
{
  unsigned int v2; // ebp
  __int32 v3; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = -1073741823;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  if ( *(_DWORD *)(a1 + 492) == 4 || (v3 = 1, (*(_BYTE *)(a1 + 449) & 1) != 0) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v2 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, (POWER_STATE)4, 0LL, 0LL, 0LL);
    if ( v2 == 259 )
    {
      *(_BYTE *)(a1 + 449) |= 1u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 4) != 0
        && BYTE1(off_1C0093070->Timer) >= 4u )
      {
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x42u, (__int64)&unk_1C008A080);
      }
      v3 = 0;
    }
    else
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 4) != 0
        && BYTE1(off_1C0093070->Timer) >= 2u )
      {
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x41u, (__int64)&unk_1C008A080);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 1812), v3);
  }
  return v2;
}
