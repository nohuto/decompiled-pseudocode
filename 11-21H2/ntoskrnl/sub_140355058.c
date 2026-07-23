/*
 * XREFs of sub_140355058 @ 0x140355058
 * Callers:
 *     PoFxCompleteIdleCondition @ 0x14024E680 (PoFxCompleteIdleCondition.c)
 *     sub_140354990 @ 0x140354990 (sub_140354990.c)
 *     sub_140354C50 @ 0x140354C50 (sub_140354C50.c)
 *     sub_140354CBC @ 0x140354CBC (sub_140354CBC.c)
 *     sub_140354FB4 @ 0x140354FB4 (sub_140354FB4.c)
 *     sub_140355424 @ 0x140355424 (sub_140355424.c)
 *     sub_1403A4500 @ 0x1403A4500 (sub_1403A4500.c)
 *     sub_1403A46E4 @ 0x1403A46E4 (sub_1403A46E4.c)
 *     sub_1403A5020 @ 0x1403A5020 (sub_1403A5020.c)
 *     sub_1403B11B0 @ 0x1403B11B0 (sub_1403B11B0.c)
 *     sub_1403B5F40 @ 0x1403B5F40 (sub_1403B5F40.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x1403B6A70 (PoFxCompleteDevicePowerNotRequired.c)
 *     sub_1403D93F4 @ 0x1403D93F4 (sub_1403D93F4.c)
 *     PoFxCompleteIdleState @ 0x14045DD10 (PoFxCompleteIdleState.c)
 *     sub_14045DFDC @ 0x14045DFDC (sub_14045DFDC.c)
 *     sub_14045E1D6 @ 0x14045E1D6 (sub_14045E1D6.c)
 *     sub_14045E2C4 @ 0x14045E2C4 (sub_14045E2C4.c)
 *     sub_1405CBC30 @ 0x1405CBC30 (sub_1405CBC30.c)
 *     sub_1405CBD34 @ 0x1405CBD34 (sub_1405CBD34.c)
 *     sub_1405CC460 @ 0x1405CC460 (sub_1405CC460.c)
 *     sub_1405CCAC0 @ 0x1405CCAC0 (sub_1405CCAC0.c)
 *     sub_1405D209C @ 0x1405D209C (sub_1405D209C.c)
 *     sub_1405D218C @ 0x1405D218C (sub_1405D218C.c)
 *     sub_1405D25F0 @ 0x1405D25F0 (sub_1405D25F0.c)
 *     sub_1405D26F4 @ 0x1405D26F4 (sub_1405D26F4.c)
 *     sub_14082310C @ 0x14082310C (sub_14082310C.c)
 *     sub_1408233FC @ 0x1408233FC (sub_1408233FC.c)
 *     sub_14082473C @ 0x14082473C (sub_14082473C.c)
 *     sub_1409939F8 @ 0x1409939F8 (sub_1409939F8.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x140355110 (KeGetCurrentProcessorNumberEx.c)
 */

void __fastcall sub_140355058(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdi

  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 )
    {
      v7 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 856), 1u) % *(_DWORD *)(v4 + 840);
      v8 = *(_QWORD *)(v4 + 848);
      v9 = 3 * v7;
      *(_QWORD *)(v8 + 8 * v9) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v8 + 8 * v9 + 8) = a3;
      *(_BYTE *)(v8 + 8 * v9 + 9) = a2;
      *(_WORD *)(v8 + 8 * v9 + 10) = KeGetCurrentProcessorNumberEx(0LL);
      *(_WORD *)(v8 + 8 * v9 + 12) = *((_WORD *)KeGetCurrentThread() + 612);
      *(_WORD *)(v8 + 8 * v9 + 14) = *((_WORD *)KeGetCurrentThread() + 616);
      *(_QWORD *)(v8 + 8 * v9 + 16) = a4;
    }
  }
}
