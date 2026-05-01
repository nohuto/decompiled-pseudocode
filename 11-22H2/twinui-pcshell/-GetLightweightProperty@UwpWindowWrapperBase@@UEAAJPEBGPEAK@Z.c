/*
 * XREFs of ?GetLightweightProperty@UwpWindowWrapperBase@@UEAAJPEBGPEAK@Z @ 0x1804F0FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z @ 0x1804F3690 (-GetProperty@LightweightPropertySet@@QEAAJPEBGPEAK@Z.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetLightweightProperty(
        UwpWindowWrapperBase *this,
        const unsigned __int16 *a2,
        unsigned int *a3)
{
  __int64 v6; // rcx
  int Property; // eax
  const char *v8; // r9
  unsigned int v9; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+30h] [rbp+8h]

  v6 = *((_QWORD *)this + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 216LL))(v6);
    Property = LightweightPropertySet::GetProperty((UwpWindowWrapperBase *)((char *)this + 200), a2, a3);
    v9 = Property;
    if ( Property >= 0 )
    {
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      result = 0LL;
    }
    else if ( Property == -2147023728 )
    {
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      result = 2147943568LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x169,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)Property);
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      result = v9;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x16C,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v8);
  }
  return result;
}
