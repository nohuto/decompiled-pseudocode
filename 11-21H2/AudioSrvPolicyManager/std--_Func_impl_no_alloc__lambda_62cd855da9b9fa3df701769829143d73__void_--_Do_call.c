/*
 * XREFs of std::_Func_impl_no_alloc__lambda_62cd855da9b9fa3df701769829143d73__void_::_Do_call @ 0x180030F70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x18000E8E8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001F3D0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180024D08 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall std::_Func_impl_no_alloc__lambda_62cd855da9b9fa3df701769829143d73__void_::_Do_call(__int64 a1)
{
  int v1; // r14d
  int v2; // ebp
  CApplicationManager *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  _UNKNOWN **v5; // rcx
  _QWORD *v6; // rbx
  struct CApplication *v7; // rdx
  _QWORD *v8; // r9
  _DWORD *v9; // r8

  v1 = *(_DWORD *)(a1 + 12);
  v2 = *(_DWORD *)(a1 + 8);
  v3 = g_ApplicationManager;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x24u, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids);
      v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x40000000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
    {
      WPP_SF_d((TRACEHANDLE)v5[2], 0x25u, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v1);
      v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
  }
  v6 = (_QWORD *)*((_QWORD *)v3 + 9);
  if ( v6 )
  {
    do
    {
      v7 = (struct CApplication *)v6[2];
      v6 = (_QWORD *)*v6;
      if ( *((_DWORD *)v7 + 53) == v1 && !*((_DWORD *)v7 + 164) )
        CApplicationManager::SilenceAndRevokePLMExemption(v3, v7);
    }
    while ( v6 );
    v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x40000000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
    WPP_SF_d((TRACEHANDLE)v5[2], 0x26u, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, v2);
  v8 = (_QWORD *)*((_QWORD *)v3 + 9);
  while ( v8 )
  {
    v9 = (_DWORD *)v8[2];
    v8 = (_QWORD *)*v8;
    if ( v9[53] == v2 && !v9[163] )
    {
      v9[155] = 0;
      v9[156] = 0;
      v9[157] = 0;
      v9[158] = 0;
      v9[159] = 0;
      v9[160] = 0;
      v9[161] = 1;
    }
  }
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v3, v2, 0);
  if ( v4 )
    LeaveCriticalSection(v4);
}
