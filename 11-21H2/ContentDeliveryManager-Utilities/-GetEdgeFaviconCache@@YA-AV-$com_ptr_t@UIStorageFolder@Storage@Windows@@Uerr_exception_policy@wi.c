/*
 * XREFs of ?GetEdgeFaviconCache@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800D3890
 * Callers:
 *     ?CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z @ 0x1800D300C (-CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolderStatics@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x1800AFC50 (--$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsy.c)
 *     ??$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFolderStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800AFE24 (--$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorage.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAE@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@@Z @ 0x1800D2258 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6A.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@W4523@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolder@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@W4CreationCollisionOption@56@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@$$QEAW4856@@Z @ 0x1800D245C (--$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionO.c)
 *     ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x1800E7D84 (-GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=20
_QWORD *__fastcall GetEdgeFaviconCache(_QWORD *a1, __int64 a2, void **a3)
{
  int StateHandle; // eax
  wil::details::in1diag3 *v5; // rcx
  HSTRING v6; // rdi
  int v7; // eax
  WCHAR *v8; // rbx
  unsigned __int64 v9; // rcx
  HRESULT v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 *v13; // rax
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v16; // r14
  __int64 v17; // rcx
  HRESULT v18; // eax
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 v21; // rsi
  HSTRING v22; // rcx
  HRESULT v23; // eax
  __int64 v24; // r8
  __int64 *v25; // rax
  __int64 v26; // rcx
  HSTRING v27; // rcx
  int v29; // [rsp+20h] [rbp-E0h]
  HSTRING v30; // [rsp+30h] [rbp-D0h] BYREF
  int v31[2]; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING v32; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v33[4]; // [rsp+48h] [rbp-B8h] BYREF
  PCWSTR sourceString; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  _BYTE v37[8]; // [rsp+78h] [rbp-88h] BYREF
  void **v38; // [rsp+80h] [rbp-80h] BYREF
  __int128 v39; // [rsp+88h] [rbp-78h]
  void ***v40; // [rsp+E8h] [rbp-18h]
  HSTRING_HEADER hstringHeader; // [rsp+F0h] [rbp-10h] BYREF
  HSTRING string; // [rsp+108h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v32 = (HSTRING)a1;
  *(_QWORD *)v33 = 0LL;
  StateHandle = CallerIdentity::GetStateHandle((CallerIdentity *)L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe", v33, a3);
  v5 = retaddr;
  if ( StateHandle < 0 )
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v5,
      28LL,
      (__int64)"shellcommon\\Shell\\inc\\CopyEdgeAssetsHelper.h",
      (const char *)(unsigned int)StateHandle,
      v29);
  sourceString = 0LL;
  v31[0] = 1;
  v6 = *(HSTRING *)v33;
  v30 = *(HSTRING *)v33;
  *(_QWORD *)&v35 = &v30;
  *((_QWORD *)&v35 + 1) = v31;
  v38 = &wistd::__function::__func<_lambda_cc048563a57b57a885d4bf4143ff221c_,long (wchar_t *,unsigned __int64,unsigned __int64 *)>::`vftable';
  v39 = v35;
  v40 = &v38;
  v7 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>,260>(
         (LPVOID *)&sourceString,
         (__int64)v37);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      31LL,
      (__int64)"shellcommon\\Shell\\inc\\CopyEdgeAssetsHelper.h",
      (const char *)(unsigned int)v7,
      v29);
  string = 0LL;
  v8 = (WCHAR *)sourceString;
  v9 = -1LL;
  do
    ++v9;
  while ( sourceString[v9] );
  if ( v9 > 0xFFFFFFFF )
  {
LABEL_28:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    goto LABEL_29;
  }
  if ( (int)v9 + 1 < (unsigned int)v9 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v10 = WindowsCreateStringReference(sourceString, v9, &hstringHeader, &string);
  if ( v10 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    goto LABEL_33;
  }
  v30 = string;
  v13 = (__int64 *)wil::GetActivationFactory<Windows::Storage::IStorageFolderStatics>((const WCHAR *)&v32, v11, v12);
  v15 = (__int64 *)___CallAndWaitForCompletion_UIStorageFolderStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolderStatics_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
                     (__int64)v31,
                     *v13,
                     v14,
                     &v30);
  v16 = *v15;
  *v15 = 0LL;
  v36 = v16;
  v17 = *(_QWORD *)v31;
  if ( *(_QWORD *)v31 )
  {
    *(_QWORD *)v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( v32 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v32 + 16LL))(v32);
  v31[0] = 3;
  string = 0LL;
  v18 = WindowsCreateStringReference(L"Favicons", 8u, &hstringHeader, &string);
  if ( v18 < 0 )
  {
LABEL_33:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v18);
    JUMPOUT(0x1800D3C1CLL);
  }
  v32 = string;
  v20 = ___CallAndWaitForCompletion_UIStorageFolder_Storage_Windows__PEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4_W4523__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolder_Storage_Windows__P8456_EAAJPEAUHSTRING____W4CreationCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7___QEAW4856__Z(
          &v30,
          v16,
          v19,
          &v32,
          (unsigned int *)v31);
  v21 = *v20;
  *v20 = 0LL;
  *(_QWORD *)&v35 = v21;
  v22 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v31[0] = 3;
  string = 0LL;
  v23 = WindowsCreateStringReference(L"Provided", 8u, &hstringHeader, &string);
  if ( v23 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23);
    goto LABEL_28;
  }
  v32 = string;
  v25 = ___CallAndWaitForCompletion_UIStorageFolder_Storage_Windows__PEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4_W4523__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolder_Storage_Windows__P8456_EAAJPEAUHSTRING____W4CreationCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7___QEAW4856__Z(
          &v30,
          v21,
          v24,
          &v32,
          (unsigned int *)v31);
  v26 = *v25;
  *v25 = 0LL;
  *a1 = v26;
  v27 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v27 + 16LL))(v27);
  }
  string = 0LL;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v8 )
    CoTaskMemFree(v8);
  if ( v6 )
    CloseState(v6);
  return a1;
}
