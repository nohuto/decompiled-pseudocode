/*
 * XREFs of sub_14057FE58 @ 0x14057FE58
 * Callers:
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall sub_14057FE58(__int64 a1)
{
  volatile LONG *v2; // rbx
  KIRQL v3; // al

  v2 = (volatile LONG *)sub_140282AD0(a1);
  v3 = ExAcquireSpinLockExclusive(v2);
  *((_DWORD *)v2 + 1) = 0;
  *(_BYTE *)(a1 + 187) &= 0x9Fu;
  sub_14030FA80(a1, v3);
}
