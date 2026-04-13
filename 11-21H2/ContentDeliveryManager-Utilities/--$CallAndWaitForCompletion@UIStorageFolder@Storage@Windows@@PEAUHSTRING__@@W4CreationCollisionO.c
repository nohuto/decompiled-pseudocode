/*
 * XREFs of ??$CallAndWaitForCompletion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@W4523@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolder@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@W4CreationCollisionOption@56@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@$$QEAW4856@@Z @ 0x1800D245C
 * Callers:
 *     ?GetEdgeFaviconCache@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800D3890 (-GetEdgeFaviconCache@@YA-AV-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wi.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wait_for_completion@PEAVStorageFolder@Storage@Windows@@V?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800B0618 (--$wait_for_completion@PEAVStorageFolder@Storage@Windows@@V-$ComPtr@UIStorageFolder@Storage@Wind.c)
 *     ??_9IStorageFolder@Storage@Windows@@$BEI@AA @ 0x1800D2FEC (--_9IStorageFolder@Storage@Windows@@$BEI@AA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall ___CallAndWaitForCompletion_UIStorageFolder_Storage_Windows__PEAUHSTRING____W4CreationCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4_W4523__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolder_Storage_Windows__P8456_EAAJPEAUHSTRING____W4CreationCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7___QEAW4856__Z(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        unsigned int *a5)
{
  int v6; // eax
  int v7; // r8d
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v6 =  Windows::Storage::IStorageFolder::`vcall'{72,{flat}}(a2, *a4, *a5, &v11);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1671LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v6,
      0);
  wil::wait_for_completion<Windows::Storage::StorageFolder *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFolder>>(
    a1,
    v11,
    v7);
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v8)[2])(v8);
  }
  return a1;
}
