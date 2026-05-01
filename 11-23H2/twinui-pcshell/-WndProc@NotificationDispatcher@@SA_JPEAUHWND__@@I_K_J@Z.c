/*
 * XREFs of ?WndProc@NotificationDispatcher@@SA_JPEAUHWND__@@I_K_J@Z @ 0x180149AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x180149B50 (-DispatchNotifications@NotificationDispatcher@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall NotificationDispatcher::WndProc(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
  LONG_PTR WindowLongPtrW; // rax
  volatile signed __int32 *v5; // rbx
  signed __int32 i; // eax
  signed __int32 v7; // edx
  volatile signed __int32 *v9; // [rsp+20h] [rbp-18h]

  if ( a2 != 1025 )
    return DefWindowProcW(a1, a2, a3, a4);
  WindowLongPtrW = GetWindowLongPtrW(a1, 0);
  v5 = (volatile signed __int32 *)WindowLongPtrW;
  v9 = (volatile signed __int32 *)WindowLongPtrW;
  if ( WindowLongPtrW )
  {
    for ( i = *(_DWORD *)(WindowLongPtrW + 36);
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange(v5 + 9, i + 1, i);
          i = *((_DWORD *)v5 + 9) )
    {
      ;
    }
    v5 = v9;
  }
  if ( v5 )
  {
    NotificationDispatcher::DispatchNotifications((NotificationDispatcher *)v5);
    do
      v7 = *((_DWORD *)v5 + 9);
    while ( v7 != 0x7FFFFFFF && v7 != _InterlockedCompareExchange(v5 + 9, v7 - 1, v7) );
    if ( v7 == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 72LL))(v9, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return 0LL;
}
