/*
 * XREFs of ?RegisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z @ 0x180019D70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x180017720 (-GetNode@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBV?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18001BEEC (-SetAt@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CProcess::RegisterProcessNotification(
        CProcess *this,
        struct IAudioProcessNotification *a2,
        struct IUnknown *a3)
{
  struct IUnknown *v3; // r14
  struct IAudioProcessNotification *v4; // rbx
  unsigned int v6; // esi
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  __int64 result; // rax
  unsigned int *v9; // rbx
  _QWORD v10[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v11; // [rsp+48h] [rbp-40h] BYREF
  ATL::CAtlException *v12; // [rsp+50h] [rbp-38h] BYREF
  int v13; // [rsp+90h] [rbp+8h] BYREF
  struct IAudioProcessNotification *v14; // [rsp+98h] [rbp+10h]
  struct IUnknown *v15; // [rsp+A0h] [rbp+18h] BYREF
  int v16; // [rsp+A8h] [rbp+20h] BYREF

  v15 = a3;
  v14 = a2;
  v3 = a3;
  v4 = a2;
  v6 = 0;
  v10[0] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAudioProcessNotification *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 592);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 592));
  v10[1] = (char *)this + 592;
  if ( ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::GetNode(
         (__int64)this + 632,
         (unsigned int *)&v15,
         &v16,
         (unsigned int *)&v13,
         &v11) )
  {
    goto LABEL_8;
  }
  try
  {
    v6 = 0;
    ATL::CAtlMap<IUnknown *,wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<wil::com_ptr_t<IAudioProcessNotification,wil::err_returncode_policy>>>::SetAt(
      (char *)this + 632,
      &v15,
      v10);
  }
  catch ( ATL::CAtlException *v12 )
  {
    v9 = (unsigned int *)v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _o__resetstkoflw();
    v13 = *v9;
    v6 = v13;
    v4 = v14;
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 592);
    if ( v13 >= 0 )
    {
      v3 = v15;
      goto LABEL_7;
    }
LABEL_8:
    if ( v7 )
      LeaveCriticalSection(v7);
    if ( v4 )
      (*(void (__fastcall **)(struct IAudioProcessNotification *))(*(_QWORD *)v4 + 16LL))(v4);
    result = v6;
  }
LABEL_7:
  ((void (__fastcall *)(struct IUnknown *))v3->lpVtbl->AddRef)(v3);
  goto LABEL_8;
}
