/*
 * XREFs of ??1?$ComPtr@VJointDivider@@@WRL@Microsoft@@QEAA@XZ @ 0x18050E1D8
 * Callers:
 *     _ChromeManager_CreateInstance_::_1_::dtor$0 @ 0x18022271A (_ChromeManager_CreateInstance_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ChromeManager_ChromeManager_IUnknown___&__::_1_::dtor$1 @ 0x18022272C (_Microsoft--WRL--Details--MakeAndInitialize_ChromeManager_ChromeManager_IUnknown___-__--_1_--dto.c)
 *     _CWRLImpWndProc_JointDivider_::s_WndProcBase_::_1_::dtor$0 @ 0x180522503 (_CWRLImpWndProc_JointDivider_--s_WndProcBase_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<JointDivider>::~ComPtr<JointDivider>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<ChromeManager>::InternalRelease(a1);
}
