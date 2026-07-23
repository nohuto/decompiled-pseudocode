/*
 * XREFs of sub_140682D58 @ 0x140682D58
 * Callers:
 *     sub_1406789B0 @ 0x1406789B0 (sub_1406789B0.c)
 *     sub_140682C34 @ 0x140682C34 (sub_140682C34.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall sub_140682D58(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D3B1F0, 0LL);
}
