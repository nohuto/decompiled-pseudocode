/*
 * XREFs of ?NonRTGrabSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ @ 0x14001FB5C
 * Callers:
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x14001F9C0 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ??4CProcessingData@@QEAAXAEAV0@@Z @ 0x14000D8B0 (--4CProcessingData@@QEAAXAEAV0@@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14006D500 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?ContinueWaitingForRTActive@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14008F35C (-ContinueWaitingForRTActive@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 */

__int64 __fastcall CRealTimeSafeStruct<CProcessingData,1>::NonRTGrabSafePointer(__int64 a1)
{
  int v2; // r14d
  const char *v4; // [rsp+28h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
  v2 = 0;
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 304), 0LL, 0LL) )
  {
    if ( (int)CRealTimeSafeStruct<CProcessingData,1>::ContinueWaitingForRTActive(a1) < 0 )
      JUMPOUT(0x14004777ELL);
    ++v2;
    if ( v2 == 100 * (v2 / 100) )
      wil::details::in1diag3::Log_HrMsg(
        retaddr,
        (void *)0x12B,
        (unsigned int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
        (const char *)0x887C0033LL,
        (int)"Non-fatal. Will continue waiting for RT thread...",
        v4);
  }
  *(_QWORD *)(a1 + 320) = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 312), 0LL, 0LL);
  if ( *(_BYTE *)(a1 + 376) )
  {
    CProcessingData::operator=(
      a1 + 144 * (*(unsigned __int16 *)(a1 + 328) ^ 1LL),
      a1 + 144LL * *(unsigned __int16 *)(a1 + 328));
    *(_BYTE *)(a1 + 376) = 0;
  }
  return a1 + 144 * (*(unsigned __int16 *)(a1 + 328) ^ 1LL);
}
