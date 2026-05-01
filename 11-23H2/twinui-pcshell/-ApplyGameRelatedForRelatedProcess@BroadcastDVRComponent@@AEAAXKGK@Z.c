/*
 * XREFs of ?ApplyGameRelatedForRelatedProcess@BroadcastDVRComponent@@AEAAXKGK@Z @ 0x1803D58E4
 * Callers:
 *     ?ApplyGameRelatedForGameModeProcess@BroadcastDVRComponent@@AEAAXKAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x1803D576C (-ApplyGameRelatedForGameModeProcess@BroadcastDVRComponent@@AEAAXKAEBV-$vector@U-$pair@KVString@I.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

void __fastcall BroadcastDVRComponent::ApplyGameRelatedForRelatedProcess(
        BroadcastDVRComponent *this,
        DWORD a2,
        char a3,
        DWORD a4)
{
  HANDLE v7; // rax
  char *v8; // rdi
  HANDLE v9; // rax
  char *v10; // rbx
  int LargestValidResourceRequest; // eax
  int v12; // esi
  int v13; // eax
  char v14; // al
  int v15; // r9d
  const char *v16; // r9
  HANDLE hObject; // [rsp+20h] [rbp-40h] BYREF
  __int128 v18; // [rsp+28h] [rbp-38h] BYREF
  __int128 v19; // [rsp+38h] [rbp-28h]
  __int64 v20; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v18 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  RmGameModeInitializeResourceRequest(&v18);
  hObject = 0LL;
  v7 = OpenProcess(0x1000u, 0, a4);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    v7);
  v8 = (char *)hObject;
  if ( hObject )
  {
    hObject = 0LL;
    v9 = OpenProcess(0x1000u, 0, a2);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      v9);
    v10 = (char *)hObject;
    if ( hObject )
    {
      LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(&v18);
      v12 = LargestValidResourceRequest;
      if ( LargestValidResourceRequest < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x907,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
          (const char *)(LargestValidResourceRequest | 0x10000000u));
      if ( v12 >= 0 )
      {
        DWORD1(v18) = 0;
        v13 = v20 | 1;
        *((_QWORD *)&v18 + 1) = 0LL;
        HIDWORD(v19) |= 7u;
        LODWORD(v20) = v20 | 1;
        *(_QWORD *)((char *)&v19 + 4) = 0x1E00000032LL;
        if ( (a3 & 1) != 0 )
          LODWORD(v20) = v13 | 2;
        if ( (a3 & 4) != 0 )
        {
          BYTE4(v20) = 6;
        }
        else
        {
          v14 = 2;
          if ( (a3 & 8) != 0 )
            v14 = 3;
          BYTE4(v20) = v14;
        }
        v15 = RmGameModeRegisterPairedAuxiliaryProcess(v10, &v18, v8, 0LL);
        if ( (int)(v15 + 0x80000000) >= 0 && v15 != -1073740008 )
        {
          v16 = (const char *)(v15 | 0x10000000u);
          if ( (int)v16 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x928,
              (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
              v16);
        }
      }
    }
    if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v10);
  }
  if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v8);
}
