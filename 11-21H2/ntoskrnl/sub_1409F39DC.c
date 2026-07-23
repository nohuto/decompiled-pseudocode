/*
 * XREFs of sub_1409F39DC @ 0x1409F39DC
 * Callers:
 *     sub_1409F27B0 @ 0x1409F27B0 (sub_1409F27B0.c)
 *     sub_1409F3EC0 @ 0x1409F3EC0 (sub_1409F3EC0.c)
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1405716A4 @ 0x1405716A4 (sub_1405716A4.c)
 *     sub_140635EEC @ 0x140635EEC (sub_140635EEC.c)
 *     sub_1406D520C @ 0x1406D520C (sub_1406D520C.c)
 *     sub_1407B6B90 @ 0x1407B6B90 (sub_1407B6B90.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1409B2B50 (PsRemoveLoadImageNotifyRoutine.c)
 *     sub_1409F1CB0 @ 0x1409F1CB0 (sub_1409F1CB0.c)
 */

char __fastcall sub_1409F39DC(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  void *v2; // r15
  int v4; // eax
  struct _KTHREAD *v5; // rax
  struct _KTHREAD *v6; // rax
  __int64 v7; // r13
  int v8; // eax
  __int64 v9; // rcx
  __int64 *i; // rcx
  __int64 v11; // rbp
  struct _KTHREAD *v12; // rcx
  __int64 *v13; // rax
  __int64 *v14; // rsi
  struct _KTHREAD *v15; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15D60, 0LL);
  qword_140C15D68 = (__int64)KeGetCurrentThread();
  if ( qword_140C15D78 == a1 )
  {
    v4 = *(_DWORD *)(a1 + 1216);
    if ( (v4 & 2) == 0 )
    {
      *(_DWORD *)(a1 + 1216) = v4 | 2;
      qword_140C15D68 = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15D60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C15D60);
      sub_1402AFC00((ULONG_PTR)&qword_140C15D60);
      sub_1402F9540((__int64)KeGetCurrentThread());
      ExWaitForRundownProtectionRelease(&stru_140C15D80);
      ExRundownCompleted(&stru_140C15D80);
      v5 = KeGetCurrentThread();
      --*((_WORD *)v5 + 242);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15D60, 0LL);
      v6 = KeGetCurrentThread();
      v2 = (void *)qword_140C15D78;
      qword_140C15D78 = 0LL;
      v7 = qword_140C15D88;
      qword_140C15D68 = (__int64)v6;
      v8 = *(_DWORD *)(a1 + 1148);
      if ( (v8 & 8) != 0 )
      {
        sub_1405716A4(qword_140C15D88 + 16);
        *(_DWORD *)(a1 + 1148) &= ~8u;
        v8 = *(_DWORD *)(a1 + 1148);
      }
      if ( (v8 & 2) != 0 )
      {
        PsRemoveLoadImageNotifyRoutine((PLOAD_IMAGE_NOTIFY_ROUTINE)NotifyRoutine);
        *(_DWORD *)(a1 + 1148) &= ~2u;
        v8 = *(_DWORD *)(a1 + 1148);
      }
      if ( (v8 & 4) != 0 )
      {
        v9 = qword_140D05008;
        *(_DWORD *)(qword_140D05008 + 4576) &= 0xFFFFFDFB;
        *(_DWORD *)(v9 + 4572) &= 0xFFFFEFFB;
        sub_1406D520C(v9, 0, 9u);
        *(_DWORD *)(a1 + 1148) &= ~4u;
      }
      for ( i = 0LL; ; i = v14 )
      {
        v13 = sub_1407B6B90(i);
        v14 = v13;
        if ( !v13 )
          break;
        v11 = v13[318];
        if ( v11 )
        {
          v12 = KeGetCurrentThread();
          --*((_WORD *)v12 + 242);
          ExAcquirePushLockExclusiveEx(v11 + 8, 0LL);
          *(_QWORD *)(v11 + 16) = KeGetCurrentThread();
          sub_1409F1CB0(v11, 1);
          *(_QWORD *)(v11 + 16) = 0LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v11 + 8);
          sub_1402AFC00(v11 + 8);
          sub_1402F9540((__int64)KeGetCurrentThread());
        }
      }
      sub_140635EEC(v7);
      *(_DWORD *)(a1 + 1148) &= ~1u;
    }
  }
  v15 = KeGetCurrentThread();
  if ( (struct _KTHREAD *)qword_140C15D68 == v15 )
  {
    qword_140C15D68 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15D60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C15D60);
    sub_1402AFC00((ULONG_PTR)&qword_140C15D60);
    LOBYTE(v15) = sub_1402F9540((__int64)KeGetCurrentThread());
  }
  if ( v2 )
    LOBYTE(v15) = ObfDereferenceObject(v2);
  return (char)v15;
}
