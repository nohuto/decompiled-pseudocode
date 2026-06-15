/*
 * XREFs of ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18000C490
 * Callers:
 *     _lambda_2f91230d5263cfdecd1c9667b3e483e9_::operator() @ 0x18000FD90 (_lambda_2f91230d5263cfdecd1c9667b3e483e9_--operator().c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProcess@@PEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBG@Z @ 0x18002CB0C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCProc.c)
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x18002D0DC (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18002D32C (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@@Z @ 0x18002D4EC (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerr.c)
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x18002DDB0 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18002E76C (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?UpdateApplicationState@CApplicationManager@@QEAAJPEBG_KHKPEAPEAVCApplication@@PEAH@Z @ 0x18002F6F8 (-UpdateApplicationState@CApplicationManager@@QEAAJPEBG_KHKPEAPEAVCApplication@@PEAH@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113A0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180017648 (memset_0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001DAF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180023798 (WPP_SF_S.c)
 *     ??$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplication@@AEAPEBGAEA_KAEAK@Z @ 0x18002BCAC (--$MakeAndInitialize@VCApplication@@V1@AEAPEBGAEA_KAEAK@Details@WRL@Microsoft@@YAJPEAPEAVCApplic.c)
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x18002D21C (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetApplication(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        struct CApplication **a5,
        int a6,
        int *a7)
{
  const WCHAR *v7; // rsi
  struct CApplication **v9; // r12
  int *v10; // r13
  int v11; // r14d
  __int64 v12; // rdi
  struct _RTL_CRITICAL_SECTION *v13; // r15
  _QWORD *v14; // rbx
  int v15; // eax
  __int64 v16; // r8
  __int64 *v17; // rbx
  __int64 v18; // rax
  __int64 result; // rax
  int *v20; // rbx
  int v21; // [rsp+30h] [rbp-308h] BYREF
  __int64 v22; // [rsp+38h] [rbp-300h] BYREF
  int v23; // [rsp+40h] [rbp-2F8h]
  __int64 v24; // [rsp+48h] [rbp-2F0h]
  UINT32 packageRelativeApplicationIdLength; // [rsp+50h] [rbp-2E8h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+54h] [rbp-2E4h] BYREF
  UINT32 v27; // [rsp+58h] [rbp-2E0h] BYREF
  UINT32 v28; // [rsp+5Ch] [rbp-2DCh] BYREF
  unsigned int v29; // [rsp+60h] [rbp-2D8h]
  const unsigned __int16 *v30; // [rsp+68h] [rbp-2D0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-2C8h]
  int *v32; // [rsp+78h] [rbp-2C0h]
  __int64 v33; // [rsp+80h] [rbp-2B8h]
  __int64 v34; // [rsp+88h] [rbp-2B0h] BYREF
  __int64 *v35; // [rsp+90h] [rbp-2A8h]
  struct CApplication **v36; // [rsp+98h] [rbp-2A0h]
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+A0h] [rbp-298h]
  ATL::CAtlException *v38; // [rsp+A8h] [rbp-290h] BYREF
  WCHAR v39[8]; // [rsp+B0h] [rbp-288h] BYREF
  __int128 v40; // [rsp+C0h] [rbp-278h]
  __int128 v41; // [rsp+D0h] [rbp-268h]
  __int128 v42; // [rsp+E0h] [rbp-258h]
  __int128 v43; // [rsp+F0h] [rbp-248h]
  __int128 v44; // [rsp+100h] [rbp-238h]
  __int128 v45; // [rsp+110h] [rbp-228h]
  __int128 v46; // [rsp+120h] [rbp-218h]
  __int16 v47; // [rsp+130h] [rbp-208h]
  WCHAR v48[8]; // [rsp+140h] [rbp-1F8h] BYREF
  __int128 v49; // [rsp+150h] [rbp-1E8h]
  __int128 v50; // [rsp+160h] [rbp-1D8h]
  __int128 v51; // [rsp+170h] [rbp-1C8h]
  __int128 v52; // [rsp+180h] [rbp-1B8h]
  __int128 v53; // [rsp+190h] [rbp-1A8h]
  __int128 v54; // [rsp+1A0h] [rbp-198h]
  __int128 v55; // [rsp+1B0h] [rbp-188h]
  int v56; // [rsp+1C0h] [rbp-178h]
  WCHAR packageFamilyName[72]; // [rsp+1D0h] [rbp-168h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+260h] [rbp-D8h] BYREF

  v23 = a4;
  v33 = a3;
  v7 = a2;
  v30 = a2;
  v34 = a3;
  v21 = a4;
  v9 = a5;
  v36 = a5;
  v10 = a7;
  v32 = a7;
  v11 = -2147023728;
  v24 = 0LL;
  v12 = 0LL;
  v22 = 0LL;
  v29 = 0;
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v37 = v13;
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
  v35 = (__int64 *)((char *)this + 72);
  v14 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v14 )
  {
    v12 = v14[2];
    v14 = (_QWORD *)*v14;
    v22 = v12;
    *(_OWORD *)v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0;
    *(_OWORD *)v48 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v56 = 0;
    v28 = 65;
    v27 = 66;
    ParseApplicationUserModelId(*(PCWSTR *)(v12 + 24), &v28, v39, &v27, v48);
    if ( !(unsigned int)_o__wcsicmp(*(_QWORD *)(v12 + 24), v7)
      && *(_DWORD *)(v12 + 212) == v23
      && *(_QWORD *)(v12 + 696) == v33 )
    {
      v15 = 0;
      v11 = 0;
LABEL_36:
      *v9 = (struct CApplication *)v12;
      goto LABEL_37;
    }
    if ( !(unsigned int)_o__wcsicmp(v39, packageFamilyName)
      && (!(unsigned int)_o__wcsicmp(v48, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)_o__wcsicmp(packageRelativeApplicationId, L"ppleae38af2e007f4358a809ac99a64a67c1")
       || !(unsigned int)_o__wcsicmp(packageFamilyName, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe"))
      && *(_DWORD *)(v12 + 212) == v23 )
    {
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v7);
      }
      v15 = 0;
      v11 = 0;
      goto LABEL_36;
    }
  }
  if ( !a6 )
  {
    v15 = 0;
    goto LABEL_36;
  }
  v11 = Microsoft::WRL::Details::MakeAndInitialize<CApplication,CApplication,unsigned short const * &,unsigned __int64 &,unsigned long &>(
          &v22,
          &v30,
          &v34,
          &v21);
  if ( v11 < 0 )
  {
    v15 = 0;
    goto LABEL_33;
  }
  try
  {
    v11 = 0;
    v17 = v35;
    v18 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(v35, &v22, v16, *v35);
    if ( *v17 )
      *(_QWORD *)(*v17 + 8) = v18;
    else
      v17[1] = v18;
    *v17 = v18;
  }
  catch ( ATL::CAtlException *v38 )
  {
    v20 = (int *)v38;
    if ( *(_DWORD *)v38 == -1073741571 )
      _o__resetstkoflw();
    v21 = *v20;
    v11 = v21;
    v13 = lpCriticalSection;
    v10 = v32;
    if ( v21 >= 0 )
    {
      v7 = v30;
      v9 = v36;
      goto LABEL_26;
    }
    v15 = v29;
    v24 = v29;
LABEL_33:
    if ( v22 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release();
      v15 = v24;
    }
LABEL_37:
    if ( v10 )
      *v10 = v15;
    if ( v11 < 0 )
    {
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          27LL,
          &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids,
          (unsigned int)v11);
      }
      AudPolicyLogError("CApplicationManager::GetApplication", 1419, v11);
    }
    if ( v13 )
      LeaveCriticalSection(v13);
    result = (unsigned int)v11;
  }
LABEL_26:
  v15 = 1;
  v24 = 1LL;
  if ( WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
  {
    v12 = v22;
  }
  else
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v7);
    v12 = v22;
    v15 = v24;
  }
  goto LABEL_36;
}
