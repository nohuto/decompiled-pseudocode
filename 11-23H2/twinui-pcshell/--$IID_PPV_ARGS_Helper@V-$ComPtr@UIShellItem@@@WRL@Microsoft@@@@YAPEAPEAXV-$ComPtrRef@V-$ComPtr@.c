/*
 * XREFs of ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIShellItem@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIShellItem@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180493438
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IShellItem>>(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(a1);
  return a1;
}
