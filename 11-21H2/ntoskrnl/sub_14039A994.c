/*
 * XREFs of sub_14039A994 @ 0x14039A994
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_14039A994()
{
  __int64 result; // rax
  void *v1; // rbx
  unsigned int v2; // esi
  __int64 v3; // rdi
  unsigned int *v4; // r14
  unsigned __int64 v5; // rdi
  signed __int32 v6; // eax
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v8; // r8
  bool v9; // zf

  result = ExAllocatePool2(64LL, 20328LL, 1734960208LL);
  v1 = (void *)result;
  if ( result )
  {
    *(_QWORD *)(result + 20280) = 0LL;
    v2 = 0;
    *(_QWORD *)(result + 20296) = sub_140806090;
    *(_QWORD *)(result + 20304) = result;
    v3 = result + 428;
    do
    {
      v4 = (unsigned int *)(v3 - 148);
      memset((void *)(v3 - 148), 0, 0x320uLL);
      *(_QWORD *)(v3 + 276) = -1LL;
      *(_DWORD *)(v3 - 4) = 2097153;
      if ( v2 <= 4 )
      {
        *v4 = v2;
        do
        {
          v6 = _InterlockedIncrement(&dword_140C1F498);
          *(_DWORD *)(v3 + 268) = v6;
        }
        while ( v6 == -1 );
      }
      else
      {
        *v4 = 7;
      }
      ++v2;
      v3 += 800LL;
    }
    while ( v2 < 0x19 );
    v5 = KeAcquireSpinLockRaiseToDpc(&qword_140C1F4A0);
    qword_140C1F490 = v1;
    KeReleaseSpinLockFromDpcLevel(&qword_140C1F4A0);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v8 = *((_QWORD *)CurrentPrcb + 4375);
          v9 = ((unsigned int)result & *(_DWORD *)(v8 + 20)) == 0;
          *(_DWORD *)(v8 + 20) &= result;
          if ( v9 )
            result = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
  }
  return result;
}
