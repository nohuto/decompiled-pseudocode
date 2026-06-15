/*
 * XREFs of ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18002EF7C
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18002F7CC (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000A130 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800113F0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_d @ 0x18001F3E8 (WPP_SF_d.c)
 *     ?Cleanup@CProcess@@QEAAJH@Z @ 0x180026238 (-Cleanup@CProcess@@QEAAJH@Z.c)
 *     ?Find@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCProcess@@PEAU3@@Z @ 0x180026A90 (-Find@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEBAPEAU__POSITION@@A.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800290A0 (-RemoveAt@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RemoveProcess(CApplicationManager *this, struct CProcess *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  _QWORD *v5; // r12
  struct CProcess *v7; // [rsp+78h] [rbp+10h] BYREF
  char *v8; // [rsp+80h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+88h] [rbp+20h] BYREF

  v7 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v9 = v4;
  v5 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::Find((_QWORD *)this + 16, &v7);
  if ( v5 )
  {
    v8 = (char *)this + 120;
    AcquireSRWLockExclusive((PSRWLOCK)this + 15);
    ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::RemoveAt((_QWORD *)this + 16, v5);
    if ( this != (CApplicationManager *)-120LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 15);
    if ( a2 )
    {
      CProcess::Cleanup(a2, 0);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)a2);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
  return 0LL;
}
