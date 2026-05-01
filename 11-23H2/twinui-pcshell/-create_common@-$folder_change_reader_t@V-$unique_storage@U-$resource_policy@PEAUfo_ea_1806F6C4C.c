/*
 * XREFs of ?create_common@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEBG_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x1806F6C4C
 * Callers:
 *     ?RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F4774 (-RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUfolder_change_reader_state@23@@Z @ 0x1801BD1EC (-reset@-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU1.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0folder_change_reader_state@details@wil@@QEAA@_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x18063DC0C (--0folder_change_reader_state@details@wil@@QEAA@_NW4FolderChangeEvents@2@$$QEAV-$function@$$A6AX.c)
 *     ??_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z @ 0x18063E9A0 (--_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?StartIo@folder_change_reader_state@details@wil@@QEAAJXZ @ 0x18063F314 (-StartIo@folder_change_reader_state@details@wil@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_common(
        wil::details::folder_change_reader_state **a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  void *v7; // rax
  __int64 v8; // rbx
  unsigned int LastError; // edi
  __int64 v10; // r9
  __int64 v11; // rdx
  HANDLE FileW; // rax
  const char *v13; // r9
  void *v14; // rcx
  __int64 v15; // rdx
  PTP_IO ThreadpoolIo; // rax
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = operator new(0x10B8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v8 = wil::details::folder_change_reader_state::folder_change_reader_state((__int64)v7, 1u, 287, a5);
  else
    v8 = 0LL;
  if ( v8 )
  {
    FileW = CreateFileW(a2, 1u, 7u, 0LL, 3u, 0x42000000u, 0LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)(v8 + 120),
      FileW);
    v14 = *(void **)(v8 + 120);
    if ( (((unsigned __int64)v14 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ThreadpoolIo = CreateThreadpoolIo(
                       v14,
                       (PTP_WIN32_IO_CALLBACK)wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::callback,
                       (PVOID)v8,
                       0LL);
      *(_QWORD *)(v8 + 168) = ThreadpoolIo;
      if ( ThreadpoolIo )
      {
        started = wil::details::folder_change_reader_state::StartIo((wil::details::folder_change_reader_state *)v8);
        LastError = started;
        if ( started >= 0 )
        {
          wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::reset(
            a1,
            (wil::details::folder_change_reader_state *)v8);
          return 0;
        }
        v10 = (unsigned int)started;
        v11 = 740LL;
        goto LABEL_13;
      }
      v15 = 739LL;
    }
    else
    {
      v15 = 736LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v15,
                  (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
                  v13);
    goto LABEL_14;
  }
  LastError = -2147024882;
  v10 = 2147942414LL;
  v11 = 731LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\filesystem.h",
    (const char *)v10);
LABEL_14:
  if ( v8 )
    wil::details::folder_change_reader_state::`scalar deleting destructor'((wil::details::folder_change_reader_state *)v8);
  return LastError;
}
