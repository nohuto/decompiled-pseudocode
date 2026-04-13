/*
 * XREFs of ??$wait_for_completion@UIAsyncAction@Foundation@Windows@@@wil@@YAXPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800A1810
 * Callers:
 *     ??$CallAndWaitForCompletion@UIStorageItem@Storage@Windows@@W4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@$$ZW4423@@wil@@YA?A_PPEAUIStorageItem@Storage@Windows@@P8123@EAAJW4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@@Z$$QEAW4423@@Z @ 0x1800A0DDC (--$CallAndWaitForCompletion@UIStorageItem@Storage@Windows@@W4StorageDeleteOption@23@PEAPEAUIAsyn.c)
 *     _lambda_de7ca9b0ec13d6a85971aebf8330bbf3_::operator() @ 0x1800A55FC (_lambda_de7ca9b0ec13d6a85971aebf8330bbf3_--operator().c)
 *     ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800AD0C0 (-CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x1800AEF70 (-PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18006DA60 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 */

__int64 __fastcall wil::wait_for_completion<Windows::Foundation::IAsyncAction>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        DWORD a2,
        int a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(a1, a2, a3);
  if ( (int)result < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x667,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)result,
      v4);
  return result;
}
