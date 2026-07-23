/*
 * XREFs of sub_14039423C @ 0x14039423C
 * Callers:
 *     sub_14037F1D4 @ 0x14037F1D4 (sub_14037F1D4.c)
 * Callees:
 *     sub_140237E94 @ 0x140237E94 (sub_140237E94.c)
 *     sub_140237ED8 @ 0x140237ED8 (sub_140237ED8.c)
 *     sub_1403795D4 @ 0x1403795D4 (sub_1403795D4.c)
 *     sub_14037EC24 @ 0x14037EC24 (sub_14037EC24.c)
 *     sub_14037F42C @ 0x14037F42C (sub_14037F42C.c)
 *     sub_140380C38 @ 0x140380C38 (sub_140380C38.c)
 *     sub_1403944E0 @ 0x1403944E0 (sub_1403944E0.c)
 *     sub_140394DD0 @ 0x140394DD0 (sub_140394DD0.c)
 */

__int64 __fastcall sub_14039423C(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 v6; // rdx
  int v7; // eax
  int v8; // edi
  __int64 v9; // r15
  unsigned __int64 v10; // rdi
  int v11; // ecx
  int v12; // r14d
  unsigned __int64 v13; // r14
  char *v14; // rax
  _DWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // r15
  __int128 v23; // [rsp+20h] [rbp-60h] BYREF
  __int128 v24; // [rsp+30h] [rbp-50h]
  __int64 v25; // [rsp+40h] [rbp-40h]
  _OWORD v26[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v27; // [rsp+68h] [rbp-18h]

  v2 = a1 + 88;
  v4 = *(_QWORD *)(a1 + 800);
  v6 = *a2;
  v24 = 0LL;
  DWORD2(v24) = -1;
  v25 = 1LL;
  v23 = 0LL;
  if ( (*(_BYTE *)(v4 + 6021) & 4) != 0 )
  {
    *((_QWORD *)&v26[0] + 1) = v6;
    *(_QWORD *)&v26[0] = sub_140394DD0;
    v26[1] = 0LL;
    v27 = 0LL;
    v7 = sub_1403795D4(v4, 5, v26, 0xCu);
    v8 = v7;
    if ( v7 )
    {
      if ( v7 == -1073741536 )
        *a2 = 0LL;
    }
    else
    {
      v8 = DWORD2(v27);
    }
  }
  else
  {
    v8 = sub_140394DD0(v4 + 6232, v6, 0LL);
  }
  if ( v8 >= 0 )
  {
    v9 = *a2;
    v10 = v9 + 8;
    v11 = *(_DWORD *)(v2 + 32);
    v12 = (*(_DWORD *)(v9 + 8) >> 4) | (*(_DWORD *)v9 << *(_DWORD *)(a1 + 812));
    if ( (v11 & 1) != 0 )
    {
      sub_140237ED8((__int64 *)(a1 + 64), v2);
      v11 = *(_DWORD *)(v2 + 32);
    }
    *(_DWORD *)(v2 + 32) = v11 & 0xFFFFFFFE;
    **(_DWORD **)(a1 + 760) = v12;
    if ( (int)sub_14037EC24(v2, a1 + 64, *(_DWORD *)(a1 + 768)) < 0 )
      __int2c();
    v13 = v9 + *(unsigned __int16 *)(v9 + 6);
    while ( v10 < v13 )
    {
      if ( *(_BYTE *)(v10 + 7) < 0x10u )
      {
        *(_DWORD *)v10 >>= 4;
        do
        {
          v18 = (_DWORD *)sub_14037F42C(a1 + 64, v2);
          v19 = (unsigned int)(*v18 >> *(_DWORD *)(a1 + 456));
          _BitScanReverse((unsigned int *)&v20, v19);
          v21 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                         + (unsigned int)(*(_DWORD *)(a1 + 464) * (*(_DWORD *)(a1 + 460) & *v18))
                         + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v20 + 192) + 16 * (v19 ^ (unsigned int)(1 << v20))));
        }
        while ( (*v21 & *(_DWORD *)(a1 + 808)) != *(_DWORD *)v10 );
        if ( (v21[1] & 0xFFFFF000) <= 0x1000 )
        {
          **(_DWORD **)(a1 + 760) = (*(_DWORD *)(v10 + 8LL * *(unsigned __int8 *)(v10 + 7) + 8) << *(_DWORD *)(a1 + 812)) | (*(_DWORD *)(v10 + 8LL * *(unsigned __int8 *)(v10 + 7) + 12) >> 4);
          if ( (int)sub_140380C38(a1 + 64, *(_DWORD *)(a1 + 768), (__int64)&v23) >= 0 )
          {
            if ( DWORD2(v24) == -1 || !DWORD2(v24) )
              v14 = (char *)&v23 + 8;
            else
              v14 = (char *)(v23 + 16LL * (unsigned int)(DWORD2(v24) - 1));
            v15 = (_DWORD *)*((_QWORD *)v14 + 1);
            v16 = (unsigned int)(*v15 >> *(_DWORD *)(a1 + 456));
            _BitScanReverse((unsigned int *)&v17, v16);
            if ( (*(_DWORD *)(*(unsigned int *)(a1 + 472)
                            + (unsigned int)(*(_DWORD *)(a1 + 464) * (*v15 & *(_DWORD *)(a1 + 460)))
                            + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v17 + 192) + 16 * (v16 ^ (unsigned int)(1 << v17)))
                            + 4LL) & 0xFFFFF000) != 0xFFFFF000 )
              sub_1403944E0(a1, v21, v2);
          }
        }
      }
      v10 += 8LL * *(unsigned __int8 *)(v10 + 6) + 8;
    }
    v8 = 0;
  }
  sub_140237E94(a1 + 64, (__int64)&v23, 0);
  return (unsigned int)v8;
}
