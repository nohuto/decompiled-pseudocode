/*
 * XREFs of ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18007BF90
 * Callers:
 *     ??R_lambda_5e28e056b5a6ba1a3048485051bc0472_@@QEBA@XZ @ 0x18007E440 (--R_lambda_5e28e056b5a6ba1a3048485051bc0472_@@QEBA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VFTMEventDelegate@?1???$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z@V1?1???$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJ012@Z@$$V@Details@WRL@Microsoft@@YAJPEAPEAVFTMEventDelegate@?1???$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z@@Z @ 0x18007BAB8 (--$MakeAndInitialize@VFTMEventDelegate@-1---$WaitForCompletion@U-$IAsyncOperationCo_ea_18007BAB8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *> *>>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        int a2,
        __int64 a3)
{
  int v4; // ebx
  char v5; // bl
  HRESULT v6; // eax
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  int (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-20h] BYREF
  HANDLE pHandles[3]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF
  int v15; // [rsp+78h] [rbp+28h] BYREF
  __int64 dwindex; // [rsp+80h] [rbp+30h] BYREF
  __int64 v17; // [rsp+88h] [rbp+38h] BYREF

  dwindex = a3;
  v15 = a2;
  v12 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a1;
  if ( a1 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[1])(a1);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  v4 = ___MakeAndInitialize_VFTMEventDelegate__1____WaitForCompletion_U__IAsyncOperationCompletedHandler_PEAU__IVectorView_PEAVAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows___Collections_Foundation_Windows___Foundation_Windows__U__IAsyncOperation_PEAU__IVectorView_PEAVAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows___Collections_Foundation_Windows___23___YAJPEAU__IAsyncOperation_PEAU__IVectorView_PEAVAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows___Collections_Foundation_Windows___Foundation_Windows__W4tagCOWAIT_FLAGS__PEAX_Z_V1_1____WaitForCompletion_U__IAsyncOperationCompletedHandler_PEAU__IVectorView_PEAVAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows___Collections_Foundation_Windows___Foundation_Windows__U__IAsyncOperation_PEAU__IVectorView_PEAVAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows___Collections_Foundation_Windows___23___YAJ012_Z___V_Details_WRL_Microsoft__YAJPEAPEAVFTMEventDelegate__1____WaitForCompletion_U__IAsyncOperationCompletedHandler_PEAU__IVectorView_PEAVAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows___Collections_Foundation_Windows___Foundation_Windows__U__IAsyncOperation_PEAU__IVectorView_PEAVAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows___Collections_Foundation_Windows___23___YAJPEAU__IAsyncOperation_PEAU__IVectorView_PEAVAppInstallItem_InstallControl_Preview_Store_ApplicationModel_Windows___Collections_Foundation_Windows___Foundation_Windows__W4tagCOWAIT_FLAGS__PEAX_Z__Z(&v17);
  v15 = v4;
  if ( v4 >= 0 )
  {
    v4 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*a1)[6])(a1, v17);
    v15 = v4;
    if ( v4 >= 0 )
    {
      pHandles[0] = *(HANDLE *)(v17 + 56);
      pHandles[1] = 0LL;
      v5 = 0;
      v6 = CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, pHandles, (LPDWORD)&dwindex);
      v15 = v6;
      if ( v6 >= 0 && (_DWORD)dwindex )
      {
        v6 = -2147023673;
        v15 = -2147023673;
        v5 = 1;
      }
      v7 = 0LL;
      v14 = 0LL;
      if ( v5 )
      {
        v8 = **a1;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
        v9 = v8(a1, &GUID_00000036_0000_0000_c000_000000000046, &v14);
        v7 = v14;
        if ( v9 >= 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 72LL))(v14);
          v7 = v14;
        }
        v6 = v15;
      }
      if ( v6 < 0 || *(_DWORD *)(v17 + 48) == 1 )
        goto LABEL_18;
      if ( !v7 )
      {
        v10 = (int (__fastcall *)(_QWORD, GUID *, __int64 *))**a1;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
        if ( v10(a1, &GUID_00000036_0000_0000_c000_000000000046, &v14) < 0 )
        {
LABEL_18:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
          v4 = v15;
          goto LABEL_19;
        }
        v7 = v14;
      }
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 64LL))(v7, &v15);
      goto LABEL_18;
    }
  }
LABEL_19:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v12);
  return (unsigned int)v4;
}
