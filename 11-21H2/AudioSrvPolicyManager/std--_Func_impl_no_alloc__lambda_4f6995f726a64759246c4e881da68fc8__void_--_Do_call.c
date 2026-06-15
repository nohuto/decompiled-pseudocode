/*
 * XREFs of std::_Func_impl_no_alloc__lambda_4f6995f726a64759246c4e881da68fc8__void_::_Do_call @ 0x18001D460
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x180013550 (WPP_SF_S.c)
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18001578C (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180015ED8 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x180016270 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001F2CC (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Func_impl_no_alloc__lambda_4f6995f726a64759246c4e881da68fc8__void_::_Do_call(__int64 a1)
{
  __int64 v1; // rbx
  CApplicationManager *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rdi

  v1 = *(_QWORD *)(a1 + 8);
  v2 = g_ApplicationManager;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x23u,
      &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids,
      *(const wchar_t **)(v1 + 24));
  }
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 32);
  EnterCriticalSection(v3);
  if ( *(_DWORD *)(v1 + 620) == 2 )
  {
    *(_DWORD *)(v1 + 620) = 0;
    *(_DWORD *)(v1 + 624) = 0;
    *(_DWORD *)(v1 + 628) = 0;
    *(_DWORD *)(v1 + 632) = 0;
    *(_DWORD *)(v1 + 636) = 0;
    *(_DWORD *)(v1 + 640) = 0;
    *(_DWORD *)(v1 + 644) = 1;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x15u,
      &WPP_d2b18dfaf0d53a5ff7c874f5bc62056c_Traceguids,
      *(const wchar_t **)(v1 + 24));
  }
  if ( (unsigned int)CApplication::Category(v1) != 1 )
  {
    if ( !*(_DWORD *)(v1 + 208) )
      CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption((CApplication *)v1);
    *(_DWORD *)(v1 + 432) = 0;
    CApplicationManager::ApplyPBMPolicy(g_ApplicationManager, (struct CApplication *)v1, 0xD1u, 0);
    CApplication::CleanupGoodFaithExemptionTimer((CApplication *)v1);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
}
