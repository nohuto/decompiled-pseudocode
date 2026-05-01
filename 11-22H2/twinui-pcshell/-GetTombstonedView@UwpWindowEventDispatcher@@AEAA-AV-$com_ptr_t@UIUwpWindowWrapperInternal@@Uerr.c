/*
 * XREFs of ?GetTombstonedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x18019BE14
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1800992D0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall UwpWindowEventDispatcher::GetTombstonedView(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rbp
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, __int64 *); // r14
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+68h] [rbp+10h]

  v16 = a2;
  *a2 = 0LL;
  v5 = *(_QWORD **)(a1 + 384);
  v6 = *(_QWORD **)(a1 + 392);
  while ( v5 != v6 )
  {
    v15 = 0LL;
    if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 296LL))(*v5) == a3 )
    {
      v8 = *v5;
      v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v5 + 232LL);
      v10 = v15;
      v15 = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v11 = v9(v8, &v15);
      if ( v11 >= 0 )
      {
        if ( !v15 )
        {
          v12 = *v5;
          v13 = *a2;
          *a2 = v12;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
          return a2;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB8B,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)(unsigned int)v11);
      }
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
    ++v5;
  }
  return a2;
}
