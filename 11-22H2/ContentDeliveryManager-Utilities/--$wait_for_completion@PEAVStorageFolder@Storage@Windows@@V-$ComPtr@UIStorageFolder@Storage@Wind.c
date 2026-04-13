/*
 * XREFs of ??$wait_for_completion@PEAVStorageFolder@Storage@Windows@@V?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800A178C
 * Callers:
 *     ??$call_and_wait_for_completion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?A_PPEAUIStorageFolderStatics@Storage@Windows@@P8123@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@@Z$$QEAPEAU4@@Z @ 0x1800A15CC (--$call_and_wait_for_completion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$.c)
 *     ??$call_and_wait_for_completion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@W4523@@wil@@YA?A_PPEAUIStorageFolder@Storage@Windows@@P8123@EAAJPEAUHSTRING__@@W4CreationCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@@Z$$QEAPEAU4@$$QEAW4523@@Z @ 0x1800BD548 (--$call_and_wait_for_completion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@W4CreationCollis.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800A12B8 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Window.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::wait_for_completion<Windows::Storage::StorageFolder *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFolder>>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v5 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFolder *> *>(
         a2,
         (DWORD)a2,
         a3);
  if ( v5 >= 0 )
    v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD *))(*a2)[8])(a2, a1);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x66F,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v5,
      1);
  return a1;
}
