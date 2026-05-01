/*
 * XREFs of ?WndProc@NotificationDispatcher@@SA_JPEAUHWND__@@I_K_J@Z @ 0x18009FBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18009FDA8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
LRESULT __fastcall NotificationDispatcher::WndProc(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
  LONG_PTR WindowLongPtrW; // rax
  LONG_PTR v5; // rbx
  signed __int32 i; // eax
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rbp
  _QWORD *v9; // r15
  _QWORD *j; // r14
  unsigned __int64 k; // rdi
  __int64 v12; // rcx
  signed __int32 v13; // edx
  LONG_PTR v15; // [rsp+20h] [rbp-48h]
  char v16[8]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD *v17; // [rsp+30h] [rbp-38h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+40h] [rbp-28h]
  __int64 v20; // [rsp+48h] [rbp-20h]

  if ( a2 != 1025 )
    return DefWindowProcW(a1, a2, a3, a4);
  WindowLongPtrW = GetWindowLongPtrW(a1, 0);
  v5 = WindowLongPtrW;
  v15 = WindowLongPtrW;
  if ( WindowLongPtrW )
  {
    for ( i = *(_DWORD *)(WindowLongPtrW + 36);
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 36), i + 1, i);
          i = *(_DWORD *)(v5 + 36) )
    {
      ;
    }
    v5 = v15;
  }
  if ( v5 && !*(_BYTE *)(v5 + 88) )
  {
    *(_BYTE *)(v5 + 88) = 1;
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v16, v5 + 80);
    v17 = *(_QWORD **)(v5 + 48);
    v7 = v17;
    v19 = *(_QWORD *)(v5 + 64);
    v18 = *(_QWORD *)(v5 + 56);
    v8 = v18;
    v20 = *(_QWORD *)(v5 + 72);
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_QWORD *)(v5 + 56) = 0LL;
    *(_QWORD *)(v5 + 72) = 0LL;
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v16);
    v9 = &v7[v8];
    for ( j = v7; j != v9; ++j )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*j + 24LL))(*j, 0LL);
    *(_BYTE *)(v5 + 88) = 0;
    AcquireSRWLockShared((PSRWLOCK)(v5 + 80));
    if ( *(_QWORD *)(v5 + 56) )
      PostMessageW(*(HWND *)(v5 + 40), 0x401u, 0LL, 0LL);
    if ( v5 != -80 )
      ReleaseSRWLockShared((PSRWLOCK)(v5 + 80));
    if ( v7 )
    {
      for ( k = 0LL; k < v8; ++k )
      {
        v12 = v7[k];
        if ( v12 )
        {
          v7[k] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      CoTaskMemFree(v7);
    }
  }
  if ( v5 )
  {
    do
      v13 = *(_DWORD *)(v5 + 36);
    while ( v13 != 0x7FFFFFFF && v13 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 36), v13 - 1, v13) );
    if ( v13 == 1 )
    {
      (*(void (__fastcall **)(LONG_PTR, __int64))(*(_QWORD *)v15 + 72LL))(v15, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return 0LL;
}
