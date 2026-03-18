/*
 * XREFs of MiExpandVadBitMap @ 0x140709E04
 * Callers:
 *     MiInitializeVadBitMap @ 0x140709D14 (MiInitializeVadBitMap.c)
 *     MiFindEmptyAddressRange @ 0x1407B8560 (MiFindEmptyAddressRange.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x1403199E0 (MiMakeHyperRangeAccessible.c)
 *     MiUpdateVadBits @ 0x140709F54 (MiUpdateVadBits.c)
 *     MiExpandVadBitMapDown @ 0x140977E70 (MiExpandVadBitMapDown.c)
 */

__int64 __fastcall MiExpandVadBitMap(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r8
  __int64 v7; // r15
  __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rcx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v4 = *a1;
  v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28];
  v6 = a1[1];
  v7 = *a1 + 8 * (v6 - qword_140C51BE8);
  if ( a2 > a1[5] - v7 + 1 )
    return MiExpandVadBitMapDown(a1);
  v8 = (v4 + 8 * (v6 - qword_140C51BE8)) << 16;
  v9 = v6 + (v4 >> 3);
  if ( (int)MiMakeHyperRangeAccessible(v9, v6 + ((v4 + a2 - 1) >> 3), &v15) < 0 )
    return 0LL;
  *(_QWORD *)(v5 + 272) += v15;
  v10 = ((8 * ((a2 >> 6) + ((a2 & 0x3F) != 0))) >> 12) + (((8 * ((a2 >> 6) + ((a2 & 0x3F) != 0))) & 0xFFF) != 0);
  v11 = (v10 << 15) + *a1;
  v12 = (v10 << 15) + v7;
  *a1 = v11;
  v13 = a1[5];
  if ( v12 > v13 + 1 )
    *a1 = v13 - v12 + v11 + 1;
  if ( v9 == qword_140C51BE8 )
  {
    *(_QWORD *)a1[1] |= 1uLL;
    if ( v4 )
      a1[2] = 1LL;
  }
  MiUpdateVadBits(v8, v8 + (v10 << 31));
  return 1LL;
}
