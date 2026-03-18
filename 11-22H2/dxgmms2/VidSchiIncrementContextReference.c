/*
 * XREFs of VidSchiIncrementContextReference @ 0x1C0004A20
 * Callers:
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C00016D0 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiCreateContextInternal @ 0x1C0003E8C (VidSchiCreateContextInternal.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C0014770 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiNeedToForcePreemptNode @ 0x1C0017CD4 (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiReportHwHang @ 0x1C0047458 (VidSchiReportHwHang.c)
 *     VidSchiRun_PriorityTable @ 0x1C00B7870 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiIncrementContextReference(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 72));
  if ( (_DWORD)result == 1 )
  {
    if ( !*(_BYTE *)(a1 + 908) )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 3840LL, a1, 0LL, 0LL);
      __debugbreak();
      JUMPOUT(0x1C001F378LL);
    }
    result = *(_QWORD *)(a1 + 104);
    _InterlockedIncrement64((volatile signed __int64 *)(result + 24));
  }
  return result;
}
