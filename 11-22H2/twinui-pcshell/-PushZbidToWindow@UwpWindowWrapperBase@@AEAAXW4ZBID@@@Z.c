/*
 * XREFs of ?PushZbidToWindow@UwpWindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x1801294DC
 * Callers:
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18009FAF0 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?SetWindowBand@UwpWindowWrapperBase@@UEAAJK@Z @ 0x180129470 (-SetWindowBand@UwpWindowWrapperBase@@UEAAJK@Z.c)
 *     ?SetWindowOwner@UwpWindowWrapperBase@@UEAAJPEAUHWND__@@@Z @ 0x1804F1E70 (-SetWindowOwner@UwpWindowWrapperBase@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall UwpWindowWrapperBase::PushZbidToWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  *(_DWORD *)(a1 + 508) = a2;
  v4 = *(int *)(a1 + 296);
  if ( *(_DWORD *)(a1 + 296) )
  {
    if ( a2 )
    {
      v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 280) + 160LL))(
                       *(_QWORD *)(a1 + 280),
                       &v6);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v5 + 32LL))(*v5, v4, 0LL, a2);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v6);
    }
  }
}
