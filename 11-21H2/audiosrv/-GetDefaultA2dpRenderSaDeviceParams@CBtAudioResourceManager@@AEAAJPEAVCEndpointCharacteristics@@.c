/*
 * XREFs of ?GetDefaultA2dpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x180115D90
 * Callers:
 *     ?CreateA2dpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUISaDeviceProxy@@@Z @ 0x180113BC4 (-CreateA2dpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharac.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x180027630 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002C050 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBtAudioResourceManager::GetDefaultA2dpRenderSaDeviceParams(
        CBtAudioResourceManager *this,
        struct _RTL_CRITICAL_SECTION *a2,
        unsigned __int32 a3,
        struct SaDeviceParams **a4)
{
  int SharedModeEnginePeriodicity; // eax
  unsigned int v8; // esi
  struct tWAVEFORMATEX *Src; // rdi
  struct tWAVEFORMATEX *v10; // rbx
  __int64 v11; // rdx
  double v12; // xmm1_8
  struct tWAVEFORMATEX *v14; // [rsp+78h] [rbp-29h] BYREF
  struct tWAVEFORMATEX *v15; // [rsp+80h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-19h] BYREF
  struct tWAVEFORMATEX *v17; // [rsp+90h] [rbp-11h] BYREF
  struct _GUID v18; // [rsp+98h] [rbp-9h] BYREF
  int v19; // [rsp+A8h] [rbp+7h] BYREF
  int v20; // [rsp+ACh] [rbp+Bh] BYREF
  int v21; // [rsp+B0h] [rbp+Fh] BYREF
  struct _GUID v22; // [rsp+B8h] [rbp+17h] BYREF
  struct _GUID v23; // [rsp+C8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]
  CBtAudioResourceManager *v25; // [rsp+108h] [rbp+67h] BYREF

  v25 = this;
  v15 = 0LL;
  v14 = 0LL;
  v17 = 0LL;
  pv = 0LL;
  v23 = (struct _GUID)xmmword_180195198;
  v22 = (struct _GUID)xmmword_180195198;
  v18 = (struct _GUID)xmmword_180195198;
  SharedModeEnginePeriodicity = DeriveDeviceGraphFormatsForStream(
                                  a2,
                                  0,
                                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                                  AUDCLNT_SHAREMODE_SHARED,
                                  0,
                                  &v18,
                                  &v22,
                                  &v23,
                                  0LL,
                                  &v17,
                                  (struct tWAVEFORMATEX **)&pv,
                                  &v14,
                                  &v15);
  v8 = SharedModeEnginePeriodicity;
  Src = v14;
  v10 = v15;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v18 = (struct _GUID)xmmword_180195198;
    SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                    (__int64)a2,
                                    a3,
                                    v15,
                                    (__int128 *)&v18,
                                    0,
                                    &v25,
                                    &v21,
                                    &v20,
                                    &v19);
    v8 = SharedModeEnginePeriodicity;
    if ( SharedModeEnginePeriodicity >= 0 )
    {
      v12 = (double)(int)v25 * 10000000.0 / (double)(int)v10->nSamplesPerSec + 0.5;
      v18 = (struct _GUID)xmmword_180195198;
      v22 = (struct _GUID)xmmword_180195198;
      SharedModeEnginePeriodicity = DeriveSaDeviceParametersForStream(
                                      (struct CEndpointCharacteristics *)a2,
                                      AUDCLNT_SHAREMODE_SHARED,
                                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                                      &v22,
                                      &v18,
                                      v10,
                                      Src,
                                      (unsigned int)(int)v12,
                                      a4);
      v8 = SharedModeEnginePeriodicity;
      if ( SharedModeEnginePeriodicity >= 0 )
      {
        v8 = 0;
        goto LABEL_9;
      }
      v11 = 645LL;
    }
    else
    {
      v11 = 633LL;
    }
  }
  else
  {
    v11 = 629LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
    (const char *)(unsigned int)SharedModeEnginePeriodicity);
LABEL_9:
  CoTaskMemFree(pv);
  CoTaskMemFree(v17);
  CoTaskMemFree(Src);
  CoTaskMemFree(v10);
  return v8;
}
