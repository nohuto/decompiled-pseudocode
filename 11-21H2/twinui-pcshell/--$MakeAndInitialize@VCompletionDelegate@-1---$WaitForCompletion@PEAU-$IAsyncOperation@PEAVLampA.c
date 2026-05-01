/*
 * XREFs of ??$MakeAndInitialize@VCompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@V1?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@@23@YAJ01K2@Z@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@@Z @ 0x18055E29C
 * Callers:
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18055E338 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Win.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@CompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@QEAAJXZ @ 0x1803C6E74 (-RuntimeClassInitialize@CompletionDelegate@-1---$WaitForCompletion@PEAU-$IAsyncOperation@PEAVLam.c)
 *     ??0CompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVLampArray@Lights@Devices@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@QEAA@XZ @ 0x18055E5E8 (--0CompletionDelegate@-1---$WaitForCompletion@PEAU-$IAsyncOperation@PEAVLampArray@Lights@Devices.c)
 */

__int64 __fastcall ___MakeAndInitialize_VCompletionDelegate__1____WaitForCompletion_PEAU__IAsyncOperation_PEAVLampArray_Lights_Devices_Windows___Foundation_Windows___details_wil__YAJPEAU__IAsyncOperation_PEAVLampArray_Lights_Devices_Windows___Foundation_Windows__W4tagCOWAIT_FLAGS__KPEA_N_Z_V1_1____WaitForCompletion_PEAU__IAsyncOperation_PEAVLampArray_Lights_Devices_Windows___Foundation_Windows___23_YAJ01K2_Z___V_Details_WRL_Microsoft__YAJPEAPEAVCompletionDelegate__1____WaitForCompletion_PEAU__IAsyncOperation_PEAVLampArray_Lights_Devices_Windows___Foundation_Windows___details_wil__YAJPEAU__IAsyncOperation_PEAVLampArray_Lights_Devices_Windows___Foundation_Windows__W4tagCOWAIT_FLAGS__KPEA_N_Z__Z(
        __int64 *a1)
{
  void *v2; // rax
  int v3; // ebx
  __int64 v4; // rdi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = `wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::LampArray *> *>'::`2'::CompletionDelegate::CompletionDelegate(v2);
    v6 = v4;
    v3 = `wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::LampArray *> *>'::`2'::CompletionDelegate::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
