/*
 * XREFs of CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___::CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___ @ 0x180552D58
 * Callers:
 *     MakeMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___ @ 0x180552CB8 (MakeMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x1800582D8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCall.c)
 */

__int64 __fastcall CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___::CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>(a1);
  *(_QWORD *)a1 = off_1807E2748;
  *(_QWORD *)(a1 + 32) = off_1807E2728;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 56));
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 16);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 64));
  return a1;
}
