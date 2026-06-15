/*
 * XREFs of ?Initialize@CStreamInstance@@UEAAJKW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J3U_GUID@@@Z @ 0x14001AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x14001AFE0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14004B464 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x140074100 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CStreamInstance::Initialize(
        __int64 a1,
        DWORD a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _OWORD *a8)
{
  char *v8; // rbx
  HRESULT v13; // eax
  unsigned int v14; // ebx
  HANDLE v15; // rax
  const char *v16; // r9
  __int64 v17; // rcx
  HANDLE v19; // rax
  int v20[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = 0LL;
  *(_QWORD *)v20 = 0LL;
  if ( a2 )
  {
    v13 = CoImpersonateClient();
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x34,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        (const char *)(unsigned int)v13,
        v20[0]);
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(v20);
      return v14;
    }
    v15 = OpenProcess(0x3000u, 0, a2);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v20,
      v15);
    v8 = *(char **)v20;
    if ( ((*(_QWORD *)v20 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    {
      v19 = OpenProcess(0x2400u, 0, a2);
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        v20,
        v19);
      v8 = *(char **)v20;
    }
    if ( ((unsigned __int64)(v8 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x43,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
        v16);
    CoRevertToSelf();
  }
  v17 = a1 + 120;
  *(_QWORD *)(a1 + 80) = a5;
  *(_QWORD *)(a1 + 176) = a6;
  *(_DWORD *)(a1 + 100) = a3;
  *(_QWORD *)(a1 + 88) = a4;
  if ( (int *)(a1 + 120) != v20 )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v17,
      v8);
    v8 = 0LL;
  }
  *(_QWORD *)(a1 + 184) = a7;
  *(_OWORD *)(a1 + 192) = *a8;
  PublishDeviceGraphWnfState(v17, a2, a3, a4);
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v8);
  return 0LL;
}
