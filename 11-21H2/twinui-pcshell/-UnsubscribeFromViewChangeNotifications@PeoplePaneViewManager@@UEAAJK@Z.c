/*
 * XREFs of ?UnsubscribeFromViewChangeNotifications@PeoplePaneViewManager@@UEAAJK@Z @ 0x1803D9700
 * Callers:
 *     <none>
 * Callees:
 *     ??_G?$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180041470 (--_G-$ComPtr@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 */

__int64 __fastcall PeoplePaneViewManager::UnsubscribeFromViewChangeNotifications(PeoplePaneViewManager *this, int a2)
{
  unsigned __int64 v2; // r8
  unsigned int v3; // eax
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 50);
  v3 = 0;
  if ( v2 )
  {
    v5 = *((_QWORD *)this + 49);
    v6 = 0LL;
    while ( *(_DWORD *)(v5 + 16 * v6 + 8) != a2 )
    {
      v6 = ++v3;
      if ( v3 >= v2 )
        return 0LL;
    }
    v7 = v3;
    if ( v3 >= v2 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E5,
        (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
        (const char *)0x80028CA1LL);
      return 2147650721LL;
    }
    v9 = 16LL * v3;
    Microsoft::WRL::ComPtr<IObservablePropertyCallback>::`scalar deleting destructor'((__int64 *)(v5 + v9));
    v10 = *((_QWORD *)this + 50);
    if ( v7 != v10 - 1 )
    {
      memmove_0(
        (void *)(v9 + *((_QWORD *)this + 49)),
        (const void *)(v9 + *((_QWORD *)this + 49) + 16),
        16 * (v10 - v7) - 16);
      v10 = *((_QWORD *)this + 50);
    }
    *((_QWORD *)this + 50) = v10 - 1;
  }
  return 0LL;
}
