/*
 * XREFs of _lambda_e93b07e05eb73953e8a67c4fda015070_::__lambda_e93b07e05eb73953e8a67c4fda015070_ @ 0x1800A3564
 * Callers:
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800A2F28 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e93b07e05eb73953e8a67c4fda015070___::_scalar_deleting_destructor_ @ 0x1800A3280 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e93b07e05eb73953e8a67c4fda015070___--_scala.c)
 * Callees:
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x1800A35A0 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_e93b07e05eb73953e8a67c4fda015070_::__lambda_e93b07e05eb73953e8a67c4fda015070_(__int64 a1)
{
  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)(a1 + 32));
  WindowsDeleteString(*(HSTRING *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)a1);
}
