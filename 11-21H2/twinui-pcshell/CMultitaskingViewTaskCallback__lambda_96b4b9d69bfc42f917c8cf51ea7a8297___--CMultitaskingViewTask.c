/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___::CMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___ @ 0x18049972C
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___ @ 0x18049968C (MakeMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x18002F254 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___::CMultitaskingViewTaskCallback__lambda_96b4b9d69bfc42f917c8cf51ea7a8297___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>(a1);
  *(_QWORD *)a1 = off_180659AC8;
  *(_QWORD *)(a1 + 32) = off_180659AA8;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 56));
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 64));
  return a1;
}
