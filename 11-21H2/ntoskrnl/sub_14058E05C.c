/*
 * XREFs of sub_14058E05C @ 0x14058E05C
 * Callers:
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall sub_14058E05C(int a1)
{
  ULONG_PTR *v1; // rbx

  if ( a1 )
  {
    v1 = 0LL;
  }
  else
  {
    v1 = &StartContext;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C56920);
  }
  ++dword_140C52AEC;
  if ( !byte_140C52B33 )
    byte_140C52B33 = 1;
  if ( v1 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v1 + 1640);
}
