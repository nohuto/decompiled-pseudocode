/*
 * XREFs of ?OnApplicationViewChanged@CVirtualDesktopApplicationViewEventListener@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18009F330
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopApplicationViewEventListener::OnApplicationViewChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdi
  int (__fastcall *v11)(__int64, __int64, ULONGLONG); // rbx
  ULONGLONG TickCount64; // rax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v20; // [rsp+70h] [rbp+30h] BYREF

  switch ( a3 )
  {
    case 0:
      v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 216LL))(a2, &v20);
      if ( v6 >= 0 )
      {
        if ( !v20 )
          return 0LL;
        goto LABEL_19;
      }
      v16 = 47LL;
LABEL_36:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    case 1:
      (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 200LL))(*(_QWORD *)(a1 + 48), a2);
      v6 = v7;
      if ( v7 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x49,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
          (const char *)(unsigned int)v7);
      goto LABEL_15;
    case 5:
      v13 = *(_QWORD *)(a1 + 80);
      if ( !v13 )
        return 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 88LL))(v13);
      if ( v6 >= 0 )
        return 0LL;
      v16 = 99LL;
      goto LABEL_36;
  }
  if ( a3 <= 6 )
    return 0LL;
  if ( a3 <= 8 )
  {
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 64) + 32LL))(
           *(_QWORD *)(a1 + 64),
           *(_QWORD *)(a1 + 48),
           *(_QWORD *)(a1 + 56),
           a2);
    if ( SRWLock[0] )
      ReleaseSRWLockExclusive(SRWLock[0]);
    return (unsigned int)v6;
  }
  if ( a3 == 13 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
      0LL);
    return 0LL;
  }
  if ( a3 != 10 )
  {
    if ( a3 == 11 )
    {
      (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 192LL))(*(_QWORD *)(a1 + 48), a2);
      v6 = v14;
      if ( v14 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x44,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
          (const char *)(unsigned int)v14);
    }
    else
    {
      if ( a3 != 17 )
        return 0LL;
      (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 392LL))(*(_QWORD *)(a1 + 48), a2);
      v6 = v15;
      if ( v15 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5D,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
          (const char *)(unsigned int)v15);
    }
    goto LABEL_15;
  }
LABEL_19:
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
  v8 = *(_QWORD *)(a1 + 80);
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 80LL))(v8, a2);
    v6 = v9;
    if ( v9 < 0 )
    {
      v17 = 56LL;
LABEL_39:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_15;
    }
  }
  v10 = *(_QWORD *)(a1 + 72);
  v11 = *(int (__fastcall **)(__int64, __int64, ULONGLONG))(*(_QWORD *)v10 + 40LL);
  TickCount64 = GetTickCount64();
  if ( v11(v10, a2, TickCount64) < 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 176LL))(*(_QWORD *)(a1 + 48), a2);
    v6 = v9;
    if ( v9 >= 0 )
      goto LABEL_15;
    v17 = 61LL;
    goto LABEL_39;
  }
  v6 = 0;
LABEL_15:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)SRWLock);
  return (unsigned int)v6;
}
