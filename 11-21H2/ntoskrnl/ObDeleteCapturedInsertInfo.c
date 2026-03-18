/*
 * XREFs of ObDeleteCapturedInsertInfo @ 0x140680050
 * Callers:
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     ExCreateDpcEvent @ 0x14063E200 (ExCreateDpcEvent.c)
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 */

PSLIST_ENTRY __fastcall ObDeleteCapturedInsertInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  PSLIST_ENTRY result; // rax

  if ( (*(_BYTE *)(a1 - 21) & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 - 16);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 32);
      if ( v6 )
      {
        LOBYTE(v5) = *(_BYTE *)(v5 + 16);
        LOBYTE(a3) = 1;
        SeReleaseSecurityDescriptor(v6, v5, a3, a4);
        *(_QWORD *)(*(_QWORD *)(a1 - 16) + 32LL) = 0LL;
        v5 = *(_QWORD *)(a1 - 16);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[4].P;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) < P->Depth
        || (++P->FreeMisses,
            P = CurrentPrcb->PPLookasideList[4].L,
            ++P->TotalFrees,
            LOWORD(P->ListHead.Alignment) < P->Depth) )
      {
        result = RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v5);
      }
      else
      {
        ++P->FreeMisses;
        result = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64))P->FreeEx)(v5);
      }
      *(_QWORD *)(a1 - 16) = 0LL;
    }
  }
  return result;
}
