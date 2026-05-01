/*
 * XREFs of ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x180149B50
 * Callers:
 *     ?WndProc@NotificationDispatcher@@SA_JPEAUHWND__@@I_K_J@Z @ 0x180149AB0 (-WndProc@NotificationDispatcher@@SA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ @ 0x1803CBEF0 (-FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ.c)
 *     ?FlushChangeNotifications@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x1803CCBE0 (-FlushChangeNotifications@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall NotificationDispatcher::DispatchNotifications(NotificationDispatcher *this)
{
  RTL_SRWLOCK *v2; // rdi
  _QWORD *v3; // rsi
  unsigned __int64 v4; // rbp
  _QWORD *v5; // r15
  _QWORD *i; // r14
  unsigned __int64 j; // rbx
  __int64 v8; // rcx

  if ( !*((_BYTE *)this + 88) )
  {
    *((_BYTE *)this + 88) = 1;
    v2 = (RTL_SRWLOCK *)((char *)this + 80);
    AcquireSRWLockExclusive((PSRWLOCK)this + 10);
    v3 = (_QWORD *)*((_QWORD *)this + 6);
    v4 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    v5 = &v3[v4];
    for ( i = v3; i != v5; ++i )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, 0LL);
    *((_BYTE *)this + 88) = 0;
    AcquireSRWLockShared(v2);
    if ( *((_QWORD *)this + 7) )
      PostMessageW(*((HWND *)this + 5), 0x401u, 0LL, 0LL);
    if ( v2 )
      ReleaseSRWLockShared(v2);
    if ( v3 )
    {
      for ( j = 0LL; j < v4; ++j )
      {
        v8 = v3[j];
        if ( v8 )
        {
          v3[j] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
      CoTaskMemFree(v3);
    }
  }
}
