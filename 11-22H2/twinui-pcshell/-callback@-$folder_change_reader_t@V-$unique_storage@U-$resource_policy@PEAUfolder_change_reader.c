/*
 * XREFs of ?callback@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX1K_KPEAU_TP_IO@@@Z @ 0x180640CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1801542E4 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??R?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@QEBAXW4FolderChangeEvent@wil@@PEBG@Z @ 0x18063E774 (--R-$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@QEBAXW4FolderChangeEvent@wil@@PEBG@Z.c)
 *     ?StartIo@folder_change_reader_state@details@wil@@QEAAJXZ @ 0x18063F314 (-StartIo@folder_change_reader_state@details@wil@@QEAAJXZ.c)
 */

void __fastcall wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::callback(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PVOID Overlapped,
        ULONG IoResult)
{
  char *v5; // rbx
  char v6[528]; // [rsp+20h] [rbp-228h] BYREF

  if ( IoResult )
  {
    if ( IoResult != 1022 )
      return;
    wistd::function<void (enum wil::FolderChangeEvent,unsigned short const *)>::operator()((__int64)Context, 0, 0LL);
  }
  else
  {
    v5 = (char *)&Context[23];
    while ( v5 )
    {
      StringCchCopyNW(v6, 260LL, v5 + 12, (unsigned __int64)*((unsigned int *)v5 + 2) >> 1);
      wistd::function<void (enum wil::FolderChangeEvent,unsigned short const *)>::operator()(
        (__int64)Context,
        *((_DWORD *)v5 + 1),
        (__int64)v6);
      if ( *(_DWORD *)v5 )
        v5 += *(unsigned int *)v5;
      else
        v5 = 0LL;
    }
  }
  if ( TryAcquireSRWLockShared(Context + 22) && Context != (RTL_SRWLOCK *)-176LL )
  {
    if ( Context[21].Ptr )
      wil::details::folder_change_reader_state::StartIo((wil::details::folder_change_reader_state *)Context);
    ReleaseSRWLockShared(Context + 22);
  }
}
