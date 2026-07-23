/*
 * XREFs of PsReferenceVsmEnclave @ 0x1409B79A0
 * Callers:
 *     MiCanDeleteEnclave @ 0x140647698 (MiCanDeleteEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsReferenceVsmEnclave(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 16));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
