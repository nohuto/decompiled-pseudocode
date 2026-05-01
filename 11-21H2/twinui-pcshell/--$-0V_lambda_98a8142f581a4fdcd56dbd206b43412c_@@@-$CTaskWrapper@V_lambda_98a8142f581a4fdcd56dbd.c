/*
 * XREFs of ??$?0V_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@?$CTaskWrapper@V_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@Z @ 0x18053D854
 * Callers:
 *     ??$QueueTask@V_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@Z @ 0x18053E27C (--$QueueTask@V_lambda_98a8142f581a4fdcd56dbd206b43412c_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$tuple@V?$ComPtr@UIObjectArray@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@@@23@II@std@@QEAA@$$QEAV01@@Z @ 0x18053ED38 (--0-$tuple@V-$ComPtr@UIObjectArray@@@WRL@Microsoft@@V-$ComPtr@UIVirtualDesktop@@@23@II@std@@QEAA.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_98a8142f581a4fdcd56dbd206b43412c_>::CTaskWrapper<_lambda_98a8142f581a4fdcd56dbd206b43412c_>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  std::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>::tuple<Microsoft::WRL::ComPtr<IObjectArray>,Microsoft::WRL::ComPtr<IVirtualDesktop>,unsigned int,unsigned int>(
    a1 + 4,
    a2 + 2);
  result = a1;
  *a1 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_98a8142f581a4fdcd56dbd206b43412c_>::`vftable';
  return result;
}
