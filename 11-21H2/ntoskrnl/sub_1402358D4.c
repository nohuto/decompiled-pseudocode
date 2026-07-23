/*
 * XREFs of sub_1402358D4 @ 0x1402358D4
 * Callers:
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x14024D7F4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1402C1F50 @ 0x1402C1F50 (sub_1402C1F50.c)
 *     sub_14032E130 @ 0x14032E130 (sub_14032E130.c)
 *     sub_14033A5B0 @ 0x14033A5B0 (sub_14033A5B0.c)
 *     sub_1405ABD20 @ 0x1405ABD20 (sub_1405ABD20.c)
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 * Callees:
 *     sub_14028ECC8 @ 0x14028ECC8 (sub_14028ECC8.c)
 *     sub_1402EE0E0 @ 0x1402EE0E0 (sub_1402EE0E0.c)
 *     sub_1403106A4 @ 0x1403106A4 (sub_1403106A4.c)
 *     sub_1403106E0 @ 0x1403106E0 (sub_1403106E0.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

void __fastcall sub_1402358D4(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rt2
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx

  v3 = a3;
  if ( (*(_DWORD *)(a1 + 1124) & 0x20) == 0 )
  {
    if ( a3
      || (ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL)
                                                          + 284LL)),
          v3 = sub_1403126F0(a2),
          ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL)
                                                            + 284LL)),
          v3) )
    {
      if ( (*(_DWORD *)(v3 + 48) & 0x600000) == 0x600000 )
      {
        v5 = sub_1402EE0E0(v3, 4LL);
        v6 = sub_14028ECC8();
        v7 = ((a2 >> 12) - (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32))) % v6;
        v8 = ((a2 >> 12) - (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32))) / v6;
        sub_1403106E0(v3, v7);
        LOBYTE(v9) = 2;
        _bittestandset64(*(signed __int64 **)(v5 + 16), v8);
        sub_1403106A4(v3, v9);
      }
    }
  }
}
