/*
 * XREFs of ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180015ED8
 * Callers:
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180018D28 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_4f6995f726a64759246c4e881da68fc8__void_::_Do_call @ 0x18001D460 (std--_Func_impl_no_alloc__lambda_4f6995f726a64759246c4e881da68fc8__void_--_Do_call.c)
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001FA40 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18001FF3C (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180020BE8 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::Category(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // ebx
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // r8d

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v3 = 4;
  if ( *(_DWORD *)(a1 + 612) )
  {
    v3 = *(_DWORD *)(a1 + 616);
  }
  else
  {
    v4 = *(_QWORD **)(a1 + 72);
    while ( v4 )
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      if ( !*(_DWORD *)(v5 + 416) || *(_QWORD *)(v5 + 360) )
      {
        v6 = *(_DWORD *)(v5 + 480);
        v7 = v6 ? *(_DWORD *)(v5 + 484) : *(_DWORD *)(v5 + 312);
        if ( v7 < v3 )
        {
          if ( v6 )
            v3 = *(_DWORD *)(v5 + 484);
          else
            v3 = *(_DWORD *)(v5 + 312);
        }
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v3;
}
