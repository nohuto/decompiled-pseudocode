/*
 * XREFs of ?v_PublishServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180165D90
 * Callers:
 *     <none>
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x180165E58 (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::v_PublishServices(
        UwpWindowEventDispatcher *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  unsigned int v4; // ebx
  CCriticalFailureHandler *v5; // rcx
  int SiHostProcessHandle; // eax
  LSTATUS DWORD; // eax
  unsigned __int64 *v9; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+20h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IServiceProvider *, struct IProfferService *))(**((_QWORD **)this + 24)
                                                                                              + 24LL))(
         *((_QWORD *)this + 24),
         a2,
         a3);
  v12 = v4;
  v5 = (CCriticalFailureHandler *)v4;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v13);
    v5 = (CCriticalFailureHandler *)v4;
    if ( DWORD < 0 )
    {
LABEL_7:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_2;
    }
    switch ( v13 )
    {
      case 2u:
        v4 = -2023406815;
        break;
      case 3u:
        v4 = -2023406814;
        break;
      case 4u:
        v4 = -2147418094;
        break;
      case 5u:
        v4 = -2147022986;
        break;
      default:
        goto LABEL_7;
    }
    v5 = (CCriticalFailureHandler *)v4;
    v12 = v4;
    goto LABEL_7;
  }
LABEL_2:
  if ( (int)v5 < 0 && (_DWORD)v5 != -2147024882 && v4 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v5,
      &v12,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      0xD6u,
      v9,
      v10);
    v4 = v12;
  }
  if ( (v4 & 0x80000000) != 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD7,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)v4,
      (int)v9);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)this + 368,
    0LL);
  SiHostProcessHandle = GetSiHostProcessHandle(0x200u, (void **)this + 46);
  if ( SiHostProcessHandle < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xDB,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)SiHostProcessHandle,
      (int)v9);
  return 0LL;
}
