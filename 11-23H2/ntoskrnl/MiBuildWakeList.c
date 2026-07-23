/*
 * XREFs of MiBuildWakeList @ 0x140289774
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x1402197EC (MiPrepareSegmentForDeletion.c)
 *     MiReferenceActiveControlArea @ 0x140219910 (MiReferenceActiveControlArea.c)
 *     MiComputeDataFlushRange @ 0x140289110 (MiComputeDataFlushRange.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140293300 (MiUnlockControlAreaSectionExtend.c)
 *     MiCheckControlArea @ 0x14029FE50 (MiCheckControlArea.c)
 *     MiDecrementModifiedWriteCount @ 0x1402F4AB4 (MiDecrementModifiedWriteCount.c)
 *     MiUnlockFlushMdl @ 0x14033EFA0 (MiUnlockFlushMdl.c)
 *     MiPreventControlAreaDeletion @ 0x1403A6788 (MiPreventControlAreaDeletion.c)
 *     MiDecrementLargeSubsections @ 0x14063CC44 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x14063DEA8 (MiIncrementLargeSubsections.c)
 *     MiReferencePfBackedSection @ 0x14066A040 (MiReferencePfBackedSection.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiBuildWakeList(__int64 a1, int a2)
{
  _QWORD *v2; // r10
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v6; // r8

  v2 = (_QWORD *)(a1 + 80);
  v3 = 0LL;
  v4 = *(__int64 **)(a1 + 80);
  if ( v4 )
  {
    do
    {
      v6 = (__int64 *)*v4;
      if ( (a2 & (_DWORD)v4[1]) != 0 )
      {
        if ( (a2 & 4) != 0 )
        {
          *((_DWORD *)v4 + 3) = 1;
        }
        else
        {
          *v4 = (__int64)v3;
          v3 = v4;
          *v2 = v6;
        }
      }
      else
      {
        v2 = v4;
      }
      v4 = v6;
    }
    while ( v6 );
  }
  return v3;
}
