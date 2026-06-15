/*
 * XREFs of ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F460
 * Callers:
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x180020078 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x180020820 (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180020A38 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180020FAC (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180021DB0 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Do_call @ 0x180025570 (std--_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_::_Do_call @ 0x180026B10 (std--_Func_impl_no_alloc__lambda_2f91230d5263cfdecd1c9667b3e483e9__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_::_Do_call @ 0x180027EC0 (std--_Func_impl_no_alloc__lambda_55bbdd01f859b2b681de89e14de0bd19__void_--_Do_call.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     memset_0 @ 0x1800034E8 (memset_0.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000BF70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 *     ??$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplication@@AEAPEBGAEA_KAEAK@Z @ 0x18001E1C8 (--$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplic.c)
 *     ?AddHead@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCApplication@@@Z @ 0x18001EE88 (-AddHead@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAPEAU__.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetApplication(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        UINT32 a4,
        struct CApplication **a5,
        int a6,
        int *a7)
{
  const WCHAR *v7; // r12
  int *v9; // r15
  int v10; // edi
  volatile signed __int32 *v11; // rsi
  int v12; // r13d
  struct _RTL_CRITICAL_SECTION *v13; // r14
  __int64 *v14; // rbx
  _QWORD *v15; // rcx
  UINT32 v16; // ebx
  volatile signed __int32 *v17; // rcx
  __int64 result; // rax
  int *v19; // rbx
  volatile signed __int32 *v20; // [rsp+30h] [rbp-308h] BYREF
  UINT32 v21; // [rsp+38h] [rbp-300h] BYREF
  int v22; // [rsp+40h] [rbp-2F8h] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+48h] [rbp-2F0h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+4Ch] [rbp-2ECh] BYREF
  UINT32 v25; // [rsp+50h] [rbp-2E8h] BYREF
  int v26; // [rsp+54h] [rbp-2E4h]
  struct CApplication **v27; // [rsp+58h] [rbp-2E0h]
  const unsigned __int16 *v28; // [rsp+60h] [rbp-2D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+68h] [rbp-2D0h]
  int *v30; // [rsp+70h] [rbp-2C8h]
  __int64 v31; // [rsp+78h] [rbp-2C0h]
  _QWORD *v32; // [rsp+80h] [rbp-2B8h]
  __int64 *v33; // [rsp+88h] [rbp-2B0h]
  __int64 v34[2]; // [rsp+90h] [rbp-2A8h] BYREF
  ATL::CAtlException *v35; // [rsp+A0h] [rbp-298h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+B0h] [rbp-288h] BYREF
  WCHAR v37[72]; // [rsp+140h] [rbp-1F8h] BYREF
  WCHAR v38[72]; // [rsp+1D0h] [rbp-168h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+260h] [rbp-D8h] BYREF

  v21 = a4;
  v31 = a3;
  v7 = a2;
  v28 = a2;
  v34[0] = a3;
  v22 = a4;
  v27 = a5;
  v9 = a7;
  v30 = a7;
  v10 = -2147023728;
  v11 = 0LL;
  v20 = 0LL;
  v12 = 0;
  v26 = 0;
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v29 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v34[1] = (__int64)v13;
  memset_0(packageFamilyName, 0, 0x82uLL);
  memset_0(packageRelativeApplicationId, 0, 0x84uLL);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 66;
  *a5 = 0LL;
  ParseApplicationUserModelId(
    v7,
    &packageFamilyNameLength,
    packageFamilyName,
    &packageRelativeApplicationIdLength,
    packageRelativeApplicationId);
  v14 = (__int64 *)((char *)this + 72);
  v33 = v14;
  v15 = (_QWORD *)*v14;
  if ( *v14 )
  {
    v16 = v21;
    while ( 1 )
    {
      v11 = (volatile signed __int32 *)v15[2];
      v32 = (_QWORD *)*v15;
      v20 = v11;
      memset_0(v37, 0, 0x82uLL);
      memset_0(v38, 0, 0x84uLL);
      v25 = 65;
      v21 = 66;
      ParseApplicationUserModelId(*((PCWSTR *)v11 + 3), &v25, v37, &v21, v38);
      if ( !(unsigned int)_o__wcsicmp(*((_QWORD *)v11 + 3), v7)
        && *((_DWORD *)v11 + 53) == v16
        && *((_QWORD *)v11 + 87) == v31 )
      {
        v10 = 0;
        goto LABEL_17;
      }
      if ( !(unsigned int)_o__wcsicmp(v37, packageFamilyName)
        && (!(unsigned int)_o__wcsicmp(v38, L"ppleae38af2e007f4358a809ac99a64a67c1")
         || !(unsigned int)_o__wcsicmp(packageRelativeApplicationId, L"ppleae38af2e007f4358a809ac99a64a67c1")
         || !(unsigned int)_o__wcsicmp(packageFamilyName, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe"))
        && *((_DWORD *)v11 + 53) == v16 )
      {
        break;
      }
      v15 = v32;
      if ( !v32 )
      {
        v14 = v33;
        goto LABEL_13;
      }
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v7);
    }
    v10 = 0;
    goto LABEL_17;
  }
LABEL_13:
  if ( !a6 )
  {
LABEL_17:
    *v27 = (struct CApplication *)v11;
    v17 = 0LL;
    goto LABEL_18;
  }
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CApplication,CApplication,unsigned short const * &,unsigned __int64 &,unsigned long &>(
          &v20,
          &v28,
          v34,
          &v22);
  if ( v10 < 0 )
  {
    v17 = v20;
    goto LABEL_18;
  }
  try
  {
    v10 = 0;
    ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::AddHead(v14, &v20);
  }
  catch ( ATL::CAtlException *v35 )
  {
    v19 = (int *)v35;
    if ( *(_DWORD *)v35 == -1073741571 )
      _o__resetstkoflw();
    v22 = *v19;
    v10 = v22;
    v13 = v29;
    v9 = v30;
    if ( v22 >= 0 )
    {
      v7 = v28;
      goto LABEL_38;
    }
    v17 = v20;
    v12 = v26;
LABEL_18:
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(v17);
    if ( v9 )
      *v9 = v12;
    if ( v10 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v10);
      }
      AudPolicyLogError("CApplicationManager::GetApplication", 1419, v10);
    }
    if ( v13 )
      LeaveCriticalSection(v13);
    result = (unsigned int)v10;
  }
LABEL_38:
  v12 = 1;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v7);
  }
  v11 = v20;
  goto LABEL_17;
}
