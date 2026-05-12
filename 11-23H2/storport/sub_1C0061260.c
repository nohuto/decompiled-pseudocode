/*
 * XREFs of sub_1C0061260 @ 0x1C0061260
 * Callers:
 *     sub_1C000F3C0 @ 0x1C000F3C0 (sub_1C000F3C0.c)
 * Callees:
 *     sub_1C0037EE0 @ 0x1C0037EE0 (sub_1C0037EE0.c)
 *     sub_1C005CBE4 @ 0x1C005CBE4 (sub_1C005CBE4.c)
 *     sub_1C0063D60 @ 0x1C0063D60 (sub_1C0063D60.c)
 */

__int64 __fastcall sub_1C0061260(__int64 a1)
{
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1840), &LockHandle);
  *(_QWORD *)(a1 + 1816) = 0LL;
  *(_DWORD *)(a1 + 1824) = 0;
  ++*(_DWORD *)(a1 + 1832);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !*(_BYTE *)(a1 + 3280)
    || (result = sub_1C0063D60(*(_QWORD *)(a1 + 504)), !(_BYTE)result)
    || *(_DWORD *)(a1 + 1324) )
  {
    if ( (byte_1C0093A04 & 2) != 0 )
      sub_1C005CBE4(
        a1 + 169,
        a1 + 160,
        a1 + 2024,
        *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4656LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5000LL,
        *(_BYTE *)(a1 + 96),
        a1 + 2024,
        (const char *)(a1 + 160),
        (const char *)(a1 + 169),
        (const char *)(a1 + 186),
        *(_BYTE *)(a1 + 450) & 1,
        4);
    return sub_1C0037EE0(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
  }
  return result;
}
