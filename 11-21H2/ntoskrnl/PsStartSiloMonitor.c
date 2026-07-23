/*
 * XREFs of PsStartSiloMonitor @ 0x140852D60
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
 *     sub_1405E0084 @ 0x1405E0084 (sub_1405E0084.c)
 *     sub_14068A6A0 @ 0x14068A6A0 (sub_14068A6A0.c)
 *     sub_140852F10 @ 0x140852F10 (sub_140852F10.c)
 *     sub_1409B1D40 @ 0x1409B1D40 (sub_1409B1D40.c)
 */

__int64 __fastcall PsStartSiloMonitor(__int64 a1)
{
  int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r9
  void *i; // rcx
  void *v6; // rax
  __int64 HostSilo; // rsi
  char v8; // si
  int v9; // r14d
  void *j; // rcx
  void *v11; // rax
  void *v12; // rdi
  __int64 v13; // r9
  __int64 *v14; // rax
  char v15; // bp
  void *v17; // r8
  int v18; // esi
  void *k; // rcx
  void *v20; // rax
  void *v21; // rdi
  __int64 v22; // rax
  _OWORD v23[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0;
  memset(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1BE70, 0LL);
  if ( !*(_QWORD *)a1 && !*(_QWORD *)(a1 + 8) )
  {
    if ( !*(_BYTE *)(a1 + 17) )
    {
      for ( i = 0LL; ; i = v17 )
      {
        v6 = sub_14068A6A0(i, 1);
        if ( !v6 )
          break;
        if ( (unsigned int)(*(_DWORD *)sub_1405E0084((__int64)v6) - 1) <= 2 )
        {
          v1 = -1073741637;
          goto LABEL_15;
        }
      }
    }
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( !*(_BYTE *)(a1 + 16) )
        goto LABEL_10;
      sub_14030D5C0((ULONG_PTR)PsInitialSystemProcess, 0LL, (__int64)v23, v4);
      HostSilo = PsGetHostSilo();
      v1 = sub_140852F10(HostSilo, a1);
      if ( v1 < 0 && *(_QWORD *)(a1 + 32) )
        sub_1409B1D40(HostSilo, a1);
      sub_1402D0930((__int64)v23, 0LL);
      if ( v1 >= 0 )
      {
LABEL_10:
        v8 = 0;
        v9 = 0;
        sub_14030D5C0((ULONG_PTR)PsInitialSystemProcess, 0LL, (__int64)v23, v4);
        for ( j = 0LL; ; j = v12 )
        {
          v11 = sub_14068A6A0(j, 1);
          v12 = v11;
          if ( !v11 )
            break;
          if ( (unsigned int)(*(_DWORD *)sub_1405E0084((__int64)v11) - 1) <= 2 )
          {
            ++v9;
            if ( (int)sub_140852F10(v12, a1) < 0 )
              v8 = 1;
          }
        }
        sub_1402D0930((__int64)v23, 0LL);
        if ( v8 )
        {
          if ( *(_QWORD *)(a1 + 32) )
          {
            v18 = 0;
            sub_14030D5C0((ULONG_PTR)PsInitialSystemProcess, 0LL, (__int64)v23, v13);
            for ( k = 0LL; ; k = v21 )
            {
              v20 = sub_14068A6A0(k, 1);
              v21 = v20;
              if ( !v20 )
                break;
              if ( (unsigned int)(*(_DWORD *)sub_1405E0084((__int64)v20) - 1) <= 2 )
              {
                sub_1409B1D40(v21, a1);
                ++v18;
              }
            }
            if ( v9 != v18 )
              __int2c();
            if ( *(_BYTE *)(a1 + 16) )
            {
              v22 = PsGetHostSilo();
              sub_140852F10(v22, a1);
            }
            sub_1402D0930((__int64)v23, 0LL);
          }
          v1 = -1073741248;
        }
        else
        {
          v14 = (__int64 *)qword_140C1BE68;
          if ( *(__int64 **)qword_140C1BE68 != &qword_140C1BE60 )
            __fastfail(3u);
          *(_QWORD *)a1 = &qword_140C1BE60;
          v1 = 0;
          *(_QWORD *)(a1 + 8) = v14;
          *v14 = a1;
          qword_140C1BE68 = a1;
        }
      }
    }
  }
LABEL_15:
  v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1BE70, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C1BE70);
  sub_1402AFC00((ULONG_PTR)&qword_140C1BE70);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v1;
}
