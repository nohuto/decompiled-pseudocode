/*
 * XREFs of sub_1C0040BC4 @ 0x1C0040BC4
 * Callers:
 *     sub_1C0062760 @ 0x1C0062760 (sub_1C0062760.c)
 * Callees:
 *     sub_1C001A2F4 @ 0x1C001A2F4 (sub_1C001A2F4.c)
 *     sub_1C003EE1C @ 0x1C003EE1C (sub_1C003EE1C.c)
 */

__int64 __fastcall sub_1C0040BC4(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v4; // ebp
  KIRQL v5; // bl
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
  sub_1C001A2F4((struct _EX_RUNDOWN_REF *)a1);
  if ( (((__int64)*(unsigned int *)(a1 + 88) >> 1) & 0x7FFFFFFF) != 0 )
  {
    if ( (_DWORD)v2 )
    {
      Timeout.QuadPart = -10000000 * v2;
      v4 = KeWaitForSingleObject((PVOID)(a1 + 48), Executive, 0, 0, &Timeout);
      if ( v4 == 258
        && off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
        && (HIDWORD(off_1C0093070->Timer) & 4) != 0
        && BYTE1(off_1C0093070->Timer) >= 3u )
      {
        sub_1C003EE1C((__int64)off_1C0093070->AttachedDevice, 0xFu, (__int64)&unk_1C00898A8, v2);
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
