/*
 * XREFs of CmpFreezeHive @ 0x1408750DC
 * Callers:
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406D92C8 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140768EF0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpSearchForOpenSubKeys @ 0x140875154 (CmpSearchForOpenSubKeys.c)
 *     CmpRecordUnloadEventForHive @ 0x1408751C8 (CmpRecordUnloadEventForHive.c)
 */

__int64 __fastcall CmpFreezeHive(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // edi

  v2 = *(_QWORD *)(a1 + 32);
  CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)a1);
  if ( a2 && (v5 = CmpRecordUnloadEventForHive(v2, a2), v5 < 0) )
  {
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)a1);
  }
  else
  {
    CmpSearchForOpenSubKeys(a1, 2LL);
    *(_WORD *)(a1 + 8) |= 0x20u;
    v5 = 0;
    *(_BYTE *)(v2 + 2944) = 1;
    *(_QWORD *)(v2 + 2936) = a1;
  }
  return (unsigned int)v5;
}
