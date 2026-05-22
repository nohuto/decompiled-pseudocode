/*
 * XREFs of ?SetTransform@CPresentationSurface@@UEAAJPEAUPresentationTransform@@@Z @ 0x1801B0810
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CPresentationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800A7A8C (-Lock@CPresentationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AAC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

__int64 __fastcall CPresentationSurface::SetTransform(CPresentationSurface *this, struct PresentationTransform *a2)
{
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  CPresentationManager::Lock(*((_QWORD *)this + 3), (__int64)&v5);
  if ( *((float *)this + 30) != *(float *)a2
    || *((float *)this + 31) != *((float *)a2 + 1)
    || *((float *)this + 32) != *((float *)a2 + 2)
    || *((float *)this + 33) != *((float *)a2 + 3)
    || *((float *)this + 34) != *((float *)a2 + 4)
    || *((float *)this + 35) != *((float *)a2 + 5) )
  {
    *((_DWORD *)this + 30) = *(_DWORD *)a2;
    *((_DWORD *)this + 31) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 32) = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 33) = *((_DWORD *)a2 + 3);
    *((_DWORD *)this + 34) = *((_DWORD *)a2 + 4);
    *((_DWORD *)this + 35) = *((_DWORD *)a2 + 5);
    *((_BYTE *)this + 75) = 1;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v5);
  return 0LL;
}
