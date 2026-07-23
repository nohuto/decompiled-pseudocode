/*
 * XREFs of sub_1405A7158 @ 0x1405A7158
 * Callers:
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 * Callees:
 *     sub_140250924 @ 0x140250924 (sub_140250924.c)
 *     sub_140251340 @ 0x140251340 (sub_140251340.c)
 *     sub_140256DF8 @ 0x140256DF8 (sub_140256DF8.c)
 *     sub_14025E274 @ 0x14025E274 (sub_14025E274.c)
 *     sub_14027456C @ 0x14027456C (sub_14027456C.c)
 *     sub_1402CD940 @ 0x1402CD940 (sub_1402CD940.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_1405A7A00 @ 0x1405A7A00 (sub_1405A7A00.c)
 *     sub_14096F8CC @ 0x14096F8CC (sub_14096F8CC.c)
 */

__int64 __fastcall sub_1405A7158(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 v5; // r14
  unsigned int v6; // r15d
  unsigned int v7; // ebx

  v2 = *(_QWORD *)(a2 + 208);
  v5 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 34) & 2) != 0 )
  {
    v6 = sub_1402CD940(a1, *(_QWORD *)(a2 + 224));
    sub_140256DF8(v5, v6, v2);
  }
  else
  {
    v6 = 0;
  }
  sub_140251340((__int64 *)v2);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  ++*(_QWORD *)(v5 + 40);
  ++*(_QWORD *)(v5 + 48);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  sub_1405A7A00(a1);
  v7 = sub_14096F8CC(v2, 2, v6);
  sub_14027456C((PSLIST_ENTRY)a2);
  sub_14025E274(v5);
  sub_140250924((__int64 *)v2);
  return v7;
}
