/*
 * XREFs of ?Register@ApplicationViewEventRegistration@details@AppViewEventHelpers@@UEAAJPEAUIApplicationViewCollection@@@Z @ 0x180081A00
 * Callers:
 *     <none>
 * Callees:
 *     ??$make_unique@VSmartCookie@@$$V$0A@@std@@YA?AV?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@0@XZ @ 0x180081A9C (--$make_unique@VSmartCookie@@$$V$0A@@std@@YA-AV-$unique_ptr@VSmartCookie@@U-$default_delete@VSma.c)
 *     ??$?4U?$default_delete@VSmartCookie@@@std@@$0A@@?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180081B64 (--$-4U-$default_delete@VSmartCookie@@@std@@$0A@@-$unique_ptr@VSmartCookie@@U-$default_delete@VSm.c)
 *     ??$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVApplicationViewEventRegistration@details@AppViewEventHelpers@@@SmartCookie@@QEAAJPEAUIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@EAAJK@ZPEAVApplicationViewEventRegistration@details@AppViewEventHelpers@@@Z @ 0x180081BA4 (--$Register@UIApplicationViewCollection@@P81@EAAJPEAUIApplicationViewChangeListener@@PEAK@ZP81@E.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppViewEventHelpers::details::ApplicationViewEventRegistration::Register(
        RTL_SRWLOCK *this,
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
      wistd::function<long (unsigned long)>::~function<long (unsigned long)>(v5);
      operator delete(v5, 0x80uLL);
    }
    return v9;
  }
  else
  {
    AcquireSRWLockExclusive(this + 7);
    std::unique_ptr<SmartCookie>::operator=<std::default_delete<SmartCookie>,0>(&this[6], &v14);
    if ( this != (RTL_SRWLOCK *)-56LL )
      ReleaseSRWLockExclusive(this + 7);
    v10 = v14;
    if ( v14 )
    {
      SmartCookie::Unregister(v14);
      wistd::function<long (unsigned long)>::~function<long (unsigned long)>(v10);
      operator delete(v10, 0x80uLL);
    }
    return 0LL;
  }
}
