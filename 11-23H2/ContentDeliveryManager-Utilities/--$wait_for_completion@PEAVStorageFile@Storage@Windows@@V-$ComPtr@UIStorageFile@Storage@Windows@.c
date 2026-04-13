/*
 * XREFs of ??$wait_for_completion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800A16B8
 * Callers:
 *     ??$call_and_wait_for_completion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@W4NameCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU423@PEAU5@W4623@@wil@@YA?A_PPEAUIStorageFile@Storage@Windows@@P8123@EAAJPEAUIStorageFolder@23@PEAUHSTRING__@@W4NameCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@@Z$$QEAPEAU423@$$QEAPEAU5@$$QEAW4623@@Z @ 0x1800A13C4 (--$call_and_wait_for_completion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING.c)
 *     ??$call_and_wait_for_completion@UIStorageFileStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?A_PPEAUIStorageFileStatics@Storage@Windows@@P8123@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@@Z$$QEAPEAU4@@Z @ 0x1800A1464 (--$call_and_wait_for_completion@UIStorageFileStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IA.c)
 *     ??$call_and_wait_for_completion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?A_PPEAUIStorageFolder@Storage@Windows@@P8123@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@@Z$$QEAPEAU4@@Z @ 0x1800A14F0 (--$call_and_wait_for_completion@UIStorageFolder@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsyncO.c)
 *     ??$call_and_wait_for_completion@UIStorageFileStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZAEAPEAU4@@wil@@YA?A_PPEAUIStorageFileStatics@Storage@Windows@@P8123@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@@ZAEAPEAU4@@Z @ 0x1800BD46C (--$call_and_wait_for_completion@UIStorageFileStatics@Storage@Windows@@PEAUHSTRING___ea_1800BD46C.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800A110C (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::wait_for_completion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3)
{
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v5 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile *> *>(
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
