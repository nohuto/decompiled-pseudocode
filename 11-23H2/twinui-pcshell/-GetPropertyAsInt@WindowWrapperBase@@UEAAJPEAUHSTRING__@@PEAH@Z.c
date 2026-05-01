/*
 * XREFs of ?GetPropertyAsInt@WindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAH@Z @ 0x1804EA260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::GetPropertyAsInt(WindowWrapperBase *this, HSTRING a2, int *a3)
{
  __int64 v6; // rcx
  const WCHAR *StringRawBuffer; // rax
  const char *v8; // r9
  int v9; // eax
  const WCHAR *v10; // rax
  __int64 result; // rax
  const WCHAR *v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  *a3 = 0;
  v6 = *((_QWORD *)this + 34);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 208LL))(v6);
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"BackVisible", -1, 1) == 2 )
    {
      v9 = *((_DWORD *)this + 114);
LABEL_13:
      *a3 = v9;
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      return 0LL;
    }
    v10 = WindowsGetStringRawBuffer(a2, 0LL);
    if ( CompareStringOrdinal(v10, -1, L"WindowFrameStyle", -1, 1) == 2 )
    {
      if ( *((_BYTE *)this + 468) )
      {
        v9 = *((_DWORD *)this + 116);
        goto LABEL_13;
      }
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      result = 2147943568LL;
    }
    else
    {
      v12 = WindowsGetStringRawBuffer(a2, 0LL);
      if ( CompareStringOrdinal(v12, -1, L"TitleBarVisible", -1, 1) == 2 )
      {
        if ( *((_BYTE *)this + 469) )
        {
          v9 = *((_BYTE *)this + 470) == 0;
          goto LABEL_13;
        }
        if ( SRWLock )
          ReleaseSRWLockShared(SRWLock);
        result = 2147943568LL;
      }
      else
      {
        if ( SRWLock )
          ReleaseSRWLockShared(SRWLock);
        result = 2147942487LL;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2F3,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v8);
  }
  return result;
}
