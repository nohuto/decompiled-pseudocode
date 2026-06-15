/*
 * XREFs of ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180021DB0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_::_Do_call @ 0x18000DF00 (std--_Func_impl_no_alloc__lambda_7be77f52425797de9629a1559daf9291__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_::_Do_call @ 0x18000E050 (std--_Func_impl_no_alloc__lambda_7d69d41627b1d936e688f09992cbd28e__void_--_Do_call.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180021F00 (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z @ 0x180022044 (-RegisterSession@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@@Z.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180022130 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180022214 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180022928 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_::_Do_call @ 0x180028060 (std--_Func_impl_no_alloc__lambda_574d5d0e55cfdb3d7e70cee17ad133ad__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Do_call @ 0x1800281E0 (std--_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_--_Do_call.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800095B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18000E914 (WPP_SF_d.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x1800189CC (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001F460 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x1800222F8 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180024D08 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?TsSessionIdIsMuted@@YA_NK@Z @ 0x18002F448 (-TsSessionIdIsMuted@@YA_NK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::Register(CApplicationManager *this, struct CProcess *a2)
{
  int Application; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  struct CApplication *v6; // r14
  int v8; // [rsp+70h] [rbp+8h] BYREF
  struct CApplication *v9; // [rsp+78h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+80h] [rbp+18h]

  Application = 0;
  v9 = 0LL;
  v8 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v10 = v5;
  if ( !*((_QWORD *)a2 + 28) )
  {
    Application = CApplicationManager::GetApplication(
                    this,
                    *((const unsigned __int16 **)a2 + 22),
                    *((_QWORD *)a2 + 26),
                    *((_DWORD *)a2 + 41),
                    &v9,
                    1,
                    &v8);
    if ( Application < 0 || (v6 = v9, Application = CApplication::LinkProcess(v9, a2), Application < 0) )
    {
      if ( v8 )
        CApplicationManager::RemoveApplication(this, &v9);
      if ( Application < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x10u,
            &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids,
            Application);
        }
        AudPolicyLogError("CApplicationManager::Register", 695, Application);
      }
    }
    else if ( TsSessionIdIsMuted(*((_DWORD *)a2 + 41)) && !*((_DWORD *)v6 + 164) )
    {
      CApplicationManager::SilenceAndRevokePLMExemption(this, v6);
    }
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return (unsigned int)Application;
}
