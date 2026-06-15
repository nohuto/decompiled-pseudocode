/*
 * XREFs of ?AttachInputEndpointToConnection@CAudioProcessor@@UEAAJ_K0PEAUIAudioEndpoint@@@Z @ 0x14001CAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z @ 0x140010354 (-ValidateTransactionState@CAudioProcessor@@AEAAJ_K@Z.c)
 *     ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x14001CC14 (-AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV-$CAtlList@PEAVCConn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x14007A980 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CAudioProcessor::AttachInputEndpointToConnection(
        CAudioProcessor *this,
        __int64 a2,
        unsigned __int64 a3,
        struct IAudioEndpoint *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // [rsp+20h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v18; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v20; // [rsp+88h] [rbp+38h] BYREF

  if ( !a4 )
  {
    v9 = -2147467261;
    v13 = 2911LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)v9,
      v15);
    return v9;
  }
  if ( ((a3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v9 = -2147024890;
    v13 = 2912LL;
    goto LABEL_12;
  }
  if ( ((a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v9 = -2147024890;
    v13 = 2913LL;
    goto LABEL_12;
  }
  v18 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 88);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = CAudioProcessor::ValidateTransactionState(this, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB66,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v8,
      v15);
    goto LABEL_15;
  }
  v20 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IAudioEndpoint *, GUID *, __int64 *))a4->lpVtbl->QueryInterface)(
          a4,
          &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
          &v20);
  v9 = v10;
  if ( v10 < 0 )
  {
    v14 = 2922LL;
    goto LABEL_14;
  }
  v10 = CAudioProcessor::AttachEndpointToConnection(this, a3, a4, (__int64)&v16);
  v9 = v10;
  if ( v10 < 0 )
  {
    v14 = 2926LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v10,
      v15);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v20);
LABEL_15:
    ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
    return v9;
  }
  v11 = v20;
  v20 = 0LL;
  *(_QWORD *)(v16 + 120) = v11;
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v20);
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
