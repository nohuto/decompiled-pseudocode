/*
 * XREFs of ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U?$IAsyncOperation@_N@23@@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1803D280C
 * Callers:
 *     ?LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1803D921C (-LaunchGameOverlayWithUri@BroadcastDVRComponent@@AEAAJVStringReference@Internal@Windows@@V-$ComP.c)
 * Callees:
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x1800111EC (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VFTMEventDelegate@?1???$WaitForCompletion@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U?$IAsyncOperation@_N@23@@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z@V1?1???$WaitForCompletion@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U?$IAsyncOperation@_N@23@@@YAJ012@Z@$$V@Details@WRL@Microsoft@@YAJPEAPEAVFTMEventDelegate@?1???$WaitForCompletion@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U?$IAsyncOperation@_N@23@@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z@@Z @ 0x1803D1B90 (--$MakeAndInitialize@VFTMEventDelegate@-1---$WaitForCompletion@U-$IAsyncOperationCo_ea_1803D1B90.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Foundation::IAsyncOperation<bool>>(
        int (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        int a2,
        __int64 a3)
{
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  int (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  DWORD v9; // [rsp+20h] [rbp-20h]
  APTTYPE v10; // [rsp+28h] [rbp-18h]
  void *v11[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  int v13; // [rsp+68h] [rbp+28h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  int (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp+38h] BYREF

  v14 = a3;
  v13 = a2;
  v15 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))a1;
  if ( a1 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*a1)[1])(a1);
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  v4 = ___MakeAndInitialize_VFTMEventDelegate__1____WaitForCompletion_U__IAsyncOperationCompletedHandler__N_Foundation_Windows__U__IAsyncOperation__N_23___YAJPEAU__IAsyncOperation__N_Foundation_Windows__W4tagCOWAIT_FLAGS__PEAX_Z_V1_1____WaitForCompletion_U__IAsyncOperationCompletedHandler__N_Foundation_Windows__U__IAsyncOperation__N_23___YAJ012_Z___V_Details_WRL_Microsoft__YAJPEAPEAVFTMEventDelegate__1____WaitForCompletion_U__IAsyncOperationCompletedHandler__N_Foundation_Windows__U__IAsyncOperation__N_23___YAJPEAU__IAsyncOperation__N_Foundation_Windows__W4tagCOWAIT_FLAGS__PEAX_Z__Z(&v14);
  v13 = v4;
  if ( v4 >= 0 )
  {
    v4 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*a1)[6])(a1, v14);
    v13 = v4;
    if ( v4 >= 0 )
    {
      v11[0] = *(void **)(v14 + 56);
      v11[1] = 0LL;
      v5 = SHProcessMessagesUntilEventsEx((HWND)v11[0], v11, 1u, 0xFFFFFFFF, v9, v10);
      v6 = v13;
      if ( v5 == -1 )
        v6 = -2147467259;
      v13 = v6;
      v12 = 0LL;
      if ( v6 >= 0 && *(_DWORD *)(v14 + 48) != 1 )
      {
        v7 = **a1;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
        if ( v7(a1, &GUID_00000036_0000_0000_c000_000000000046, &v12) >= 0 )
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 64LL))(v12, &v13);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
      v4 = v13;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  return (unsigned int)v4;
}
