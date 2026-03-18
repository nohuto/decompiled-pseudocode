/*
 * XREFs of CmpSecurityMethod @ 0x140721010
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CmpSetKeySecurity @ 0x140677810 (CmpSetKeySecurity.c)
 *     CmPostCallbackNotificationEx @ 0x14067FF60 (CmPostCallbackNotificationEx.c)
 *     CmpQueryKeySecurity @ 0x140721254 (CmpQueryKeySecurity.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     CmpAssignKeySecurity @ 0x14085BE8C (CmpAssignKeySecurity.c)
 */

__int64 __fastcall CmpSecurityMethod(
        __int64 a1,
        int a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rbx
  ULONG_PTR BugCheckParameter4; // rdi
  char v13; // si
  struct _KTHREAD *CurrentThread; // rax
  int v15; // r9d
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  int KeySecurity; // eax
  int v21; // ecx
  __int64 v22; // rcx
  _QWORD v24[2]; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v25; // [rsp+50h] [rbp-91h]
  __int64 v26; // [rsp+58h] [rbp-89h]
  __int64 v27; // [rsp+60h] [rbp-81h]
  __int128 v28; // [rsp+68h] [rbp-79h] BYREF
  __int128 v29; // [rsp+78h] [rbp-69h]
  __int128 v30; // [rsp+88h] [rbp-59h]
  __int64 v31; // [rsp+98h] [rbp-49h]
  __int128 v32; // [rsp+A0h] [rbp-41h] BYREF
  _OWORD v33[2]; // [rsp+B0h] [rbp-31h] BYREF

  v8 = a6;
  v26 = a6;
  v27 = a8;
  v32 = 0LL;
  BugCheckParameter4 = a2;
  memset(v33, 0, sizeof(v33));
  v25 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((unsigned __int64)v33, 0x20000uLL);
  CmpInitializeThreadInfo((__int64)&v32);
  v24[1] = v24;
  v13 = 0;
  v24[0] = v24;
  v28 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( CmpTraceRoutine && a1 )
    v25 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    if ( (_DWORD)BugCheckParameter4 == 1 )
    {
      v16 = 36;
      *((_QWORD *)&v29 + 1) = a5;
      v17 = 37;
    }
    else
    {
      if ( (_DWORD)BugCheckParameter4 )
        goto LABEL_21;
      v16 = 38;
      v17 = 39;
    }
    *(_QWORD *)&v29 = a4;
    LOBYTE(v15) = 1;
    *((_QWORD *)&v28 + 1) = a3;
    *(_QWORD *)&v28 = a1;
    v18 = CmpCallCallBacksEx(v16, (unsigned int)&v28, 0, v15, v17, a1, (__int64)v24);
    v19 = v18;
    if ( v18 < 0 )
    {
      if ( v18 == -1073740541 )
        v19 = 0;
      goto LABEL_18;
    }
    v8 = v26;
    v13 = 1;
  }
  if ( (_DWORD)BugCheckParameter4 == 1 )
  {
    KeySecurity = CmpQueryKeySecurity(a1, a3, a4, a5);
    goto LABEL_12;
  }
LABEL_21:
  if ( (_DWORD)BugCheckParameter4 )
  {
    if ( (_DWORD)BugCheckParameter4 == 2 )
      goto LABEL_13;
    if ( (_DWORD)BugCheckParameter4 != 3 )
      KeBugCheckEx(0x51u, 5uLL, 1uLL, *(_QWORD *)(a1 + 8), BugCheckParameter4);
    KeySecurity = CmpAssignKeySecurity(a1, a4);
  }
  else
  {
    KeySecurity = CmpSetKeySecurity(a1, a3, a4, v8, a7, v27);
  }
LABEL_12:
  v19 = KeySecurity;
  if ( KeySecurity >= 0 )
LABEL_13:
    v19 = 0;
  if ( !v13 )
    goto LABEL_18;
  if ( (_DWORD)BugCheckParameter4 == 1 )
  {
    v21 = 37;
LABEL_17:
    v19 = CmPostCallbackNotificationEx(v21, a1, v19, (__int64)&v28, 0LL, v24);
    goto LABEL_18;
  }
  if ( !(_DWORD)BugCheckParameter4 )
  {
    v21 = 39;
    goto LABEL_17;
  }
LABEL_18:
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  CmCleanupThreadInfo((__int64 *)&v32);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v22) = ((_DWORD)BugCheckParameter4 != 0) + 28;
    CmpTraceRoutine(v22, v33, v19, 0LL, v25, 0LL);
  }
  return v19;
}
