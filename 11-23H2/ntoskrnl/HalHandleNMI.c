/*
 * XREFs of HalHandleNMI @ 0x140506820
 * Callers:
 *     KiProcessNMI @ 0x14020EA60 (KiProcessNMI.c)
 * Callees:
 *     HalpCheckAndReportGhes @ 0x14033575C (HalpCheckAndReportGhes.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     WheaReportHwError @ 0x140610B80 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x1406113E8 (WheapGetErrorSource.c)
 */

char HalHandleNMI()
{
  __int64 *v0; // rdi
  char v1; // bl
  char result; // al
  unsigned __int8 v3; // al
  char v4; // bl
  __int64 ErrorSource; // rax

  _InterlockedAdd(&WheapCriticalStateRefCount, 1u);
  dword_140C6A928 = 1;
  HalpProcessorInNmiHandler = KeGetPcr()->Prcb.Number;
  if ( !HalpGenericNmiInitDone )
    goto LABEL_7;
  v0 = (__int64 *)HalpGenericNmiErrorSourceListHead;
  v1 = 0;
  if ( (__int64 *)HalpGenericNmiErrorSourceListHead == &HalpGenericNmiErrorSourceListHead )
    goto LABEL_7;
  do
  {
    result = HalpCheckAndReportGhes((__int64)v0);
    v0 = (__int64 *)*v0;
    if ( result )
      v1 = 1;
  }
  while ( v0 != &HalpGenericNmiErrorSourceListHead );
  if ( v1 != 1 )
  {
LABEL_7:
    v3 = __inbyte(0x61u);
    v4 = v3;
    if ( dword_140C6A924 != 1 )
    {
      HalpDoingCrashDump = 1;
      HalpBugcheckInProgress = 1;
      KeBugCheckEx(0x80u, 0x4F4454uLL, v3, 0LL, 0LL);
    }
    memset(&dword_140C6A930, 0, 0x5CuLL);
    dword_140C6A934 = 3;
    dword_140C6A940 = 3;
    dword_140C6A94C = 3;
    dword_140C6A930 = 1095059543;
    dword_140C6A988 = ((unsigned int)dword_140C6A93C >> 2) & 1;
    dword_140C6A938 = 92;
    dword_140C6A944 = 1;
    dword_140C6A948 = HalpNmiInfo;
    xmmword_140C6A950 = (__int128)NMI_NOTIFY_TYPE_GUID;
    dword_140C6A968 = 4;
    dword_140C6A970 = 80;
    dword_140C6A974 = 12;
    byte_140C6A980 = v4;
    ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, (unsigned int)HalpNmiInfo);
    PshedRetrieveErrorInfo(
      &dword_140C6A930,
      (ErrorSource + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64));
    result = WheaReportHwError(&dword_140C6A930);
  }
  _InterlockedDecrement(&WheapCriticalStateRefCount);
  HalpProcessorInNmiHandler = 2048;
  return result;
}
