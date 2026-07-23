/*
 * XREFs of sub_14021F468 @ 0x14021F468
 * Callers:
 *     FsRtlPrivateLock @ 0x14021E2B0 (FsRtlPrivateLock.c)
 * Callees:
 *     sub_140202234 @ 0x140202234 (sub_140202234.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 */

char __fastcall sub_14021F468(_QWORD *a1, char a2)
{
  char v4; // bl
  PSLIST_ENTRY v5; // rax

  ExAcquireFastMutex(&FastMutex);
  v4 = 0;
  if ( a1[3] )
    goto LABEL_4;
  v5 = sub_140202234((__int64)&stru_140CE2780);
  if ( v5 )
  {
    v5->Next = (_SLIST_ENTRY *)-1LL;
    *((_QWORD *)&v5[1].Next + 1) = 0LL;
    v5[2].Next = 0LL;
    *((_QWORD *)&v5[2].Next + 1) = 0LL;
    v5[3].Next = 0LL;
    *((_QWORD *)&v5[3].Next + 1) = 0LL;
    *((_QWORD *)&v5->Next + 1) = *a1;
    v5[1].Next = (_SLIST_ENTRY *)a1[1];
    a1[7] = 0LL;
    a1[10] = 0LL;
    a1[3] = v5;
LABEL_4:
    v4 = 1;
    goto LABEL_7;
  }
  if ( !a2 )
    RtlRaiseStatus(-1073741670);
LABEL_7:
  KeReleaseGuardedMutex(&FastMutex);
  return v4;
}
