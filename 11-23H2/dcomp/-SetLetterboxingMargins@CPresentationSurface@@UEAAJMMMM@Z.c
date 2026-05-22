/*
 * XREFs of ?SetLetterboxingMargins@CPresentationSurface@@UEAAJMMMM@Z @ 0x1801B06A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CPresentationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800A7A8C (-Lock@CPresentationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AAC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

__int64 __fastcall CPresentationSurface::SetLetterboxingMargins(
        CPresentationSurface *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  float v7; // xmm2_4
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+60h] [rbp+8h] BYREF

  CPresentationManager::Lock(*((_QWORD *)this + 3), (__int64)&v9);
  v7 = a5;
  if ( *((float *)this + 39) != a2
    || *((float *)this + 40) != a3
    || *((float *)this + 41) != a4
    || *((float *)this + 42) != a5 )
  {
    *((float *)this + 39) = a2;
    *((float *)this + 40) = a3;
    *((float *)this + 41) = a4;
    *((float *)this + 42) = v7;
    *((_BYTE *)this + 76) = 1;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v9);
  return 0LL;
}
