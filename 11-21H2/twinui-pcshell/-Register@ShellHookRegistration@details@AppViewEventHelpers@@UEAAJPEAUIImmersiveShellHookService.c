/*
 * XREFs of ?Register@ShellHookRegistration@details@AppViewEventHelpers@@UEAAJPEAUIImmersiveShellHookService@@@Z @ 0x180455390
 * Callers:
 *     <none>
 * Callees:
 *     ??$?4U?$default_delete@VSmartCookie@@@std@@$0A@@?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004E610 (--$-4U-$default_delete@VSmartCookie@@@std@@$0A@@-$unique_ptr@VSmartCookie@@U-$default_delete@VSm.c)
 *     ??$make_unique@VSmartCookie@@$$V$0A@@std@@YA?AV?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@0@XZ @ 0x18004E9EC (--$make_unique@VSmartCookie@@$$V$0A@@std@@YA-AV-$unique_ptr@VSmartCookie@@U-$default_delete@VSma.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ @ 0x1800AA928 (--1-$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@ZPEB_KIPEAVShellHookRegistration@details@AppViewEventHelpers@@@SmartCookie@@QEAAJPEAUIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@Z1IPEAVShellHookRegistration@details@AppViewEventHelpers@@@Z @ 0x1804532F0 (--$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewEventHelpers::details::ShellHookRegistration::Register(
        AppViewEventHelpers::details::ShellHookRegistration *this,
        struct IImmersiveShellHookService *a2)
{
  struct IImmersiveShellHookService *v4; // rdx
  SmartCookie *v5; // rbx
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // edi
  SmartCookie *v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  SmartCookie *v12; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v13; // [rsp+68h] [rbp+20h] BYREF

  std::make_unique<SmartCookie,,0>(&v12);
  v4 = a2;
  v5 = v12;
  v7 = SmartCookie::Register<IImmersiveShellHookService,long (IImmersiveShellHookService::*)(unsigned __int64 const *,unsigned int,IImmersiveShellHookNotification *,unsigned long *),long (IImmersiveShellHookService::*)(unsigned long),unsigned __int64 const *,unsigned int,AppViewEventHelpers::details::ShellHookRegistration *>(
         (__int64)v12,
         (__int64)v4,
         v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    wil::AcquireSRWLockExclusive(&v13, (RTL_SRWLOCK *)this + 7);
    std::unique_ptr<SmartCookie>::operator=<std::default_delete<SmartCookie>,0>((SmartCookie **)this + 6, &v12);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v13);
    v10 = v12;
    if ( v12 )
    {
      SmartCookie::Unregister(v12);
      wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>((__int64)v10);
      operator delete(v10);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (__int64)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewEventHelpers.h",
      (const char *)(unsigned int)v7);
    if ( v5 )
    {
      SmartCookie::Unregister(v5);
      wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>((__int64)v5);
      operator delete(v5);
    }
    return v8;
  }
}
