/*
 * XREFs of ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x18002EC74
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18002D32C (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18002E76C (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113A0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800144C4 (-FreeNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAXPEAV.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreStartContext@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001DAF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioStreamPreS.c)
 *     WPP_SF_d @ 0x18001F1F8 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RemoveApplication(CApplicationManager *this, struct CApplication **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD **i; // rdx
  _QWORD **v6; // r9
  _QWORD **v7; // rax
  _QWORD *v8; // rax
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v10 = v4;
  for ( i = (_QWORD **)*((_QWORD *)this + 9); i; i = (_QWORD **)*i )
  {
    if ( i[2] == (_QWORD *)*a2 )
    {
      v6 = i + 1;
      v7 = (_QWORD **)*i;
      if ( i == *((_QWORD ***)this + 9) )
        *((_QWORD *)this + 9) = v7;
      else
        **v6 = v7;
      v8 = *v6;
      if ( i == *((_QWORD ***)this + 10) )
        *((_QWORD *)this + 10) = v8;
      else
        (*i)[1] = v8;
      ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::FreeNode((__int64)this + 72, i);
      break;
    }
  }
  if ( *a2 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioStreamPreStartContext>::Release(
      (__int64)*a2,
      (volatile int *)i);
    *a2 = 0LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
  return 0LL;
}
