/*
 * XREFs of ?Register@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x18004E860
 * Callers:
 *     <none>
 * Callees:
 *     ??$?4U?$default_delete@VSmartCookie@@@std@@$0A@@?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18004E610 (--$-4U-$default_delete@VSmartCookie@@@std@@$0A@@-$unique_ptr@VSmartCookie@@U-$default_delete@VSm.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVApplicationViewEventRegistration@details@AppViewEventHelpers@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVApplicationViewEventRegistration@details@AppViewEventHelpers@@@Z @ 0x18004E8EC (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@E.c)
 *     ??$make_unique@VSmartCookie@@$$V$0A@@std@@YA?AV?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@0@XZ @ 0x18004E9EC (--$make_unique@VSmartCookie@@$$V$0A@@std@@YA-AV-$unique_ptr@VSmartCookie@@U-$default_delete@VSma.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ @ 0x1800AA928 (--1-$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewEventHelpers::details::ApplicationViewEventRegistration::Register(
        SmartCookie **this,
        struct IApplicationViewCollection *a2)
{
  int v2; // ebx
  int v4; // edx
  SmartCookie *v5; // rbx
  int v6; // r8d
  int v7; // r9d
  int v8; // eax
  unsigned int v9; // edi
  SmartCookie *v10; // rbx
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  SmartCookie *v14; // [rsp+50h] [rbp+18h] BYREF
  char v15; // [rsp+58h] [rbp+20h] BYREF

  v2 = (int)a2;
  std::make_unique<SmartCookie,,0>(&v14);
  v4 = v2;
  v5 = v14;
  v8 = SmartCookie::Register<IApplicationViewCollection,long (IApplicationViewCollection::*)(IApplicationViewChangeListener *,unsigned long *),long (IApplicationViewCollection::*)(unsigned long),AppViewEventHelpers::details::ApplicationViewEventRegistration *>(
         (_DWORD)v14,
         v4,
         v6,
         v7,
         (__int64)this);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (unsigned int)"pcshell\\private\\shell\\inc\\AppViewDataSource\\AppViewEventHelpers.h",
      (const char *)(unsigned int)v8,
      v12);
    if ( v5 )
    {
      SmartCookie::Unregister(v5);
      wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>(v5);
      operator delete(v5, 0x80uLL);
    }
    return v9;
  }
  else
  {
    wil::AcquireSRWLockExclusive(&v15, this + 7);
    std::unique_ptr<SmartCookie>::operator=<std::default_delete<SmartCookie>,0>(this + 6, &v14);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v15);
    v10 = v14;
    if ( v14 )
    {
      SmartCookie::Unregister(v14);
      wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>(v10);
      operator delete(v10, 0x80uLL);
    }
    return 0LL;
  }
}
