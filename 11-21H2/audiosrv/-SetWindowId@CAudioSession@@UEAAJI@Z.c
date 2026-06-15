/*
 * XREFs of ?SetWindowId@CAudioSession@@UEAAJI@Z @ 0x180002BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?SetWindowId@CAudioStream@@QEAAXI@Z @ 0x1800E5C6C (-SetWindowId@CAudioStream@@QEAAXI@Z.c)
 */

__int64 __fastcall CAudioSession::SetWindowId(CAudioSession *this, unsigned int a2)
{
  char *v2; // rbx
  CAudioStream **v5; // rbp
  CAudioStream **i; // rbx
  char *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 64;
  *((_DWORD *)this + 52) = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v5 = (CAudioStream **)*((_QWORD *)this + 15);
  v8 = v2;
  for ( i = (CAudioStream **)*((_QWORD *)this + 14); i != v5; ++i )
    CAudioStream::SetWindowId(*i, a2);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v8);
  return 0LL;
}
