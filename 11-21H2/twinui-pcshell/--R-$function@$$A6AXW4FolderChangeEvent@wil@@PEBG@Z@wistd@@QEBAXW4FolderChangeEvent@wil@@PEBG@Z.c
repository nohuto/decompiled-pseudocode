/*
 * XREFs of ??R?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@QEBAXW4FolderChangeEvent@wil@@PEBG@Z @ 0x18057F774
 * Callers:
 *     ?callback@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX1K_KPEAU_TP_IO@@@Z @ 0x180582120 (-callback@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfolder_change_reader.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<void (enum wil::FolderChangeEvent,unsigned short const *)>::operator()(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 v3; // rcx
  int v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  v3 = *(_QWORD *)(a1 + 112);
  if ( !v3 )
    __fastfail(7u);
  return (*(__int64 (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)v3 + 32LL))(v3, &v5, &v6);
}
