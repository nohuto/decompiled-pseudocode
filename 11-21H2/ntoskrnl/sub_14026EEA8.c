/*
 * XREFs of sub_14026EEA8 @ 0x14026EEA8
 * Callers:
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall sub_14026EEA8(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rax

  if ( !a4 )
  {
    v8 = sub_140282AD0(a1);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v8 + 64));
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 152), a3);
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), a3);
  if ( !a4 )
  {
    v9 = sub_140282AD0(a1);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v9 + 64));
  }
}
