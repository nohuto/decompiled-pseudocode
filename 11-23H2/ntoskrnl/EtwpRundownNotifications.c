/*
 * XREFs of EtwpRundownNotifications @ 0x1406C0288
 * Callers:
 *     EtwpDeleteRegistrationObject @ 0x1406BEDC0 (EtwpDeleteRegistrationObject.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     EtwpUnreferenceDataBlock @ 0x1407819D8 (EtwpUnreferenceDataBlock.c)
 *     EtwpReleaseQueueEntry @ 0x140781A00 (EtwpReleaseQueueEntry.c)
 */

void __fastcall EtwpRundownNotifications(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // rax
  PVOID P[2]; // [rsp+20h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 1424);
  if ( v2 )
  {
    P[1] = P;
    v4 = (__int64 *)(v2 + 16);
    P[0] = P;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v2 + 16, 0LL);
    v6 = (_QWORD *)(v2 + 24);
    v7 = (_QWORD *)*v6;
    while ( v7 != v6 )
    {
      v9 = v7;
      v7 = (_QWORD *)*v7;
      if ( v9[3] == a2 )
      {
        if ( (_QWORD *)v7[1] != v9
          || (v10 = (_QWORD *)v9[1], (_QWORD *)*v10 != v9)
          || (*v10 = v7, v7[1] = v10, v11 = P[0], *((PVOID **)P[0] + 1) != P) )
        {
LABEL_15:
          __fastfail(3u);
        }
        *v9 = P[0];
        v9[1] = P;
        v11[1] = v9;
        P[0] = v9;
      }
    }
    ExReleasePushLockEx(v4, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    while ( 1 )
    {
      v8 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P )
        goto LABEL_15;
      v12 = *(_QWORD *)P[0];
      if ( *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0] )
        goto LABEL_15;
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v12 + 8) = P;
      EtwpUnreferenceDataBlock(v8[2]);
      EtwpReleaseQueueEntry(v8);
    }
  }
}
