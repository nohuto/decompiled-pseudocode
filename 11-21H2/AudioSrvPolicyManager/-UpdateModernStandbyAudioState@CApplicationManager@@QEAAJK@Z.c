/*
 * XREFs of ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z @ 0x18002531C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_db9c8d060b7fb007a749f981c7fe4076__void_::_Do_call @ 0x180025560 (std--_Func_impl_no_alloc__lambda_db9c8d060b7fb007a749f981c7fe4076__void_--_Do_call.c)
 * Callees:
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001F3D0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x1800253E0 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::UpdateModernStandbyAudioState(CApplicationManager *this, unsigned int a2)
{
  CApplicationManager *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx

  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !*((_BYTE *)v3 + 24) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Fu, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, a2);
    }
    CApplicationManager::UpdateVolumeForAllAppsInSession(v3, a2, 3LL);
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v3, a2, 0);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
