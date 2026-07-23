/*
 * XREFs of sub_14025AA04 @ 0x14025AA04
 * Callers:
 *     IoUnregisterPlugPlayNotificationEx @ 0x1406E7890 (IoUnregisterPlugPlayNotificationEx.c)
 *     IoUnregisterPlugPlayNotification @ 0x1406E78B0 (IoUnregisterPlugPlayNotification.c)
 *     sub_14098B48C @ 0x14098B48C (sub_14098B48C.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14078D340 @ 0x14078D340 (sub_14078D340.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14025AA04(PVOID P, char a2)
{
  struct _FAST_MUTEX *v2; // rbx
  char v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v8; // rsi
  PVOID *v9; // r15
  PVOID *v10; // r14
  PVOID *v11; // rax
  PVOID **v12; // rdx

  v2 = (struct _FAST_MUTEX *)*((_QWORD *)P + 8);
  v5 = 0;
  ExAcquireFastMutex(&stru_140C44900);
  if ( BYTE2(NlsMbOemCodePageTag) )
  {
    ExAcquireFastMutex(&stru_140C46A40);
    v8 = (PVOID *)qword_140D3CE88;
    while ( v8 != &qword_140D3CE88 )
    {
      v9 = v8 + 2;
      v10 = v8;
      if ( v8[2] == P )
      {
        v5 = 1;
        if ( v2 )
          ExAcquireFastMutex(v2);
        v11 = (PVOID *)*v8;
        v8 = v11;
        if ( v11[1] != v10 || (v12 = (PVOID **)v10[1], *v12 != v10) )
          __fastfail(3u);
        *v12 = v11;
        v11[1] = v12;
        sub_14078D340(*v9);
        if ( v2 )
          KeReleaseGuardedMutex(v2);
        ExFreePoolWithTag(v10, 0x37706E50u);
      }
      else
      {
        v8 = (PVOID *)*v8;
      }
    }
    KeReleaseGuardedMutex(&stru_140C46A40);
  }
  KeReleaseGuardedMutex(&stru_140C44900);
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)P + 9), 1u);
  }
  else if ( v2 )
  {
    ExAcquireFastMutex(v2);
  }
  if ( !*((_BYTE *)P + 58) || v5 )
  {
    *((_BYTE *)P + 58) = 1;
    if ( a2 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)P + 9));
      sub_1402F9540(KeGetCurrentThread());
      if ( v2 )
        ExAcquireFastMutex(v2);
    }
    sub_14078D340(P);
  }
  else if ( a2 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)P + 9));
    sub_1402F9540(KeGetCurrentThread());
    return 0LL;
  }
  if ( v2 )
    KeReleaseGuardedMutex(v2);
  return 0LL;
}
