/*
 * XREFs of _lambda_127fba945b3ad42759bbeed869c5af3e_::operator() @ 0x18041119C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_127fba945b3ad42759bbeed869c5af3e___::Run @ 0x180416630 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_127fba945b3ad42759bbeed869c5af3e___--.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x180146494 (--$FrameWindowChanged@IAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAPEAUH.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x18040B538 (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 *     ?CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ @ 0x180414714 (-CommitImportanceVector@UwpWindowWrapperBase@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_127fba945b3ad42759bbeed869c5af3e_::operator()(UwpWindowWrapperBase **a1)
{
  __int64 v2; // rcx
  UwpWindowWrapperBase *v3; // rax
  HWND *v4; // rsi
  DWORD WindowThreadProcessId; // eax
  _DWORD *v6; // rax
  UwpWindowWrapperBase *v7; // rcx
  __int64 v8; // rdx
  __int16 v9; // ax
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwProcessId; // [rsp+40h] [rbp+8h] BYREF
  DWORD v16; // [rsp+48h] [rbp+10h] BYREF
  char v17; // [rsp+50h] [rbp+18h] BYREF
  RTL_SRWLOCK *v18; // [rsp+58h] [rbp+20h] BYREF

  v2 = *((_QWORD *)*a1 + 34);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 208LL))(v2);
    v3 = a1[1];
    if ( *((_QWORD *)*a1 + 16) != *(_QWORD *)v3 && ViewManagerInteropTraceLogging::IsEnabled(*(_QWORD *)v3) )
    {
      dwProcessId = 0;
      v4 = (HWND *)a1[1];
      if ( *v4 )
      {
        WindowThreadProcessId = GetWindowThreadProcessId(*v4, &dwProcessId);
        v4 = (HWND *)a1[1];
      }
      else
      {
        WindowThreadProcessId = 0;
      }
      v16 = WindowThreadProcessId;
      v6 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*((_QWORD *)*a1 + 2) + 288LL))(
                       (__int64)*a1 + 16,
                       &v17);
      ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int,HWND__ * &,unsigned long const &,unsigned long &>(
        v6,
        (__int64 *)v4,
        (int *)&v16,
        (int *)&dwProcessId);
    }
    v7 = *a1;
    v8 = *(_QWORD *)a1[1];
    *((_QWORD *)*a1 + 16) = v8;
    if ( (*(_BYTE *)a1[2] & 1) != 0 || !v8 )
      v9 = 0;
    else
      v9 = 128;
    *((_WORD *)v7 + 122) &= ~0x80u;
    *((_WORD *)v7 + 122) |= v9;
    UwpWindowWrapperBase::CommitImportanceVector(v7);
    v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)*a1 + 34) + 256LL))(
            *((_QWORD *)*a1 + 34),
            ((unsigned __int64)*a1 + 16) & -(__int64)(*a1 != 0LL));
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA77,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v10,
        v13);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA79,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v11);
  }
  return result;
}
