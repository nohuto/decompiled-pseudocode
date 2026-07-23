/*
 * XREFs of CmpFreezeHive @ 0x14087531C
 * Callers:
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1406D92F8 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1407690E0 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpSearchForOpenSubKeys @ 0x140875394 (CmpSearchForOpenSubKeys.c)
 *     CmpRecordUnloadEventForHive @ 0x140875408 (CmpRecordUnloadEventForHive.c)
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
