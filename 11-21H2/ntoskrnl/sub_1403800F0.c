/*
 * XREFs of sub_1403800F0 @ 0x1403800F0
 * Callers:
 *     sub_14037FDA0 @ 0x14037FDA0 (sub_14037FDA0.c)
 * Callees:
 *     sub_140237D58 @ 0x140237D58 (sub_140237D58.c)
 *     sub_140237ED8 @ 0x140237ED8 (sub_140237ED8.c)
 *     sub_140237F80 @ 0x140237F80 (sub_140237F80.c)
 *     sub_140261818 @ 0x140261818 (sub_140261818.c)
 *     sub_14038032C @ 0x14038032C (sub_14038032C.c)
 *     sub_1403803F8 @ 0x1403803F8 (sub_1403803F8.c)
 *     sub_140380708 @ 0x140380708 (sub_140380708.c)
 *     sub_140380900 @ 0x140380900 (sub_140380900.c)
 *     sub_140380E44 @ 0x140380E44 (sub_140380E44.c)
 *     sub_140381130 @ 0x140381130 (sub_140381130.c)
 *     sub_140381A7C @ 0x140381A7C (sub_140381A7C.c)
 *     sub_140381C90 @ 0x140381C90 (sub_140381C90.c)
 *     sub_140381E98 @ 0x140381E98 (sub_140381E98.c)
 *     sub_1405FB4F4 @ 0x1405FB4F4 (sub_1405FB4F4.c)
 */

__int64 __fastcall sub_1403800F0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  int v5; // ecx
  char v6; // bl
  int v9; // ecx
  int v10; // ecx
  unsigned int v11; // r13d
  int v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // r8d
  ULONGLONG *v16; // rax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // [rsp+80h] [rbp+8h] BYREF
  _BYTE *v21; // [rsp+88h] [rbp+10h]
  __int64 v22; // [rsp+90h] [rbp+18h] BYREF

  v21 = (_BYTE *)a2;
  v3 = a1 + 24;
  v5 = *(_DWORD *)(a1 + 56);
  v6 = 1;
  if ( (v5 & 1) != 0 )
  {
    sub_140237F80((__int64 *)a1, v3);
    v5 = *(_DWORD *)(v3 + 32);
  }
  *(_DWORD *)(v3 + 32) = v5 & 0xFFFFFFFE;
  v9 = *(_DWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    sub_140237ED8((__int64 *)(a1 + 64), a1 + 88);
    v9 = *(_DWORD *)(a1 + 120);
  }
  *(_DWORD *)(a1 + 120) = v9 & 0xFFFFFFFE;
  v10 = *(_DWORD *)(a1 + 184);
  if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
  {
    sub_140237D58((__int64 *)(a1 + 128), a1 + 152);
    v10 = *(_DWORD *)(a1 + 184);
    v6 = 1;
  }
  v22 = 0LL;
  *(_DWORD *)(a1 + 184) = v10 & 0xFFFFFFFE;
  v11 = ((unsigned int)a3 - ((a3 & 0xFFFFF000) + *(_DWORD *)(a1 + 472))) / *(_DWORD *)(a1 + 464)
      + (*(_DWORD *)((a3 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456));
  LODWORD(v22) = *(_DWORD *)(a2 + 16);
  HIDWORD(v22) = v11;
  sub_140381130(a1, (unsigned int)v22, v3);
  v12 = sub_140380E44(a1, v3, &v22);
  if ( v12 >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 776) )
    {
      v13 = *(_DWORD *)(a3 + 4) + 4096;
      *(_DWORD *)(a3 + 4) = v13;
      v14 = v13 >> 12;
      if ( v14 > 1 )
        return 0;
      if ( !v14 )
        __int2c();
    }
    v20 = v11;
    v12 = sub_140380900(a1 + 64, &v20, a1 + 88);
    if ( v12 >= 0 )
    {
      v6 = 3;
      if ( *(_BYTE *)(a1 + 776) )
      {
LABEL_16:
        v15 = 4096;
        if ( (*(_DWORD *)(a3 + 4) & 0xFFF) != 0 )
          v15 = *(_DWORD *)(a3 + 4) & 0xFFF;
        sub_14038032C(
          a1,
          (unsigned int)(*(_DWORD *)a3 >> *(_DWORD *)(a1 + 812)),
          (unsigned int)(*(_DWORD *)(a1 + 824) + 15 + v15) >> 4,
          0LL);
        v16 = sub_140261818(0);
        if ( v16 )
          sub_1405FB4F4(
            (_DWORD)v16,
            0,
            (unsigned int)&v22,
            (_DWORD)v16,
            *(_DWORD *)a3,
            a1,
            *(_WORD *)(a3 + 4),
            (2 * (*v21 & 7)) | ((*(_DWORD *)v21 & 0x40000000) != 0));
        return 0;
      }
      v20 = v11;
      v12 = sub_140380708(a1 + 128, v11, a1 + 152);
      if ( v12 == -1073741275 )
      {
        v12 = sub_1403803F8(a1 + 128, a1 + 152, &v20);
        if ( v12 >= 0 )
          goto LABEL_16;
      }
      else if ( v12 >= 0 )
      {
        v12 = -1073741484;
      }
    }
    v18 = sub_140381E98(a1, v3);
    if ( v18 < 0 )
    {
      if ( v18 != -1073741818 )
        __int2c();
      v12 = v18;
    }
    if ( (v6 & 2) != 0 )
    {
      v19 = sub_140381C90(a1 + 64, a1 + 88);
      if ( v19 < 0 )
      {
        if ( v19 != -1073741818 )
          __int2c();
        return (unsigned int)v19;
      }
    }
  }
  return (unsigned int)v12;
}
