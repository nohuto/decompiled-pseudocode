/*
 * XREFs of ?GetPropertyAsInt@UwpWindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAH@Z @ 0x180414CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetPropertyAsInt(UwpWindowWrapperBase *this, HSTRING a2, int *a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  const WCHAR *StringRawBuffer; // rax
  const WCHAR *v9; // rax
  const char *v10; // r9
  __int64 result; // rax
  const WCHAR *v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v14; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  *a3 = 0;
  v7 = *((_QWORD *)this + 33);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7);
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"BackVisible", -1, 1) == 2 )
    {
      v6 = *((_DWORD *)this + 112);
LABEL_11:
      *a3 = v6;
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v14);
      return 0LL;
    }
    v9 = WindowsGetStringRawBuffer(a2, 0LL);
    if ( CompareStringOrdinal(v9, -1, L"WindowFrameStyle", -1, 1) == 2 )
    {
      if ( *((_BYTE *)this + 460) )
      {
        v6 = *((_DWORD *)this + 114);
        goto LABEL_11;
      }
LABEL_7:
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v14);
      return 2147943568LL;
    }
    v12 = WindowsGetStringRawBuffer(a2, 0LL);
    if ( CompareStringOrdinal(v12, -1, L"TitleBarVisible", -1, 1) == 2 )
    {
      if ( *((_BYTE *)this + 461) )
      {
        LOBYTE(v6) = *((_BYTE *)this + 462) == 0;
        goto LABEL_11;
      }
      goto LABEL_7;
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v14);
    result = 2147942487LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2F8,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v10);
  }
  return result;
}
