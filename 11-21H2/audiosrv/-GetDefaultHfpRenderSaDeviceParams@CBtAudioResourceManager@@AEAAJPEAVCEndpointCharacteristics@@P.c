/*
 * XREFs of ?GetDefaultHfpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUSaDeviceParams@@@Z @ 0x180115FD0
 * Callers:
 *     ?CreateHfpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x1801140E0 (-CreateHfpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAPEAUISaDeviceProx.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x180027630 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002C050 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBtAudioResourceManager::GetDefaultHfpRenderSaDeviceParams(
        CBtAudioResourceManager *this,
        struct _RTL_CRITICAL_SECTION *a2,
        struct SaDeviceParams **a3)
{
  int SharedModeEnginePeriodicity; // eax
  unsigned int v6; // esi
  struct tWAVEFORMATEX *Src; // rdi
  struct tWAVEFORMATEX *v8; // rbx
  __int64 v9; // rdx
  double v10; // xmm1_8
  struct tWAVEFORMATEX *v12; // [rsp+70h] [rbp-29h] BYREF
  struct tWAVEFORMATEX *v13; // [rsp+78h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+80h] [rbp-19h] BYREF
  struct tWAVEFORMATEX *v15; // [rsp+88h] [rbp-11h] BYREF
  struct _GUID v16; // [rsp+90h] [rbp-9h] BYREF
  int v17; // [rsp+A0h] [rbp+7h] BYREF
  _DWORD v18[3]; // [rsp+A4h] [rbp+Bh] BYREF
  struct _GUID v19; // [rsp+B0h] [rbp+17h] BYREF
  struct _GUID v20; // [rsp+C0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  CBtAudioResourceManager *v22; // [rsp+100h] [rbp+67h] BYREF
  int v23; // [rsp+118h] [rbp+7Fh] BYREF

  v22 = this;
  v13 = 0LL;
  v12 = 0LL;
  v15 = 0LL;
  pv = 0LL;
  v20 = (struct _GUID)xmmword_1801951A8;
  v19 = (struct _GUID)xmmword_1801951A8;
  v16 = (struct _GUID)xmmword_1801951A8;
  SharedModeEnginePeriodicity = DeriveDeviceGraphFormatsForStream(
                                  a2,
                                  0,
                                  eHostProcessConnector,
                                  AUDCLNT_SHAREMODE_SHARED,
                                  0,
                                  &v16,
                                  &v19,
                                  &v20,
                                  0LL,
                                  &v15,
                                  (struct tWAVEFORMATEX **)&pv,
                                  &v12,
                                  &v13);
  v6 = SharedModeEnginePeriodicity;
  Src = v12;
  v8 = v13;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v16 = (struct _GUID)xmmword_1801951A8;
    SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                    (__int64)a2,
                                    0,
                                    v13,
                                    (__int128 *)&v16,
                                    0,
                                    &v22,
                                    v18,
                                    &v17,
                                    &v23);
    v6 = SharedModeEnginePeriodicity;
    if ( SharedModeEnginePeriodicity >= 0 )
    {
      v10 = (double)(int)v22 * 10000000.0 / (double)(int)v8->nSamplesPerSec + 0.5;
      v16 = (struct _GUID)xmmword_1801951A8;
      v19 = (struct _GUID)xmmword_1801951A8;
      SharedModeEnginePeriodicity = DeriveSaDeviceParametersForStream(
                                      (struct CEndpointCharacteristics *)a2,
                                      AUDCLNT_SHAREMODE_SHARED,
                                      eHostProcessConnector,
                                      &v19,
                                      &v16,
                                      v8,
                                      Src,
                                      (unsigned int)(int)v10,
                                      a3);
      v6 = SharedModeEnginePeriodicity;
      if ( SharedModeEnginePeriodicity >= 0 )
      {
        v6 = 0;
        goto LABEL_9;
      }
      v9 = 606LL;
    }
    else
    {
      v9 = 594LL;
    }
  }
  else
  {
    v9 = 590LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
    (const char *)(unsigned int)SharedModeEnginePeriodicity);
LABEL_9:
  CoTaskMemFree(pv);
  CoTaskMemFree(v15);
  CoTaskMemFree(Src);
  CoTaskMemFree(v8);
  return v6;
}
