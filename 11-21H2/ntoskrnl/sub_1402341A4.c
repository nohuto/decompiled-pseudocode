/*
 * XREFs of sub_1402341A4 @ 0x1402341A4
 * Callers:
 *     sub_140233B60 @ 0x140233B60 (sub_140233B60.c)
 *     sub_140234128 @ 0x140234128 (sub_140234128.c)
 *     sub_14031B510 @ 0x14031B510 (sub_14031B510.c)
 *     sub_14045BCA2 @ 0x14045BCA2 (sub_14045BCA2.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 *     sub_140584A30 @ 0x140584A30 (sub_140584A30.c)
 *     sub_1405B60A0 @ 0x1405B60A0 (sub_1405B60A0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 */

__int64 __fastcall sub_1402341A4(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v1 )
  {
    sub_14020D8D0(*(_QWORD *)(a1 + 24), v1);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    LOBYTE(v1) = *(_BYTE *)(a1 + 7);
    result = sub_1402B0CE0(v3, v1);
  }
  else
  {
    if ( (*(_DWORD *)a1 & 0x400) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C51BA4);
    LOBYTE(v1) = *(_BYTE *)(a1 + 7);
    result = sub_14030FA80(v3, v1);
  }
  *(_BYTE *)(a1 + 4) |= 1u;
  return result;
}
