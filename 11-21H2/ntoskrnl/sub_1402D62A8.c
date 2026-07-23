/*
 * XREFs of sub_1402D62A8 @ 0x1402D62A8
 * Callers:
 *     PoRegisterDeviceForIdleDetection @ 0x1402D3A70 (PoRegisterDeviceForIdleDetection.c)
 *     sub_1402D6220 @ 0x1402D6220 (sub_1402D6220.c)
 *     sub_1402D66F0 @ 0x1402D66F0 (sub_1402D66F0.c)
 *     sub_140368FC4 @ 0x140368FC4 (sub_140368FC4.c)
 *     sub_1403B65EC @ 0x1403B65EC (sub_1403B65EC.c)
 *     sub_1405CFAF4 @ 0x1405CFAF4 (sub_1405CFAF4.c)
 *     sub_1405CFC50 @ 0x1405CFC50 (sub_1405CFC50.c)
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 *     sub_1408081E0 @ 0x1408081E0 (sub_1408081E0.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 sub_1402D62A8()
{
  __int64 result; // rax
  unsigned __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v3; // r9
  bool v4; // zf

  result = (unsigned int)dword_140C23108;
  if ( (dword_140C23108 & dword_140C222B4) != 0 )
  {
    result = (__int64)KeGetCurrentThread();
    if ( qword_140C223A0 != result )
    {
      v1 = KeAcquireSpinLockRaiseToDpc(&qword_140C23060);
      if ( dword_140C23108 < 0 )
      {
        dword_140C23108 &= ~0x80000000;
        ExQueueWorkItem(&stru_140C23080, DelayedWorkQueue);
      }
      KeReleaseSpinLockFromDpcLevel(&qword_140C23060);
      result = (unsigned int)dword_140D06B08;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v1 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v3 = *((_QWORD *)CurrentPrcb + 4375);
            result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
            v4 = ((unsigned int)result & *(_DWORD *)(v3 + 20)) == 0;
            *(_DWORD *)(v3 + 20) &= result;
            if ( v4 )
              result = sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v1);
    }
  }
  return result;
}
