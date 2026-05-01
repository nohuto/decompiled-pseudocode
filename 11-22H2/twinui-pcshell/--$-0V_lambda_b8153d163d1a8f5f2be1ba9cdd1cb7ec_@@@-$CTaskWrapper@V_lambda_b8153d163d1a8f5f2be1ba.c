/*
 * XREFs of ??$?0V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@?$CTaskWrapper@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Windows@@QEAA@$$QEAV_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@Z @ 0x1805F85D4
 * Callers:
 *     ??$QueueTask@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@Z @ 0x1805F8E50 (--$QueueTask@V_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@$$QEAV01@@Z @ 0x1805F9870 (--0-$tuple@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@W4VirtualDesktopSwitchType@@@std@@QEAA@$$.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_>::CTaskWrapper<_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_>(
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
  std::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>::tuple<Microsoft::WRL::ComPtr<IVirtualDesktop>,enum VirtualDesktopSwitchType>(
    a1 + 4,
    a2 + 2);
  result = a1;
  *a1 = &Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_b8153d163d1a8f5f2be1ba9cdd1cb7ec_>::`vftable';
  return result;
}
