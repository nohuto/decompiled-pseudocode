/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x1C00AE7A0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _RegisterRawInputDevices @ 0x1C00AE358 (_RegisterRawInputDevices.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 */

__int64 __fastcall NtUserRegisterRawInputDevices(void *Src, unsigned int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r13
  SIZE_T v9; // rbx
  unsigned int v10; // r14d
  __int64 v11; // rax
  unsigned int *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // ebx
  unsigned int *v16; // rsi
  __int64 v17; // rcx
  __int128 v19; // [rsp+78h] [rbp-40h] BYREF
  __int64 v20; // [rsp+88h] [rbp-30h]
  char v21; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+20h]

  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v21);
  PsGetCurrentProcessWin32Process(v6);
  v22 = gptiCurrent;
  if ( Src && a2 && a3 == 16 && (v8 = a2, v9 = 16LL * a2, ProbeForRead(Src, v9, 8u), v9 <= 0xFFFFFFFF) )
  {
    v10 = v9;
    v11 = Win32AllocPoolWithQuotaZInit((unsigned int)v9, 1769108309LL);
    v12 = (unsigned int *)v11;
    if ( !v11 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v11, &v19, (__int64)Win32FreePool);
    if ( (unsigned int)v9 >= v9 )
      v10 = 16 * a2;
    memmove(v12, Src, v10);
    v15 = RegisterRawInputDevices((__int64)v12, a2, 0);
    v16 = v12 + 1;
    do
    {
      EtwTraceAuditApiRegisterRawInputDevices(
        v15,
        *((unsigned __int16 *)v16 - 2),
        *((unsigned __int16 *)v16 - 1),
        *v16,
        *(_QWORD *)(v16 + 1),
        v22,
        *(_QWORD *)(*(_QWORD *)v22 + 1312LL),
        *(_QWORD *)(*(_QWORD *)v22 + 1152LL),
        *(_DWORD *)(*(_QWORD *)v22 + 1232LL));
      v16 += 4;
      --v8;
    }
    while ( v8 );
    if ( v12 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v19);
  }
  else
  {
    v15 = 0;
    UserSetLastError(87LL, v7);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v21, v13, v14);
  UserSessionSwitchLeaveCrit(v17);
  return (int)v15;
}
