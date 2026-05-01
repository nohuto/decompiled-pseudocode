/*
 * XREFs of ?UnsubscribeFromViewChangeNotifications@PeoplePaneViewManager@@UEAAJK@Z @ 0x1804B6490
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802D08B8 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::UnsubscribeFromViewChangeNotifications(PeoplePaneViewManager *this, int a2)
{
  unsigned int v3; // eax
  unsigned __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int64 v6; // rdi
  __int64 v8; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  v4 = *((_QWORD *)this + 50);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 49);
    v6 = 0LL;
    while ( *(_DWORD *)(16 * v6 + v5 + 8) != a2 )
    {
      v6 = ++v3;
      if ( v3 >= v4 )
        return 0LL;
    }
    if ( v6 >= v4 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E5,
        (int)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)0x80028CA1LL);
      return 2147650721LL;
    }
    Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(16 * v6 + v5));
    v8 = *((_QWORD *)this + 50);
    if ( v6 != v8 - 1 )
      memmove_0(
        (void *)(16 * v6 + *((_QWORD *)this + 49)),
        (const void *)(16 * v6 + *((_QWORD *)this + 49) + 16),
        16 * (v8 - v6) - 16);
    --*((_QWORD *)this + 50);
  }
  return 0LL;
}
