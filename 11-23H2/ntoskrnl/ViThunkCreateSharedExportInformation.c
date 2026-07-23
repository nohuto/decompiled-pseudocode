/*
 * XREFs of ViThunkCreateSharedExportInformation @ 0x140ABD000
 * Callers:
 *     VfThunkAddTargetNotify @ 0x140ABCF6C (VfThunkAddTargetNotify.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x1402937D0 (RtlNumberOfClearBits.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     ViThunkFreeSharedThunksArray @ 0x140ABCF40 (ViThunkFreeSharedThunksArray.c)
 *     ViThunkSnapSharedExports @ 0x140ABD0D4 (ViThunkSnapSharedExports.c)
 */

__int64 __fastcall ViThunkCreateSharedExportInformation(
        PVOID BaseOfImage,
        __int64 a2,
        __int64 a3,
        _RTL_BITMAP *a4,
        void **a5)
{
  unsigned int v6; // ebx
  ULONG v7; // eax
  __int64 v8; // rbp
  void *Pool2; // rax

  v6 = 1;
  v7 = RtlNumberOfClearBits(a4);
  v8 = v7;
  if ( v7 )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 24LL * v7, 0x54496656u);
    *a5 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 24 * v8);
      if ( !(unsigned int)ViThunkSnapSharedExports(BaseOfImage, v8, (__int64)*a5) )
        ViThunkFreeSharedThunksArray(a5);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *a5 = 0LL;
  }
  return v6;
}
