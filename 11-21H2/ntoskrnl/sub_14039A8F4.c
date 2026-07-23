/*
 * XREFs of sub_14039A8F4 @ 0x14039A8F4
 * Callers:
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14039A8F4(char a1, int a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v8; // r9
  bool v9; // zf
  LARGE_INTEGER v10; // [rsp+40h] [rbp+18h] BYREF

  v10.QuadPart = 0LL;
  v4 = KeQueryInterruptTimePrecise(&v10);
  v5 = KeAcquireSpinLockRaiseToDpc(&qword_140C09750);
  if ( byte_140C09758 != a1 )
  {
    byte_140C09758 = a1;
    if ( a1 )
    {
      dword_140C0975C = a2;
    }
    else
    {
      dword_140C09760 = a2;
      qword_140C09768 = v4;
    }
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C09750);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = *((_QWORD *)CurrentPrcb + 4375);
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v9 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
        *(_DWORD *)(v8 + 20) &= result;
        if ( v9 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
