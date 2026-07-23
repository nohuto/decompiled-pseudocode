/*
 * XREFs of CmpDereferenceHive @ 0x14076AA84
 * Callers:
 *     CmpDoFlushAll @ 0x1402F6BDC (CmpDoFlushAll.c)
 * Callees:
 *     CmpDeleteHive @ 0x14074E8C4 (CmpDeleteHive.c)
 */

void __fastcall CmpDereferenceHive(__int64 a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4232), 0xFFFFFFFF) == 1 )
    CmpDeleteHive((_QWORD *)a1);
}
