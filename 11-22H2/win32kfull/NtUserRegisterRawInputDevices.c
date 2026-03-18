/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x1C009EA80
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0024460 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00621E0 (PushW32ThreadLock.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _RegisterRawInputDevices @ 0x1C009F368 (_RegisterRawInputDevices.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 */

__int64 __fastcall NtUserRegisterRawInputDevices(void *Src, unsigned int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r13
  SIZE_T v8; // r14
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ebx
  unsigned int *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int128 v21; // [rsp+78h] [rbp-40h] BYREF
  __int64 v22; // [rsp+88h] [rbp-30h]
  char v23; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+20h]

  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v23);
  PsGetCurrentProcessWin32Process(v6);
  v24 = gptiCurrent;
  if ( Src && a2 && a3 == 16 && (v7 = a2, v8 = 16LL * a2, ProbeForRead(Src, v8, 8u), v8 <= 0xFFFFFFFF) )
  {
    v9 = v8;
    v10 = Win32AllocPoolWithQuotaZInit((unsigned int)v8, 1769108309LL);
    v11 = (unsigned int *)v10;
    if ( !v10 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v10, &v21, (__int64)Win32FreePool);
    if ( (unsigned int)v8 >= v8 )
      v9 = 16 * a2;
    memmove(v11, Src, v9);
    v14 = RegisterRawInputDevices(v11, a2, 0LL);
    v15 = v11 + 1;
    do
    {
      EtwTraceAuditApiRegisterRawInputDevices(
        v14,
        *((unsigned __int16 *)v15 - 2),
        *((unsigned __int16 *)v15 - 1),
        *v15,
        *(_QWORD *)(v15 + 1),
        v24,
        *(_QWORD *)(*(_QWORD *)v24 + 1312LL),
        *(_QWORD *)(*(_QWORD *)v24 + 1152LL),
        *(_DWORD *)(*(_QWORD *)v24 + 1232LL));
      v15 += 4;
      --v7;
    }
    while ( v7 );
    if ( v11 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v21);
  }
  else
  {
    v14 = 0;
    UserSetLastError(87LL);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v23, v12, v13);
  UserSessionSwitchLeaveCrit(v17, v16, v18, v19);
  return (int)v14;
}
