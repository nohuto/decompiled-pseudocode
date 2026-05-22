/*
 * XREFs of ??1CPresentationBuffer@@MEAA@XZ @ 0x1801AF034
 * Callers:
 *     ??_ECPresentationBuffer@@MEAAPEAXI@Z @ 0x1801AF160 (--_ECPresentationBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RemoveBuffer@CPresentationManager@@QEAAXPEAUIUnknown@@@Z @ 0x1800A75FC (-RemoveBuffer@CPresentationManager@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?Lock@CPresentationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800A7A8C (-Lock@CPresentationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AAC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CPresentationBuffer::~CPresentationBuffer(CPresentationBuffer *this)
{
  CPresentationManager **v2; // rdi
  int v3; // eax
  char *v4; // rcx
  const void *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CPresentationManager **)((char *)this + 16);
  *(_QWORD *)this = &CPresentationBuffer::`vftable';
  CPresentationManager::Lock(*((_QWORD *)this + 2), (__int64)&v6);
  if ( (*((_BYTE *)this + 48) & 1) != 0 )
  {
    v3 = NtFlipObjectRemovePoolBuffer(*((_QWORD *)*v2 + 13), (char *)this + 32);
    if ( v3 < 0 )
      ModuleFailFastForHRESULT(v3, retaddr);
  }
  if ( (*((_BYTE *)this + 48) & 2) != 0 )
    CPresentationManager::RemoveBuffer(*v2, *((struct IUnknown **)this + 5));
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v6);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 5);
  v4 = (char *)*((_QWORD *)this + 3);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)v2);
}
