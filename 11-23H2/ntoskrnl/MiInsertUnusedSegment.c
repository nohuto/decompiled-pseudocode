/*
 * XREFs of MiInsertUnusedSegment @ 0x1402A0F28
 * Callers:
 *     MiCleanSection @ 0x1402016FC (MiCleanSection.c)
 *     MiCheckControlArea @ 0x14029FE50 (MiCheckControlArea.c)
 *     MiDeleteCachedSegment @ 0x140623EA4 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140624098 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140624A84 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140625118 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x14062535C (MiProcessDeleteOnClose.c)
 *     MiSetDeleteOnClose @ 0x14062633C (MiSetDeleteOnClose.c)
 * Callees:
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiComputePagedPoolSegmentBytes @ 0x1402A1024 (MiComputePagedPoolSegmentBytes.c)
 *     MiReleaseControlAreaCharges @ 0x1402A10A4 (MiReleaseControlAreaCharges.c)
 *     MiConvertStaticSubsections @ 0x1402A11A8 (MiConvertStaticSubsections.c)
 */

__int64 __fastcall MiInsertUnusedSegment(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // r8
  int v6; // edx
  int v7; // ecx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rbx

  v1 = *(_DWORD *)(a1 + 56);
  v2 = 0LL;
  if ( (v1 & 0x100) == 0 )
  {
    if ( (v1 & 0x20) == 0 )
      v2 = MiConvertStaticSubsections();
    v4 = *(_QWORD *)(qword_140C673C8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 1408));
    if ( !v2 )
      v2 = MiReleaseControlAreaCharges(a1, 1LL);
    v5 = 0x40000LL;
    v6 = *(_DWORD *)(a1 + 56) | 0x10000000;
    *(_DWORD *)(a1 + 56) = v6;
    v7 = v6;
    if ( (*(_DWORD *)(v4 + 4) & 1) != 0 && (v6 & 0x40000) == 0 )
    {
      v7 = v6 | 0x40000;
      *(_DWORD *)(a1 + 56) = v6 | 0x40000;
    }
    v8 = (_QWORD *)(a1 + 8);
    if ( (v7 & 0x40000) != 0 )
    {
      v9 = *(_QWORD **)(v4 + 1672);
      if ( *v9 == v4 + 1664 )
      {
        *v8 = v4 + 1664;
        *(_QWORD *)(a1 + 16) = v9;
        *v9 = v8;
        *(_QWORD *)(v4 + 1672) = v8;
        ++*(_DWORD *)(v4 + 1412);
        if ( !*(_BYTE *)(v4 + 1744) )
        {
          *(_BYTE *)(v4 + 1744) = 1;
          KiSetTimerEx(v4 + 1680, Mi10Milliseconds.QuadPart, 0, 0, 0LL);
        }
        goto LABEL_10;
      }
    }
    else
    {
      v9 = *(_QWORD **)(v4 + 1776);
      if ( *v9 == v4 + 1768 )
      {
        *v8 = v4 + 1768;
        *(_QWORD *)(a1 + 16) = v9;
        *v9 = v8;
        *(_QWORD *)(v4 + 1776) = v8;
LABEL_10:
        v10 = MiComputePagedPoolSegmentBytes(a1, v9, v5);
        *(_QWORD *)(v4 + 1760) += v10;
        v11 = v10;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1408));
        _InterlockedExchangeAdd64(&qword_140C65558, v11);
        return v2;
      }
    }
    __fastfail(3u);
  }
  return 0LL;
}
