/*
 * XREFs of ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x1801280A0
 * Callers:
 *     ?v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z @ 0x180127F60 (-v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?Unregister@VirtualDesktopAnimationSyncNotifications@@UEAAJK@Z @ 0x180127F80 (-Unregister@VirtualDesktopAnimationSyncNotifications@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z @ 0x180127FB0 (-UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z.c)
 *     ?v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z @ 0x180127FD0 (-v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?Unregister@HolographicPositioner@@UEAAJK@Z @ 0x180127FF0 (-Unregister@HolographicPositioner@@UEAAJK@Z.c)
 *     ?UnregisterInternal@CVirtualDesktopNotifications@@UEAAJK@Z @ 0x180128020 (-UnregisterInternal@CVirtualDesktopNotifications@@UEAAJK@Z.c)
 *     ?Unregister@CApplicationManager@@UEAAJK@Z @ 0x180128050 (-Unregister@CApplicationManager@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z @ 0x180128070 (-UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AgileRegistrationList::Unregister(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // r15
  PVOID Ptr; // rax
  RTL_SRWLOCK v6; // rbx
  char v7; // al
  __int64 v8; // r14
  char *v9; // rdi
  char *v10; // rbx
  char *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  Ptr = this[1].Ptr;
  v6.Ptr = this->Ptr;
  if ( this->Ptr == Ptr )
    goto LABEL_20;
  while ( *(_DWORD *)v6.Ptr != a2 )
  {
    v6.Ptr = (char *)v6.Ptr + 16;
    if ( v6.Ptr == Ptr )
      goto LABEL_20;
  }
  if ( v6.Ptr == Ptr )
LABEL_20:
    v7 = 1;
  else
    v7 = 0;
  if ( v7 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
      (const char *)0x80070057LL,
      v16);
  v8 = *((_QWORD *)v6.Ptr + 1);
  *((_QWORD *)v6.Ptr + 1) = 0LL;
  v9 = (char *)this[1].Ptr;
  v10 = (char *)v6.Ptr + 16;
  v11 = v9;
  if ( v10 != v9 )
  {
    do
    {
      *((_DWORD *)v10 - 4) = *(_DWORD *)v10;
      v12 = *((_QWORD *)v10 + 1);
      *((_QWORD *)v10 + 1) = 0LL;
      v13 = *((_QWORD *)v10 - 1);
      *((_QWORD *)v10 - 1) = v12;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v10 += 16;
    }
    while ( v10 != v9 );
    v9 = (char *)this[1].Ptr;
    v11 = v9;
  }
  v14 = *((_QWORD *)v9 - 1);
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v11 = (char *)this[1].Ptr;
  }
  this[1].Ptr = v11 - 16;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return 0LL;
}
