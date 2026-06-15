/*
 * XREFs of ?DetachEndpointFromConnection@CAudioProcessor@@UEAAJ_KPEAUIAudioEndpoint@@@Z @ 0x140024820
 * Callers:
 *     ??1CAudioProcessor@@QEAA@XZ @ 0x14008EC7C (--1CAudioProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z @ 0x140010354 (-ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z.c)
 *     ?RemoveEndpointFromList@CAudioProcessor@@AEAAJAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAUIAudioEndpoint@@@Z @ 0x1400248CC (-RemoveEndpointFromList@CAudioProcessor@@AEAAJAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x14007A930 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioProcessor::DetachEndpointFromConnection(
        CAudioProcessor *this,
        __int64 a2,
        struct IAudioEndpoint *a3)
{
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v14; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a3 )
  {
    v8 = -2147467261;
    v11 = 3081LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v8,
      (int)lpCriticalSection);
    return v8;
  }
  if ( ((a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v8 = -2147024890;
    v11 = 3082LL;
    goto LABEL_10;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 88);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = CAudioProcessor::ValidateTransactionState(this, a2);
  v8 = v6;
  if ( v6 < 0 )
  {
    v12 = 3087LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v6,
      (int)lpCriticalSection);
    ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
    return v8;
  }
  if ( (int)CAudioProcessor::RemoveEndpointFromList(v7, **((_QWORD **)this + 96) + 48LL, a3) < 0 )
  {
    v6 = CAudioProcessor::RemoveEndpointFromList(v9, **((_QWORD **)this + 96) + 96LL, a3);
    v8 = v6;
    if ( v6 < 0 )
    {
      v12 = 3095LL;
      goto LABEL_11;
    }
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
