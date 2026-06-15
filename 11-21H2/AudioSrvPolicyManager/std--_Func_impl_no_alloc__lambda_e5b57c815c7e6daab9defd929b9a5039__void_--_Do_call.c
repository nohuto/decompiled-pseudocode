/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e5b57c815c7e6daab9defd929b9a5039__void_::_Do_call @ 0x18001D6B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180015FC8 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001F2CC (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Func_impl_no_alloc__lambda_e5b57c815c7e6daab9defd929b9a5039__void_::_Do_call(__int64 a1)
{
  const wchar_t **v1; // rdi
  CApplicationManager *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx

  v1 = *(const wchar_t ***)(a1 + 8);
  v2 = g_ApplicationManager;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v1[3]);
  }
  CApplication::CleanupBCMStartupLatencyGracePeriod((CApplication *)v1);
  CApplicationManager::ApplyPBMPolicy(v2, (struct CApplication *)v1, 0xD1u, 0);
  if ( v3 )
    LeaveCriticalSection(v3);
}
