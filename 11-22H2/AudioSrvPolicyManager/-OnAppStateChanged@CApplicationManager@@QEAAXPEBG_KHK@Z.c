/*
 * XREFs of ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x18003C254
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_::_Do_call @ 0x18002FD10 (std--_Func_impl_no_alloc__lambda_bc5d681da67d9384ebd56f302790ab0c__void_--_Do_call.c)
 * Callees:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180006EE0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     WPP_SF_Sd @ 0x18002BC84 (WPP_SF_Sd.c)
 *     ?UpdateApplicationState@CApplicationManager@@QEAAJPEBG_KHKPEAPEAVCApplication@@PEAH@Z @ 0x18002F8E8 (-UpdateApplicationState@CApplicationManager@@QEAAJPEBG_KHKPEAPEAVCApplication@@PEAH@Z.c)
 */

void __fastcall CApplicationManager::OnAppStateChanged(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  CApplicationManager *v5; // rbx
  struct CApplication *v10; // [rsp+40h] [rbp-18h] BYREF
  CApplicationManager *v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = this;
  v5 = g_ApplicationManager;
  if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_4eb0c1de174a3401e682efc3753af671_Traceguids, a2, a4);
  }
  LODWORD(v11) = 0;
  v10 = 0LL;
  CApplicationManager::UpdateApplicationState(v5, a2, a3, a4, a5, &v10, (int *)&v11);
  if ( (_DWORD)v11 )
    CApplicationManager::OnApplicationInteractivityChanged(v5, v10);
}
