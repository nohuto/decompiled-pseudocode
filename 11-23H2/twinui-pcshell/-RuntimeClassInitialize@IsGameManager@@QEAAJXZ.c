/*
 * XREFs of ?RuntimeClassInitialize@IsGameManager@@QEAAJXZ @ 0x18008DBF4
 * Callers:
 *     ??$MakeAndInitialize@VIsGameManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIsGameManager@@@Z @ 0x18008DDA0 (--$MakeAndInitialize@VIsGameManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIsGameManager@@@Z.c)
 * Callees:
 *     PiiFilterCreate @ 0x18008DAB8 (PiiFilterCreate.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall IsGameManager::RuntimeClassInitialize(IsGameManager *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  int v5; // edi
  char *EventW; // rax
  const char *v7; // r9
  char *v8; // rbx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF
  char v13; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  v2 = CreateGameConfigStoreClient(&v12);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF2,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v2,
      v10);
    return v3;
  }
  else
  {
    v4 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v12;
    if ( v4 )
      FreeGameConfigStoreClient();
    IsGameManager::_pStaticThis = this;
    v5 = PiiFilterCreate((RtlNameValueArray **)this + 9);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFA,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(v5 | 0x10000000u),
        v10);
    else
      *((_DWORD *)this + 20) = 1;
    *((_BYTE *)this + 88) = v5 >= 0;
    EventW = (char *)CreateEventW(0LL, 1, 0, 0LL);
    v8 = (char *)this + 96;
    if ( v8 == &v13 )
    {
      if ( (unsigned __int64)(EventW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(EventW);
    }
    else
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        v8,
        EventW);
    }
    if ( !*(_QWORD *)v8 )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xFE,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        v7);
    return 0LL;
  }
}
