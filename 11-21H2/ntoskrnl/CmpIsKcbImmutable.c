/*
 * XREFs of CmpIsKcbImmutable @ 0x140721FB8
 * Callers:
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsKcbImmutable(__int64 a1)
{
  return (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 160LL) & 0x100000) != 0;
}
