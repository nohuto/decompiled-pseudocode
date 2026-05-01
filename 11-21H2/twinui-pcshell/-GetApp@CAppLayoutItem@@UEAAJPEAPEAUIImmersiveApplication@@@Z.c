/*
 * XREFs of ?GetApp@CAppLayoutItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180618F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180098FE0 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayoutItem::GetApp(RTL_SRWLOCK *this, struct IImmersiveApplication **a2)
{
  RTL_SRWLOCK *v4; // rbx
  struct IImmersiveApplication **v5; // r8
  unsigned int ApplicationFromView; // ebx
  __int64 (__fastcall ***Ptr)(ApplicationViewHelpers *, GUID *, __int64); // rcx
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = this + 3;
  AcquireSRWLockShared(this + 3);
  v9 = v4;
  ApplicationFromView = -2147023728;
  Ptr = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))this[5].Ptr;
  if ( Ptr )
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(Ptr, (struct IApplicationView *)a2, v5);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v9);
  return ApplicationFromView;
}
