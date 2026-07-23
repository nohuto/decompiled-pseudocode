/*
 * XREFs of PsUnregisterSiloMonitor @ 0x1409B1B50
 * Callers:
 *     <none>
 * Callees:
 *     PsGetHostSilo @ 0x140203DC0 (PsGetHostSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405E0074 @ 0x1405E0074 (sub_1405E0074.c)
 *     sub_1405E0084 @ 0x1405E0084 (sub_1405E0084.c)
 *     sub_14068A6A0 @ 0x14068A6A0 (sub_14068A6A0.c)
 *     sub_1409B4AD0 @ 0x1409B4AD0 (sub_1409B4AD0.c)
 *     sub_1409B4B90 @ 0x1409B4B90 (sub_1409B4B90.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PsUnregisterSiloMonitor(_BYTE *P)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r9
  _BYTE **v4; // rax
  void *i; // rcx
  __int64 v6; // rdx
  void *v7; // rax
  void *v8; // rsi
  __int64 HostSilo; // rax
  __int64 v10; // rdx
  PVOID *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // ebx
  _OWORD v16[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v16, 0, sizeof(v16));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1BE70, 0LL);
  v4 = *(_BYTE ***)P;
  if ( *(_OWORD *)P != 0LL )
  {
    if ( *((_QWORD *)P + 4) )
    {
      sub_14030D5C0((ULONG_PTR)PsInitialSystemProcess, 0LL, (__int64)v16, v3);
      for ( i = 0LL; ; i = v8 )
      {
        v7 = sub_14068A6A0(i, 1);
        v8 = v7;
        if ( !v7 )
          break;
        if ( (unsigned int)(*(_DWORD *)sub_1405E0084((__int64)v7) - 1) <= 2 )
          sub_14042A5E0(v8, v6);
      }
      if ( P[16] )
      {
        HostSilo = PsGetHostSilo();
        sub_14042A5E0(HostSilo, v10);
      }
      sub_1402D0930((__int64)v16, 0LL);
      v4 = *(_BYTE ***)P;
    }
    if ( v4[1] != P || (v11 = (PVOID *)*((_QWORD *)P + 1), *v11 != P) )
      __fastfail(3u);
    *v11 = v4;
    v4[1] = v11;
    *(_QWORD *)P = 0LL;
    *((_QWORD *)P + 1) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1BE70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C1BE70);
  sub_1402AFC00((ULONG_PTR)&qword_140C1BE70);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( P[16] )
  {
    sub_14030D5C0((ULONG_PTR)PsInitialSystemProcess, 0LL, (__int64)v16, v12);
    v13 = sub_1405E0074();
    LOBYTE(v14) = 1;
    v15 = sub_1409B4B90(v13, *((unsigned int *)P + 5), v14, 0LL);
    sub_1402D0930((__int64)v16, 0LL);
    if ( v15 )
    {
      if ( v15 != -1073741275 )
        __int2c();
    }
  }
  sub_1409B4AD0(*((unsigned int *)P + 5));
  ExFreePoolWithTag(P, 0x4D6C6953u);
}
