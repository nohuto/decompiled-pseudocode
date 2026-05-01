/*
 * XREFs of ?RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z @ 0x1800EBC44
 * Callers:
 *     ?UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z @ 0x1800C0358 (-UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z.c)
 *     ?DirChangeCallback@IsGameManager@@CAXPEAXE@Z @ 0x180149280 (-DirChangeCallback@IsGameManager@@CAXPEAXE@Z.c)
 * Callees:
 *     ?Initialize@String@Internal@Windows@@QEAAJPEBGI@Z @ 0x18003F2AC (-Initialize@String@Internal@Windows@@QEAAJPEBGI@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800EBDE4 (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

int __fastcall IsGameManager::RegisterKGLLocationForNotifications(
        IsGameManager *this,
        struct KGLUpdateLocationInfo *a2)
{
  void *v3; // rcx
  void *v4; // rcx
  const WCHAR *StringRawBuffer; // rax
  HSTRING *v6; // r14
  HANDLE v7; // rsi
  int v8; // ebx
  const char *v9; // r9
  const unsigned __int16 *v11; // rax
  __int64 v12; // r8
  bool v13; // zf
  const WCHAR *v14; // rax
  wil::details *v15; // rcx
  __int64 v16; // rdx
  int v17; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *phNewWaitObject; // [rsp+50h] [rbp+8h] BYREF
  UINT32 length; // [rsp+58h] [rbp+10h] BYREF

  phNewWaitObject = this;
  v3 = (void *)_InterlockedExchange64((volatile __int64 *)a2 + 5, -1LL);
  phNewWaitObject = v3;
  if ( v3 != (void *)-1LL )
    UnregisterWait(v3);
  v4 = (void *)_InterlockedExchange64((volatile __int64 *)a2 + 4, -1LL);
  if ( v4 != (void *)-1LL )
    FindCloseChangeNotification(v4);
  *((_DWORD *)a2 + 7) = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)a2 + 7), 0LL);
  v6 = (HSTRING *)((char *)a2 + 64);
  v7 = FindFirstChangeNotificationW(StringRawBuffer, 0, 0x117u);
  v8 = Windows::Internal::String::Initialize((struct KGLUpdateLocationInfo *)((char *)a2 + 64), (HSTRING *)a2 + 7);
  if ( v8 < 0 )
  {
    v16 = 2214LL;
    goto LABEL_23;
  }
  if ( v7 == (HANDLE)-1LL )
  {
    v11 = WindowsGetStringRawBuffer(*v6, &length);
    if ( !length || (v12 = length - 1, length == 1) )
    {
LABEL_22:
      v8 = -2147418113;
      v16 = 2230LL;
    }
    else
    {
      while ( v11[v12] != 92 )
      {
        v13 = (_DWORD)v12 == 1;
        v12 = (unsigned int)(v12 - 1);
        if ( v13 )
          goto LABEL_22;
      }
      v8 = Windows::Internal::String::Initialize((HSTRING *)a2 + 8, v11, v12);
      if ( v8 >= 0 )
      {
        *((_DWORD *)a2 + 7) = 1;
        v14 = WindowsGetStringRawBuffer(*v6, 0LL);
        v7 = FindFirstChangeNotificationW(v14, 0, 0x117u);
        if ( v7 == (HANDLE)-1LL )
          return wil::details::GetLastErrorFailHr(v15);
        goto LABEL_7;
      }
      v16 = 2232LL;
    }
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v8,
      v17);
    return v8;
  }
LABEL_7:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 4, (signed __int64)v7, -1LL) != -1 )
    FindCloseChangeNotification(v7);
  if ( !RegisterWaitForSingleObject(
          &phNewWaitObject,
          *((HANDLE *)a2 + 4),
          IsGameManager::DirChangeCallback,
          a2,
          0xFFFFFFFF,
          8u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x8CD,
             (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
             v9);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 5, (signed __int64)phNewWaitObject, -1LL) != -1 )
    UnregisterWait(phNewWaitObject);
  return 0;
}
