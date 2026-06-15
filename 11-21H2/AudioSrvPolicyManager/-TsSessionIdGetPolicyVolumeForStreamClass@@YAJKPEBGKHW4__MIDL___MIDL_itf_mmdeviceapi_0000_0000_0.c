/*
 * XREFs of ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x18002EEF8
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAMAEA_J@Z @ 0x180029A24 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@QEAAJPEAUIAudioStreamPolicyVolumeClien.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x180029C38 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18002DF74 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEAMAEA_J@Z @ 0x180037904 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEAMAEA_J@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TsSessionIdGetPolicyVolumeForStreamClass(
        DWORD SessionId,
        unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5,
        float *a6,
        struct TSSession **a7)
{
  struct _RTL_CRITICAL_SECTION *v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  struct TSSession *v15; // r13
  int PolicyVolumeForStreamClass; // eax
  __int64 v17; // rdx
  struct TSSession *v18; // rax
  float v19; // [rsp+30h] [rbp-20h] BYREF
  struct TSSession *v20; // [rsp+38h] [rbp-18h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  lpCriticalSection[1] = v11;
  v12 = TsSessionFromSessionId(SessionId, 1, &v20);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69F,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v12);
    if ( v11 )
      LeaveCriticalSection(v11);
    return v13;
  }
  v15 = v20;
  v19 = FLOAT_1_0;
  v20 = 0LL;
  CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
    (struct TSSession *)((char *)v15 + 72),
    a2,
    (struct CStreamClassPolicyGains **)lpCriticalSection);
  PolicyVolumeForStreamClass = CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
                                 lpCriticalSection[0],
                                 a3,
                                 a4,
                                 &v19,
                                 (__int64 *)&v20);
  v13 = PolicyVolumeForStreamClass;
  if ( PolicyVolumeForStreamClass < 0 )
  {
    v17 = 177LL;
    goto LABEL_12;
  }
  *a6 = v19;
  *a7 = v20;
  if ( a5 )
  {
    PolicyVolumeForStreamClass = CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
                                   (LPCRITICAL_SECTION)v15 + 14,
                                   a3,
                                   a4,
                                   &v19,
                                   (__int64 *)&v20);
    v13 = PolicyVolumeForStreamClass;
    if ( PolicyVolumeForStreamClass < 0 )
    {
      v17 = 189LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
        (const char *)(unsigned int)PolicyVolumeForStreamClass);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A6,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)v13);
      if ( v11 )
        LeaveCriticalSection(v11);
      return v13;
    }
  }
  else
  {
    PolicyVolumeForStreamClass = CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
                                   (LPCRITICAL_SECTION)((char *)v15 + 136),
                                   a3,
                                   a4,
                                   &v19,
                                   (__int64 *)&v20);
    v13 = PolicyVolumeForStreamClass;
    if ( PolicyVolumeForStreamClass < 0 )
    {
      v17 = 185LL;
      goto LABEL_12;
    }
  }
  *a6 = fminf(*a6, v19);
  v18 = v20;
  if ( (__int64)*a7 > (__int64)v20 )
    v18 = *a7;
  *a7 = v18;
  if ( v11 )
    LeaveCriticalSection(v11);
  return 0LL;
}
