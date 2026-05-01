/*
 * XREFs of CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___::CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___ @ 0x1801D87A4
 * Callers:
 *     CreateAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___ @ 0x1801D81E8 (CreateAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800C8E70 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1803CC150 (-InternalAddRef@-$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___::CAsyncCallbackWithLambda__lambda_d87bb6e841689a33a8176d79960f4277___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>(a1);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)a2;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 24);
  Microsoft::WRL::ComPtr<CApplicationViewManager>::InternalAddRef();
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)a1 = off_1807C4000;
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
