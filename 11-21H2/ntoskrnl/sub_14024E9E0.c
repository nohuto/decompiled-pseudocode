/*
 * XREFs of sub_14024E9E0 @ 0x14024E9E0
 * Callers:
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 * Callees:
 *     sub_1402829D0 @ 0x1402829D0 (sub_1402829D0.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall sub_14024E9E0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rbx
  KIRQL v4; // al
  KIRQL v5; // di
  __int64 v6; // rbx
  __int64 v7; // rdx

  v1 = a1 + 1664;
  v3 = sub_140282AD0(a1 + 1664);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v3);
  *(_DWORD *)(v3 + 4) = 0;
  v5 = v4;
  *(_BYTE *)(v1 + 187) |= 1u;
  --*(_QWORD *)(a1 + 1272);
  sub_1402829D0(v1);
  v6 = *(_QWORD *)(v1 + 112);
  LOBYTE(v7) = v5;
  sub_14030FA80(v1, v7);
  return v6 - 4;
}
