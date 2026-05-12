/*
 * XREFs of sub_1C004BD5C @ 0x1C004BD5C
 * Callers:
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 *     sub_1C000F3C0 @ 0x1C000F3C0 (sub_1C000F3C0.c)
 * Callees:
 *     sub_1C0012FC0 @ 0x1C0012FC0 (sub_1C0012FC0.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C0045080 @ 0x1C0045080 (sub_1C0045080.c)
 */

__int64 __fastcall sub_1C004BD5C(__int64 a1)
{
  unsigned int v2; // esi
  __int32 v3; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = -1073741823;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  v3 = 1;
  if ( *(_DWORD *)(a1 + 492) == 1 || *(char *)(a1 + 448) < 0 || *(_BYTE *)(a1 + 500) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    sub_1C0045080(a1);
    v2 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, (POWER_STATE)1, 0LL, 0LL, 0LL);
    if ( v2 == 259 )
    {
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 4) != 0
        && BYTE1(off_1C0093070->Timer) >= 4u )
      {
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x40u, (__int64)&unk_1C008A080);
      }
      *(_BYTE *)(a1 + 448) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v3 = 0;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 4) != 0
        && BYTE1(off_1C0093070->Timer) >= 2u )
      {
        sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x3Fu, (__int64)&unk_1C008A080);
      }
      sub_1C0012FC0(a1);
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 1808), v3);
  }
  return v2;
}
