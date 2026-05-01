/*
 * XREFs of ?v_PublishServices@UwpWindowEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1803F8950
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x1800C6558 (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800C8D08 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

__int64 __fastcall UwpWindowEventDispatcher::v_PublishServices(
        UwpWindowEventDispatcher *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  CCriticalFailureHandler *v6; // rcx
  LSTATUS DWORD; // eax
  int SiHostProcessHandle; // eax
  const char *v9; // r9
  __int64 result; // rax
  unsigned __int64 *v11; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+58h] [rbp+20h] BYREF

  v4 = *((_QWORD *)this + 23);
  try
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    v14 = v5;
    v6 = (CCriticalFailureHandler *)v5;
    if ( CRVPrivate::cfhImmersiveShellStartup )
      goto LABEL_14;
    DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v15);
    v6 = (CCriticalFailureHandler *)v5;
    if ( DWORD >= 0 )
    {
      switch ( v15 )
      {
        case 2u:
          v5 = -2023406815;
          goto LABEL_12;
        case 3u:
          v5 = -2023406814;
          goto LABEL_12;
        case 4u:
          v5 = -2147418094;
          goto LABEL_12;
        case 5u:
          v5 = -2147022986;
LABEL_12:
          v6 = (CCriticalFailureHandler *)v5;
          v14 = v5;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_14:
    if ( (int)v6 < 0 && (_DWORD)v6 != -2147024882 && (_DWORD)v6 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v6,
        &v14,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        0xCBu,
        v11,
        v12);
      v5 = v14;
    }
    if ( (v5 & 0x80000000) != 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xCC,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)v5,
        (int)v11);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)this + 44,
      0LL);
    SiHostProcessHandle = GetSiHostProcessHandle(0x200u, (void **)this + 44);
    if ( SiHostProcessHandle < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xD0,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)SiHostProcessHandle,
        (int)v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD3,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v9);
  }
  return result;
}
