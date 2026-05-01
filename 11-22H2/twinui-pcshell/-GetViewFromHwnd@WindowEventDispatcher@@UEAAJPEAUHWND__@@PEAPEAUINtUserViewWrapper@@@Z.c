/*
 * XREFs of ?GetViewFromHwnd@WindowEventDispatcher@@UEAAJPEAUHWND__@@PEAPEAUINtUserViewWrapper@@@Z @ 0x1802D7680
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1804C4488 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?attach@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWrapperInternal@@@Z @ 0x1804CD334 (-attach@-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWr.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowEventDispatcher::GetViewFromHwnd(RTL_SRWLOCK *this, HWND a2, struct INtUserViewWrapper **a3)
{
  unsigned int PropW; // eax
  const char *v6; // r9
  unsigned int v7; // ebx
  RTL_SRWLOCK *v8; // rsi
  __int64 *CachedView; // rax
  __int64 v10; // rdx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, struct INtUserViewWrapper **); // rbx
  bool v12; // di
  int v13; // eax
  __int64 result; // rax
  int v15; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct INtUserViewWrapper **); // [rsp+60h] [rbp+18h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0LL;
  PropW = (unsigned int)GetPropW(a2, L"Microsoft.Windows.WindowFactory.ViewId");
  try
  {
    v7 = PropW;
    if ( PropW )
    {
      v17 = 0LL;
      v8 = this + 32;
      AcquireSRWLockExclusive(this + 32);
      v15 = (_DWORD)this + 256;
      CachedView = (__int64 *)WindowEventDispatcher::GetCachedView(&this[-27], &v18, v7);
      v10 = *CachedView;
      *CachedView = 0LL;
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::attach(&v17, v10);
      v11 = v17;
      v12 = v17 != 0LL;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
      if ( v12 )
      {
        v13 = (**v11)(v11, &GUID_9230a21d_831d_414f_87f1_f0131a16a75a, a3);
        if ( v13 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1815,
            (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
            (const char *)(unsigned int)v13,
            v15);
        if ( v8 )
          ReleaseSRWLockExclusive(v8);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
        return 0LL;
      }
      if ( v8 )
        ReleaseSRWLockExclusive(v8);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
    }
    result = 2147549183LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB8A,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v6);
  }
  return result;
}
