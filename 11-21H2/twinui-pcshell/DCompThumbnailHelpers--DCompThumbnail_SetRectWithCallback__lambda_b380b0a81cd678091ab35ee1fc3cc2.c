/*
 * XREFs of DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_b380b0a81cd678091ab35ee1fc3cc242___ @ 0x18054E34C
 * Callers:
 *     ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z @ 0x180550300 (-Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_c0d8e1709f705684b7fc3b88b56d28ed_::_lambda_c0d8e1709f705684b7fc3b88b56d28ed_ @ 0x1804D6F30 (_lambda_c0d8e1709f705684b7fc3b88b56d28ed_--_lambda_c0d8e1709f705684b7fc3b88b56d28ed_.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_8b6332ece26b147aeb862ef6a363e0b0___lambda_b380b0a81cd678091ab35ee1fc3cc242___ @ 0x18054E618 (DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_8b.c)
 */

__int64 __fastcall DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_b380b0a81cd678091ab35ee1fc3cc242___(
        int a1,
        int a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v7; // rax
  int v8; // r8d
  int v9; // r9d
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp-18h] BYREF

  v7 = lambda_c0d8e1709f705684b7fc3b88b56d28ed_::_lambda_c0d8e1709f705684b7fc3b88b56d28ed_((__int64)&v13, (__int64)a4);
  v10 = DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const____lambda_8b6332ece26b147aeb862ef6a363e0b0___lambda_b380b0a81cd678091ab35ee1fc3cc242___(
          a1,
          a2,
          v8,
          v9,
          0,
          v7);
  v11 = *a4;
  if ( *a4 )
  {
    *a4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v10;
}
