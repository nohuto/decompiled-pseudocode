/*
 * XREFs of ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGainsWrapper@@QEAAJPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x1800321D8
 * Callers:
 *     ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@AEAMAEA_J@Z @ 0x18003861C (-TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18001360C (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEAMAEA_J@Z @ 0x18003EFA0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyGains@@QEAAJKHAEAMAEA_J@Z.c)
 */

__int64 __fastcall CStreamClassPolicyGainsWrapper::GetPolicyVolumeForStreamClass(
        CStreamClassPolicyGainsWrapper *this,
        unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5,
        float *a6,
        __int64 *a7)
{
  int PolicyVolumeForStreamClass; // eax
  unsigned int v11; // ebx
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rax
  float v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  struct CStreamClassPolicyGains *v19; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v18 = 0LL;
  v17 = FLOAT_1_0;
  CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint(this, a2, &v19);
  PolicyVolumeForStreamClass = CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(v19, a3, a4, &v17, &v18);
  v11 = PolicyVolumeForStreamClass;
  if ( PolicyVolumeForStreamClass < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
      (const char *)(unsigned int)PolicyVolumeForStreamClass);
    return v11;
  }
  v13 = v18;
  *a6 = v17;
  *a7 = v13;
  if ( a5 )
  {
    v14 = CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
            (CStreamClassPolicyGainsWrapper *)((char *)this + 488),
            a3,
            a4,
            &v17,
            &v18);
    if ( v14 < 0 )
    {
      v15 = 189LL;
      goto LABEL_6;
    }
  }
  else
  {
    v14 = CStreamClassPolicyGains::GetPolicyVolumeForStreamClass(
            (CStreamClassPolicyGainsWrapper *)((char *)this + 64),
            a3,
            a4,
            &v17,
            &v18);
    if ( v14 < 0 )
    {
      v15 = 185LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamclasspolicymanager.cpp",
        (const char *)(unsigned int)v14);
      return (unsigned int)v14;
    }
  }
  v16 = v18;
  *a6 = fminf(*a6, v17);
  if ( *a7 > v16 )
    v16 = *a7;
  *a7 = v16;
  return 0LL;
}
