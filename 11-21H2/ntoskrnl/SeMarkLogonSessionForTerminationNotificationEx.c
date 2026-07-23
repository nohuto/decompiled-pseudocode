/*
 * XREFs of SeMarkLogonSessionForTerminationNotificationEx @ 0x1406E8720
 * Callers:
 *     SeMarkLogonSessionForTerminationNotification @ 0x1406E8700 (SeMarkLogonSessionForTerminationNotification.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 */

__int64 __fastcall SeMarkLogonSessionForTerminationNotificationEx(_DWORD *a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v7; // rbp

  v4 = (unsigned int)(1529154084 * *a1) >> 28;
  v5 = qword_140D3CA78 + 8 * v4;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v7 = &stru_140CF66C0 + (v4 & 3);
  ExAcquireResourceExclusiveLite(v7, 1u);
  while ( 1 )
  {
    v5 = *(_QWORD *)v5;
    if ( !v5 )
      break;
    if ( (*(_QWORD *)(v5 + 160) == a2 || !a2) && *a1 == *(_DWORD *)(v5 + 8) && a1[1] == *(_DWORD *)(v5 + 12) )
    {
      *(_DWORD *)(v5 + 32) |= 1u;
      break;
    }
  }
  ExReleaseResourceLite(v7);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v5 == 0 ? 0xC0000225 : 0;
}
