/*
 * XREFs of MiReferencePageForModifiedWrite @ 0x140349F80
 * Callers:
 *     MiBuildMappedCluster @ 0x14021C0D0 (MiBuildMappedCluster.c)
 *     MiGatherMappedPages @ 0x140297FB4 (MiGatherMappedPages.c)
 *     MiGetPageForWriteCluster @ 0x14046CB16 (MiGetPageForWriteCluster.c)
 *     MiAddToReservationCluster @ 0x140637CFC (MiAddToReservationCluster.c)
 *     MiBuildReservationCluster @ 0x140638834 (MiBuildReservationCluster.c)
 *     MiFillNoReservationCluster @ 0x1406399B8 (MiFillNoReservationCluster.c)
 *     MmStoreProbeAndLockPages @ 0x14065D7EC (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiGetPagePrivilege @ 0x140282FF0 (MiGetPagePrivilege.c)
 *     MiClearPfnImageVerified @ 0x140335648 (MiClearPfnImageVerified.c)
 *     MiChargeForWriteInProgressPage @ 0x14034A0B4 (MiChargeForWriteInProgressPage.c)
 */

__int64 __fastcall MiReferencePageForModifiedWrite(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  char v6; // al
  char v7; // al
  __int64 result; // rax
  __int64 v9; // rdx

  v4 = *(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL));
  if ( (a2 & 1) != 0 )
  {
    v5 = 1;
LABEL_3:
    if ( (a2 & 4) == 0 )
    {
      MiUnlinkPageFromListEx(BugCheckParameter2, 0LL);
      *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
    }
    v6 = *(_BYTE *)(BugCheckParameter2 + 34);
    ++*(_WORD *)(BugCheckParameter2 + 32);
    v7 = v6 | 8;
    *(_BYTE *)(BugCheckParameter2 + 34) = v7;
    if ( (a2 & 8) == 0 )
      *(_BYTE *)(BugCheckParameter2 + 34) = v7 & 0xEF;
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && (MiGetPagePrivilege(BugCheckParameter2, 1, 0LL) & 0x10) != 0 )
    {
      MiClearPfnImageVerified(BugCheckParameter2, 28);
    }
    return v5;
  }
  v9 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1 | 2u;
  if ( (a2 & 2) == 0 )
    v9 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 10) & 1;
  result = MiChargeForWriteInProgressPage(v4, v9);
  v5 = result;
  if ( (_DWORD)result )
    goto LABEL_3;
  return result;
}
