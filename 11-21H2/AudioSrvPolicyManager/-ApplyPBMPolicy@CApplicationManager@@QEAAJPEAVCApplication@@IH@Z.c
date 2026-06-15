/*
 * XREFs of ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001F2CC
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180015950 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180017C80 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     std::_Func_impl_no_alloc__lambda_4f6995f726a64759246c4e881da68fc8__void_::_Do_call @ 0x18001D460 (std--_Func_impl_no_alloc__lambda_4f6995f726a64759246c4e881da68fc8__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_::_Do_call @ 0x18001D5E0 (std--_Func_impl_no_alloc__lambda_b373bd1a9b8e3a57f3542cd9188d3fed__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_e5b57c815c7e6daab9defd929b9a5039__void_::_Do_call @ 0x18001D6B0 (std--_Func_impl_no_alloc__lambda_e5b57c815c7e6daab9defd929b9a5039__void_--_Do_call.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18001F3D0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180020BE8 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180024D08 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180031D70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18001578C (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180016B1C (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x18001F894 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::ApplyPBMPolicy(
        CApplicationManager *this,
        struct CApplication *a2,
        unsigned int a3,
        int a4)
{
  CApplicationManager *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // r14
  unsigned int v9; // edi
  int v11; // [rsp+28h] [rbp-30h]
  unsigned int v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+34h] [rbp-24h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+38h] [rbp-20h]
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v7 = this;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v14 = v8;
  CApplicationManager::GetApplicationPBMStatus(
    v7,
    a2,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v13,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v12,
    (enum _PLM_EXEMPTION *)&v15);
  v11 = a4;
  v9 = v12;
  LODWORD(v7) = v13;
  CApplication::ExecutePBMActions((__int64)a2, v13, v12, v15, a3, v11);
  if ( !(_DWORD)v7 && !v9 )
  {
    if ( v15 == 1 )
    {
      *(_QWORD *)((char *)a2 + 620) = 0LL;
      *(_QWORD *)((char *)a2 + 628) = 0LL;
      *(_QWORD *)((char *)a2 + 636) = 0LL;
      *((_DWORD *)a2 + 161) = 1;
      CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(a2);
    }
    else if ( *((_DWORD *)a2 + 155) != 6 )
    {
      *((_DWORD *)a2 + 155) = 6;
      *((_QWORD *)a2 + 78) = 1LL;
      *((_QWORD *)a2 + 79) = 1LL;
    }
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
