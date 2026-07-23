/*
 * XREFs of CmpSecurityMethod @ 0x1406D5900
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x14022FC60 (CmpIsRegistryLockAcquired.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402A3220 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     CmPostCallbackNotificationEx @ 0x140691E30 (CmPostCallbackNotificationEx.c)
 *     CmpQueryKeySecurity @ 0x1406D5BD0 (CmpQueryKeySecurity.c)
 *     CmpCallCallBacksEx @ 0x1406E8620 (CmpCallCallBacksEx.c)
 *     CmpSetKeySecurity @ 0x14070C5CC (CmpSetKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x1408585CC (CmpAssignKeySecurity.c)
 */

__int64 __fastcall CmpSecurityMethod(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  int v8; // ebx
  ULONG_PTR BugCheckParameter4; // rsi
  char v13; // di
  struct _KTHREAD *CurrentThread; // rax
  int v15; // r9d
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  int KeySecurity; // eax
  __int64 v21; // rcx
  _QWORD v23[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  __int128 v27; // [rsp+68h] [rbp-98h] BYREF
  __int128 v28; // [rsp+78h] [rbp-88h]
  __int128 v29; // [rsp+88h] [rbp-78h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  __int128 v31; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v32; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+BCh] [rbp-44h]
  __int128 *v35; // [rsp+C0h] [rbp-40h]
  unsigned int v36; // [rsp+C8h] [rbp-38h]
  __int128 v37; // [rsp+CCh] [rbp-34h]
  __int64 v38; // [rsp+DCh] [rbp-24h]
  int v39; // [rsp+E4h] [rbp-1Ch]
  _OWORD v40[2]; // [rsp+E8h] [rbp-18h] BYREF

  v8 = a6;
  v25 = a6;
  v26 = a8;
  v31 = 0LL;
  BugCheckParameter4 = a2;
  memset(v40, 0, sizeof(v40));
  v24 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((__int64)v40, 0x20000LL);
  CmpInitializeThreadInfo((__int64)&v31);
  v23[1] = v23;
  v13 = 0;
  v23[0] = v23;
  v27 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( CmpTraceRoutine && a1 )
    v24 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
  {
LABEL_10:
    if ( (_DWORD)BugCheckParameter4 == 1 )
    {
      KeySecurity = CmpQueryKeySecurity(a1, a3, a4, a5);
      goto LABEL_12;
    }
LABEL_23:
    if ( (_DWORD)BugCheckParameter4 )
    {
      if ( (_DWORD)BugCheckParameter4 == 2 )
      {
LABEL_13:
        v19 = 0;
LABEL_14:
        if ( v13 )
        {
          if ( (_DWORD)BugCheckParameter4 == 1 )
          {
            if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v23[0] != v23 )
            {
              v34 = 0;
              v35 = &v27;
              v38 = 0LL;
              v39 = 0;
              v37 = 0LL;
              v32 = a1;
              v33 = v19;
              v36 = v19;
              CmpCallCallBacksEx(37, (unsigned int)&v32, 0, 0, 37, a1, (__int64)v23);
              v19 = v36;
            }
          }
          else if ( !(_DWORD)BugCheckParameter4 )
          {
            v19 = CmPostCallbackNotificationEx(39, a1, v19, (__int64)&v27, 0LL, v23);
          }
        }
        goto LABEL_20;
      }
      if ( (_DWORD)BugCheckParameter4 != 3 )
        KeBugCheckEx(0x51u, 5uLL, 1uLL, *(_QWORD *)(a1 + 8), BugCheckParameter4);
      KeySecurity = CmpAssignKeySecurity(a1, a4);
    }
    else
    {
      KeySecurity = CmpSetKeySecurity(a1, a3, a4, v8, a7, v26);
    }
LABEL_12:
    v19 = KeySecurity;
    if ( KeySecurity < 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( (_DWORD)BugCheckParameter4 == 1 )
  {
    v16 = 36;
    *((_QWORD *)&v28 + 1) = a5;
    v17 = 37;
  }
  else
  {
    if ( (_DWORD)BugCheckParameter4 )
      goto LABEL_23;
    v16 = 38;
    v17 = 39;
  }
  *(_QWORD *)&v28 = a4;
  LOBYTE(v15) = 1;
  *((_QWORD *)&v27 + 1) = a3;
  *(_QWORD *)&v27 = a1;
  v18 = CmpCallCallBacksEx(v16, (unsigned int)&v27, 0, v15, v17, a1, (__int64)v23);
  v19 = v18;
  if ( v18 >= 0 )
  {
    v8 = v25;
    v13 = 1;
    goto LABEL_10;
  }
  if ( v18 == -1073740541 )
    v19 = 0;
LABEL_20:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  CmCleanupThreadInfo((__int64 *)&v31);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v21) = ((_DWORD)BugCheckParameter4 != 0) + 28;
    CmpTraceRoutine(v21, v40, v19, 0LL);
  }
  return v19;
}
