/*
 * XREFs of _lambda_825306615c33696f43f5a813d6c29089_::__lambda_825306615c33696f43f5a813d6c29089_ @ 0x180206764
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089___::_CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089___ @ 0x180206938 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_825306615c33696f43f5a813d6c29089___--_CTask.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ @ 0x1805154A0 (-PreloadInputApp@TouchKeyboardExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802DAA0A (--1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_825306615c33696f43f5a813d6c29089_::__lambda_825306615c33696f43f5a813d6c29089_(__int64 *a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)(a1 + 2));
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
