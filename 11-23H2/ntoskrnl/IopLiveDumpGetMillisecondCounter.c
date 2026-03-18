/*
 * XREFs of IopLiveDumpGetMillisecondCounter @ 0x140559D3C
 * Callers:
 *     IoCaptureLiveDump @ 0x14094B9E8 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14094C2C4 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14094C56C (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14094CBF4 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x14094D1A0 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x140A9A8B8 (IopLiveDumpCaptureMemoryPages.c)
 *     IopLiveDumpCollectPages @ 0x140A9AB04 (IopLiveDumpCollectPages.c)
 *     IopLiveDumpCorralProcessors @ 0x140A9AEB0 (IopLiveDumpCorralProcessors.c)
 *     IopLiveDumpEnterCorralledState @ 0x140A9B15C (IopLiveDumpEnterCorralledState.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140A9B19C (IopLiveDumpEstimateMemoryPages.c)
 *     IopLiveDumpGenerateIptSecondaryData @ 0x140A9B57C (IopLiveDumpGenerateIptSecondaryData.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x140A9B824 (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x140A9BA00 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x140A9BDA4 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140A9BF90 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 *     IopLiveDumpPopulateBitmapForDump @ 0x140A9C160 (IopLiveDumpPopulateBitmapForDump.c)
 *     IopLiveDumpRemoveSystemCacheFromDump @ 0x140A9C484 (IopLiveDumpRemoveSystemCacheFromDump.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3270 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall IopLiveDumpGetMillisecondCounter(char a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(0LL) / PerformanceFrequency.QuadPart;
  result = 0LL;
  if ( !a1 )
    result = v2 + qword_140D18420 - qword_140D18418;
  qword_140D18420 = result;
  qword_140D18418 = v2;
  return result;
}
