/*
 * XREFs of sub_14037ED14 @ 0x14037ED14
 * Callers:
 *     sub_14037EEA8 @ 0x14037EEA8 (sub_14037EEA8.c)
 *     sub_1403944E0 @ 0x1403944E0 (sub_1403944E0.c)
 * Callees:
 *     sub_140237D58 @ 0x140237D58 (sub_140237D58.c)
 *     sub_14038032C @ 0x14038032C (sub_14038032C.c)
 *     sub_140380708 @ 0x140380708 (sub_140380708.c)
 *     sub_140381A7C @ 0x140381A7C (sub_140381A7C.c)
 *     sub_140381C90 @ 0x140381C90 (sub_140381C90.c)
 */

__int64 __fastcall sub_14037ED14(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v6; // r14d
  int v7; // eax
  __int64 v8; // rax
  int v9; // ecx
  int v10; // eax
  int v11; // esi
  int v12; // eax
  __int64 v13; // rax
  int v14; // r8d

  v6 = ((unsigned int)a2 - ((a2 & 0xFFFFF000) + *(_DWORD *)(a1 + 472))) / *(_DWORD *)(a1 + 464)
     + (*(_DWORD *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456));
  v7 = *(_DWORD *)(a1 + 112);
  if ( v7 == -1 || !v7 )
    v8 = a1 + 96;
  else
    v8 = *(_QWORD *)(a1 + 88) + 16LL * (unsigned int)(v7 - 1);
  if ( **(_DWORD **)(v8 + 8) != v6 )
    __int2c();
  v9 = *(_DWORD *)(a1 + 184);
  if ( (v9 & 1) != 0 )
  {
    sub_140237D58((__int64 *)(a1 + 128), a1 + 152);
    v9 = *(_DWORD *)(a1 + 184);
  }
  *(_DWORD *)(a1 + 184) = v9 & 0xFFFFFFFE;
  v10 = sub_140381C90(a1 + 64, a3);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( v10 != -1073741818 )
      __int2c();
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 776) )
    {
      if ( (int)sub_140380708(a1 + 128, v6, a1 + 152) < 0 )
        __int2c();
      v12 = *(_DWORD *)(a1 + 176);
      if ( v12 == -1 || !v12 )
        v13 = a1 + 160;
      else
        v13 = *(_QWORD *)(a1 + 152) + 16LL * (unsigned int)(v12 - 1);
      if ( **(_DWORD **)(v13 + 8) != v6 )
        __int2c();
      v11 = sub_140381A7C(a1 + 128, a1 + 152);
      if ( v11 < 0 )
        __int2c();
    }
    v14 = 4096;
    if ( (*(_DWORD *)(a2 + 4) & 0xFFF) != 0 )
      v14 = *(_DWORD *)(a2 + 4) & 0xFFF;
    sub_14038032C(
      a1,
      (unsigned int)(*(_DWORD *)a2 >> *(_DWORD *)(a1 + 812)),
      -((unsigned int)(*(_DWORD *)(a1 + 824) + 15 + v14) >> 4),
      0LL);
  }
  return (unsigned int)v11;
}
