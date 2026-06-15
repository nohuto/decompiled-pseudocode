/*
 * XREFs of ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HHPEAUIDuckingController@@PEAH@Z @ 0x1800324AC
 * Callers:
 *     ?UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@PEAH@Z @ 0x180013F40 (-UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@P.c)
 * Callees:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV?$shared_ptr@VDuckingDescriptor@@@std@@HPEAUIDuckingController@@PEAH@Z @ 0x18000BDA0 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NAEBV-$shared_ptr@VDuckingDescriptor.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18001360C (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 */

__int64 __fastcall CStreamClassPolicyGainsWrapper::UpdateStreamClassPolicyGains(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  int v10; // r10d
  int updated; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp+20h] BYREF

  v10 = *(_DWORD *)(*(_QWORD *)a4 + 24LL);
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(
                  (LPCRITICAL_SECTION)(a1 + 64),
                  a3,
                  a5 != 0,
                  a4,
                  a6,
                  a7,
                  a8);
      if ( updated < 0 )
      {
        v12 = 147LL;
        goto LABEL_4;
      }
    }
    else if ( v10 == 2 )
    {
      updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(
                  (LPCRITICAL_SECTION)(a1 + 488),
                  a3,
                  a5 != 0,
                  a4,
                  a6,
                  a7,
                  a8);
      if ( updated < 0 )
      {
        v12 = 157LL;
        goto LABEL_4;
      }
    }
  }
  else
  {
    CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(
      (CStreamClassPolicyGainsWrapper *)a1,
      a2,
      (struct CStreamClassPolicyGains **)&lpCriticalSection);
    updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(lpCriticalSection, a3, a5 != 0, a4, a6, a7, a8);
    if ( updated < 0 )
    {
      v12 = 137LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
  }
  return 0LL;
}
