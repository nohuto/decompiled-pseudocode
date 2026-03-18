/*
 * XREFs of NtUserSetBrokeredForeground @ 0x1C00BAFA0
 * Callers:
 *     <none>
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C00424C0 (IsMessageOnlyWindow.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     InternalSetProp @ 0x1C00C671C (InternalSetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C00CF084 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x1C0122310 (_IsTopLevelWindow.c)
 */

__int64 __fastcall NtUserSetBrokeredForeground(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // rcx
  char v17; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
  v2 = 0;
  if ( !a1 )
    goto LABEL_17;
  v3 = ValidateHwnd(a1);
  v4 = v3;
  if ( !v3 )
    goto LABEL_17;
  if ( !(unsigned int)IsTopLevelWindow(v3) )
    goto LABEL_17;
  if ( *(_QWORD *)(v5 + 120) )
    goto LABEL_17;
  if ( (unsigned int)IsWindowBeingDestroyed(v5) )
    goto LABEL_17;
  if ( (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0x10) != 0 )
    goto LABEL_17;
  LOBYTE(v7) = IsMessageOnlyWindow(v6);
  if ( v7 || GetProp(v4, LOWORD(WPP_MAIN_CB.DeviceLock.Header.SignalState), 1LL) )
    goto LABEL_17;
  v8 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 236LL);
  if ( v8 != 14 && v8 != 4 )
  {
    UserSetLastError(5LL);
LABEL_17:
    v16 = 87LL;
    goto LABEL_18;
  }
  if ( !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 424LL)) || gptiCurrent != *(_QWORD *)(v4 + 16) )
  {
    v16 = 5LL;
LABEL_18:
    UserSetLastError(v16);
    goto LABEL_13;
  }
  v2 = InternalSetProp(v4, LOWORD(WPP_MAIN_CB.DeviceLock.Header.SignalState), gptiCurrent, 5LL);
LABEL_13:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v17, v9, v10);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v2;
}
