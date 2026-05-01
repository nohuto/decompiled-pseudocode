/*
 * XREFs of ?OnApplicationViewChanged@CVirtualDesktopApplicationViewEventListener@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800E1810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopApplicationViewEventListener::OnApplicationViewChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  int (__fastcall *v16)(__int64, __int64, ULONGLONG); // rbx
  ULONGLONG TickCount64; // rax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-20h]
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v27; // [rsp+70h] [rbp+30h] BYREF

  if ( !a3 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 216LL))(a2, &v27);
    if ( v12 >= 0 )
    {
      if ( !v27 )
        return 0LL;
      goto LABEL_12;
    }
    v22 = 47LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
      (const char *)(unsigned int)v12,
      v24);
    return (unsigned int)v12;
  }
  v5 = a3 - 1;
  if ( !v5 )
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
    v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 224LL))(*(_QWORD *)(a1 + 48), a2);
    v12 = v19;
    if ( v19 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
        (const char *)(unsigned int)v19,
        v24);
    goto LABEL_16;
  }
  v6 = v5 - 4;
  if ( !v6 )
  {
    v18 = *(_QWORD *)(a1 + 80);
    if ( !v18 )
      return 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 88LL))(v18);
    if ( v12 >= 0 )
      return 0LL;
    v22 = 90LL;
    goto LABEL_33;
  }
  v7 = v6 - 2;
  if ( !v7 || (v8 = v7 - 1) == 0 )
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 64) + 32LL))(
            *(_QWORD *)(a1 + 64),
            *(_QWORD *)(a1 + 48),
            *(_QWORD *)(a1 + 56),
            a2);
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
    return (unsigned int)v12;
  }
  v9 = v8 - 2;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 6 )
        return 0LL;
      (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
      v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 440LL))(*(_QWORD *)(a1 + 48), a2);
      v12 = v20;
      if ( v20 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x54,
          (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
          (const char *)(unsigned int)v20,
          v24);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
      v21 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 216LL))(*(_QWORD *)(a1 + 48), a2);
      v12 = v21;
      if ( v21 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x44,
          (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
          (const char *)(unsigned int)v21,
          v24);
    }
    goto LABEL_16;
  }
LABEL_12:
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
  v13 = *(_QWORD *)(a1 + 80);
  if ( v13 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 80LL))(v13, a2);
    v12 = v14;
    if ( v14 < 0 )
    {
      v23 = 56LL;
LABEL_37:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
        (const char *)(unsigned int)v14,
        v24);
      goto LABEL_16;
    }
  }
  v15 = *(_QWORD *)(a1 + 72);
  v16 = *(int (__fastcall **)(__int64, __int64, ULONGLONG))(*(_QWORD *)v15 + 40LL);
  TickCount64 = GetTickCount64();
  if ( v16(v15, a2, TickCount64) >= 0 )
  {
    v12 = 0;
    goto LABEL_16;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 200LL))(*(_QWORD *)(a1 + 48), a2);
  v12 = v14;
  if ( v14 < 0 )
  {
    v23 = 61LL;
    goto LABEL_37;
  }
LABEL_16:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)SRWLock);
  return (unsigned int)v12;
}
