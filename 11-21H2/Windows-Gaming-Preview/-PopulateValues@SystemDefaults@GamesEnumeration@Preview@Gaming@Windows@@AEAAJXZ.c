/*
 * XREFs of ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800436D0
 * Callers:
 *     ?PopulateValuesThreadProc@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180043640 (-PopulateValuesThreadProc@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@CAXPEAU_TP_CAL.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x180010110 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18001362C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180019B60 (-JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z.c)
 *     ?GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@PEAKPEA_K1PEA_N3@Z @ 0x180043A70 (-GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$share.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AD04 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateValues(HSTRING *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rbx
  void *v6; // rdi
  DWORD ActiveProcessorCount; // r14d
  bool *v8; // r15
  int *v9; // rbx
  int *v10; // r12
  int DefaultGameModeProfile; // eax
  int LargestValidResourceRequest; // r14d
  HRESULT v13; // eax
  HSTRING v14; // rbx
  __int64 v15; // rcx
  int ActivationFactory; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, HSTRING, HSTRING *); // r15
  HSTRING v20; // rcx
  __int64 v21; // rcx
  _BYTE v23[8]; // [rsp+58h] [rbp-69h] BYREF
  __int64 v24; // [rsp+60h] [rbp-61h] BYREF
  __int128 v25; // [rsp+68h] [rbp-59h] BYREF
  __int64 v26; // [rsp+78h] [rbp-49h] BYREF
  __int128 v27; // [rsp+80h] [rbp-41h] BYREF
  __int64 v28; // [rsp+90h] [rbp-31h]
  _BYTE *v29; // [rsp+98h] [rbp-29h]
  char v30; // [rsp+A0h] [rbp-21h]
  _OWORD v31[2]; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+7h]
  HSTRING_HEADER hstringHeader; // [rsp+D0h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+E8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v26 = 0LL;
  v27 = 0LL;
  v2 = CreateGameConfigStoreClient(&v26);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 137LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_29;
  }
  v23[0] = 0;
  v5 = v26;
  v28 = v26;
  v29 = v23;
  v30 = 1;
  v6 = operator new(0x18uLL);
  *(_OWORD *)v6 = 0LL;
  *((_DWORD *)v6 + 2) = 1;
  *((_DWORD *)v6 + 3) = 1;
  *(_QWORD *)v6 = off_180053A90;
  *((_QWORD *)v6 + 2) = v5;
  v25 = 0uLL;
  *(_QWORD *)&v27 = v5;
  *((_QWORD *)&v27 + 1) = v6;
  std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)&v25);
  ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
  v23[0] = 0;
  v25 = 0LL;
  _InterlockedAdd((volatile signed __int32 *)v6 + 2, 1u);
  *(_QWORD *)&v25 = v28;
  *((_QWORD *)&v25 + 1) = v6;
  v8 = (bool *)this + 28;
  v9 = (int *)(this + 3);
  v10 = (int *)(this + 1);
  DefaultGameModeProfile = Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetDefaultGameModeProfile(
                             v28,
                             &v25,
                             this + 1,
                             this + 2,
                             this + 3,
                             (char *)this + 28,
                             v23);
  if ( DefaultGameModeProfile >= 0 )
  {
    if ( v23[0] )
      goto LABEL_13;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      146LL,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)DefaultGameModeProfile);
  }
  *v10 = 36838932;
  if ( ActiveProcessorCount == 2 )
  {
    *v9 = 0;
  }
  else
  {
    *v8 = 1;
    if ( ActiveProcessorCount == 4 )
    {
      *v9 = 2;
    }
    else
    {
      memset(v31, 0, sizeof(v31));
      v32 = 0LL;
      RmGameModeInitializeResourceRequest(v31);
      LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(v31);
      if ( LargestValidResourceRequest >= 0 )
        *v9 = DWORD1(v31[0]);
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          179LL,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
          (const char *)(LargestValidResourceRequest | 0x10000000u));
    }
  }
LABEL_13:
  WindowsDeleteString(this[4]);
  this[4] = 0LL;
  v2 = JsonDocumentFromGameConfigValues(*v10, this[2], *v9, 1, *v8, 0, 0, 0LL, this + 4);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 198LL;
    goto LABEL_15;
  }
  v24 = 0LL;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    JUMPOUT(0x180043A68LL);
  }
  v14 = string;
  v15 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  ActivationFactory = RoGetActivationFactory(v14, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, &v24);
  v3 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v17 = 203LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_27;
  }
  v18 = v24;
  v19 = *(__int64 (__fastcall **)(__int64, HSTRING, HSTRING *))(*(_QWORD *)v24 + 144LL);
  v20 = this[5];
  if ( v20 )
  {
    this[5] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 16LL))(v20);
  }
  ActivationFactory = v19(v18, this[4], this + 5);
  v3 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v17 = 205LL;
    goto LABEL_25;
  }
  v3 = 0;
LABEL_27:
  v21 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
LABEL_29:
  std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)&v27);
  return v3;
}
