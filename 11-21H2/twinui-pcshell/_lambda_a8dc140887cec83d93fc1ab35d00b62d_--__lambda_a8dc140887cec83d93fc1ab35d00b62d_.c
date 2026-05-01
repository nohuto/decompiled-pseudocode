/*
 * XREFs of _lambda_a8dc140887cec83d93fc1ab35d00b62d_::__lambda_a8dc140887cec83d93fc1ab35d00b62d_ @ 0x1801AF4B4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a8dc140887cec83d93fc1ab35d00b62d___::_CTaskWrapper__lambda_a8dc140887cec83d93fc1ab35d00b62d___ @ 0x1801AF658 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a8dc140887cec83d93fc1ab35d00b62d___--_CTask.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180463A5C (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180171890 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18045AFDC (--1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_a8dc140887cec83d93fc1ab35d00b62d_::__lambda_a8dc140887cec83d93fc1ab35d00b62d_(__int64 *a1)
{
  std::_Ref_count_base *v2; // rcx

  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated((TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)(a1 + 5));
  v2 = (std::_Ref_count_base *)a1[4];
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 1);
}
