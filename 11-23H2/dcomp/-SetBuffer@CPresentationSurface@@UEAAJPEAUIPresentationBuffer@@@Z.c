/*
 * XREFs of ?SetBuffer@CPresentationSurface@@UEAAJPEAUIPresentationBuffer@@@Z @ 0x1801B0580
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CPresentationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800A7A8C (-Lock@CPresentationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AAC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??4?$com_ptr_t@VCPresentationBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCPresentationBuffer@@@Z @ 0x1801AF0EC (--4-$com_ptr_t@VCPresentationBuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCPresentat.c)
 */

__int64 __fastcall CPresentationSurface::SetBuffer(CPresentationSurface *this, struct IPresentationBuffer *a2)
{
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  CPresentationManager::Lock(*((_QWORD *)this + 3), (__int64)&v5);
  wil::com_ptr_t<CPresentationBuffer,wil::err_returncode_policy>::operator=((__int64 *)this + 8, (__int64)a2);
  *((_BYTE *)this + 74) = 1;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v5);
  return 0LL;
}
