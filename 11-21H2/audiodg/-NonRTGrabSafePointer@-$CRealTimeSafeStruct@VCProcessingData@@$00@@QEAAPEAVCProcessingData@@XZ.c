/*
 * XREFs of ?NonRTGrabSafePointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAAPEAVCProcessingData@@XZ @ 0x14000C168
 * Callers:
 *     ?BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z @ 0x14000BF30 (-BeginGraphChanges@CAudioProcessor@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ?CopyEndpointList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@AEBV23@@Z @ 0x14000C580 (-CopyEndpointList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTrai.c)
 *     ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x14000FDA0 (-CopyAPOList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z.c)
 *     ?ContinueWaitingForRTActive@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x140081FC8 (-ContinueWaitingForRTActive@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14008231C (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CRealTimeSafeStruct<CProcessingData,1>::NonRTGrabSafePointer(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // r14d
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rcx
  const char *v10; // [rsp+28h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
  v3 = 0;
  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 304), 0LL, 0LL) )
  {
    if ( (int)CRealTimeSafeStruct<CProcessingData,1>::ContinueWaitingForRTActive(a1) < 0 )
      JUMPOUT(0x14003E9A9LL);
    v2 = (unsigned int)(100 * (++v3 / 100));
    if ( v3 == (_DWORD)v2 )
      wil::details::in1diag3::Log_HrMsg(
        retaddr,
        (void *)0x12B,
        (unsigned int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
        (const char *)0x887C0033LL,
        (int)"Non-fatal. Will continue waiting for RT thread...",
        v10);
  }
  *(_QWORD *)(a1 + 320) = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 312), 0LL, 0LL);
  if ( *(_BYTE *)(a1 + 376) )
  {
    v4 = *(unsigned __int16 *)(a1 + 328);
    v5 = a1 + 144 * v4;
    v6 = a1 + 144 * (v4 ^ 1);
    CProcessingData::CopyAPOList(v2, v6, v5);
    CProcessingData::CopyEndpointList(v7, v6 + 48, v5 + 48);
    CProcessingData::CopyEndpointList(v8, v6 + 96, v5 + 96);
    *(_BYTE *)(a1 + 376) = 0;
  }
  return a1 + 144 * (*(unsigned __int16 *)(a1 + 328) ^ 1LL);
}
