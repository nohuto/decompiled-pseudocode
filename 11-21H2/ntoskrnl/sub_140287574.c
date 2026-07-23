/*
 * XREFs of sub_140287574 @ 0x140287574
 * Callers:
 *     sub_140246FD0 @ 0x140246FD0 (sub_140246FD0.c)
 *     sub_1406FC070 @ 0x1406FC070 (sub_1406FC070.c)
 *     sub_1406FDCD0 @ 0x1406FDCD0 (sub_1406FDCD0.c)
 *     sub_1407F854C @ 0x1407F854C (sub_1407F854C.c)
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 * Callees:
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall sub_140287574(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  KIRQL v4; // al
  __int64 v5; // rdx

  v3 = a2;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 24);
  LOBYTE(v5) = v4;
  *(_QWORD *)(a1 + 48) -= v3;
  return sub_140287660(a1, v5);
}
