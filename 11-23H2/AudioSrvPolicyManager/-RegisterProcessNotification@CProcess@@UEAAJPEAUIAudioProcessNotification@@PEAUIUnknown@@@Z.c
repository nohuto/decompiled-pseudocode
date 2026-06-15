/*
 * XREFs of ?RegisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z @ 0x180028870
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F510 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x180026DE0 (-GetNode@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBV?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180029F44 (-SetAt@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcess::RegisterProcessNotification(
        CProcess *this,
        struct IAudioProcessNotification *a2,
        struct IUnknown *a3)
{
  struct IUnknown *v3; // rsi
  unsigned int v5; // edi
  __int64 result; // rax
  unsigned int *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+38h] [rbp-40h] BYREF
  ATL::CAtlException *v10; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+80h] [rbp+8h] BYREF
  int v12; // [rsp+88h] [rbp+10h] BYREF
  struct IUnknown *v13; // [rsp+90h] [rbp+18h] BYREF
  struct IAudioProcessNotification *v14; // [rsp+98h] [rbp+20h] BYREF

  v13 = a3;
  v3 = a3;
  v5 = 0;
  v14 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAudioProcessNotification *))(*(_QWORD *)a2 + 8LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 592));
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 592);
  if ( ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::GetNode(
         (__int64)this + 632,
         (unsigned int *)&v13,
         &v12,
         (unsigned int *)&v11,
         &v9) )
  {
    goto LABEL_8;
  }
  try
  {
    v5 = 0;
    ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::SetAt(
      (char *)this + 632,
      &v13,
      &v14);
  }
  catch ( ATL::CAtlException *v10 )
  {
    v7 = (unsigned int *)v10;
    if ( *(_DWORD *)v10 == -1073741571 )
      _o__resetstkoflw();
    v11 = *v7;
    v5 = v11;
    if ( v11 >= 0 )
    {
      v3 = v13;
      goto LABEL_7;
    }
LABEL_8:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v8);
    wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v14);
    result = v5;
  }
LABEL_7:
  ((void (__fastcall *)(struct IUnknown *))v3->lpVtbl->AddRef)(v3);
  goto LABEL_8;
}
