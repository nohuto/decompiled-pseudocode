/*
 * XREFs of RaCreateMiniport @ 0x1C00A8F68
 * Callers:
 *     RaidCreateAdapter @ 0x1C003A96C (RaidCreateAdapter.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 */

__int64 __fastcall RaCreateMiniport(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)(a1 + 8), 0, 0xE0uLL);
  result = 0LL;
  *(_BYTE *)(a1 + 248) &= 0xFCu;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
