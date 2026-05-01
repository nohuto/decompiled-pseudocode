/*
 * XREFs of ?callback@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX1K_KPEAU_TP_IO@@@Z @ 0x180582120
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?StringCchCopyNW@@YAJPEA_W_KPEB_W1@Z @ 0x1802F0D60 (-StringCchCopyNW@@YAJPEA_W_KPEB_W1@Z.c)
 *     ??R?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@QEBAXW4FolderChangeEvent@wil@@PEBG@Z @ 0x18057F774 (--R-$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@QEBAXW4FolderChangeEvent@wil@@PEBG@Z.c)
 *     ?StartIo@folder_change_reader_state@details@wil@@QEAAJXZ @ 0x18058032C (-StartIo@folder_change_reader_state@details@wil@@QEAAJXZ.c)
 */

void __fastcall wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_exception_policy>::callback(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PVOID Overlapped,
        ULONG IoResult)
{
  const wchar_t *v5; // rbx
  RTL_SRWLOCK *v6; // [rsp+20h] [rbp-238h] BYREF
  wchar_t v7[264]; // [rsp+30h] [rbp-228h] BYREF

  if ( IoResult )
  {
    if ( IoResult != 1022 )
      return;
    wistd::function<void (enum wil::FolderChangeEvent,unsigned short const *)>::operator()((__int64)Context, 0, 0LL);
  }
  else
  {
    v5 = (const wchar_t *)&Context[23];
    while ( v5 )
    {
      StringCchCopyNW(v7, 260LL, v5 + 6, (unsigned __int64)*((unsigned int *)v5 + 2) >> 1);
      wistd::function<void (enum wil::FolderChangeEvent,unsigned short const *)>::operator()(
        (__int64)Context,
        *((_DWORD *)v5 + 1),
        (__int64)v7);
      if ( *(_DWORD *)v5 )
        v5 = (const wchar_t *)((char *)v5 + *(unsigned int *)v5);
      else
        v5 = 0LL;
    }
  }
  if ( TryAcquireSRWLockShared(Context + 22) )
  {
    v6 = Context + 22;
    if ( Context != (RTL_SRWLOCK *)-176LL && Context[21].Ptr )
      wil::details::folder_change_reader_state::StartIo((wil::details::folder_change_reader_state *)Context);
  }
  else
  {
    v6 = 0LL;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v6);
}
