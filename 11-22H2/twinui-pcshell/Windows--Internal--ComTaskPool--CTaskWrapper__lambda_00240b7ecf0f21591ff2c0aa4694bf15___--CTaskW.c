/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___::CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15_____lambda_00240b7ecf0f21591ff2c0aa4694bf15___ @ 0x18067FE94
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_00240b7ecf0f21591ff2c0aa4694bf15___ @ 0x18067FF7C (Windows--Internal--ComTaskPool--QueueTask__lambda_00240b7ecf0f21591ff2c0aa4694bf15___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15___::CTaskWrapper__lambda_00240b7ecf0f21591ff2c0aa4694bf15_____lambda_00240b7ecf0f21591ff2c0aa4694bf15___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 2));
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != v4 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  *a1 = off_1807F03C8;
  return a1;
}
