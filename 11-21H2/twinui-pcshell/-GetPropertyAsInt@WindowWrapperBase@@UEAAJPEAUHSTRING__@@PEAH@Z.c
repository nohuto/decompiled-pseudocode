/*
 * XREFs of ?GetPropertyAsInt@WindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAH@Z @ 0x180096B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::GetPropertyAsInt(WindowWrapperBase *this, HSTRING a2, int *a3)
{
  int v6; // ebx
  const WCHAR *StringRawBuffer; // rax
  const WCHAR *v9; // rax
  const WCHAR *v10; // rax
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  *a3 = 0;
  (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 34) + 208LL))(*((_QWORD *)this + 34), &v11);
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(StringRawBuffer, -1, L"BackVisible", -1, 1) == 2 )
  {
    v6 = *((_DWORD *)this + 114);
LABEL_3:
    *a3 = v6;
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
    return 0LL;
  }
  v9 = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(v9, -1, L"WindowFrameStyle", -1, 1) == 2 )
  {
    if ( *((_BYTE *)this + 468) )
    {
      v6 = *((_DWORD *)this + 116);
      goto LABEL_3;
    }
    goto LABEL_6;
  }
  v10 = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(v10, -1, L"TitleBarVisible", -1, 1) == 2 )
  {
    if ( *((_BYTE *)this + 469) )
    {
      LOBYTE(v6) = *((_BYTE *)this + 470) == 0;
      goto LABEL_3;
    }
LABEL_6:
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
    return 2147943568LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v11);
  return 2147942487LL;
}
