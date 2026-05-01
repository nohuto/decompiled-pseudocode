/*
 * XREFs of ??1?$ComPtr@VJointDivider@@@WRL@Microsoft@@QEAA@XZ @ 0x1805C6688
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_ChromeManager_ChromeManager_IUnknown___&__::_1_::dtor$1 @ 0x1802BC83B (_Microsoft--WRL--Details--MakeAndInitialize_ChromeManager_ChromeManager_IUnknown___-__--_1_--dto.c)
 *     _ChromeManager_CreateInstance_::_1_::dtor$0 @ 0x1802BCAA9 (_ChromeManager_CreateInstance_--_1_--dtor$0.c)
 *     _CWRLImpWndProc_JointDivider_::s_WndProcBase_::_1_::dtor$0 @ 0x1805DAEB3 (_CWRLImpWndProc_JointDivider_--s_WndProcBase_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<JointDivider>::~ComPtr<JointDivider>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<ChromeManager>::InternalRelease(a1);
}
