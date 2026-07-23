/*
 * XREFs of sub_1405F9270 @ 0x1405F9270
 * Callers:
 *     sub_1403865C4 @ 0x1403865C4 (sub_1403865C4.c)
 * Callees:
 *     sub_140237ED8 @ 0x140237ED8 (sub_140237ED8.c)
 *     sub_140237F80 @ 0x140237F80 (sub_140237F80.c)
 *     sub_140380C38 @ 0x140380C38 (sub_140380C38.c)
 *     sub_1403812B0 @ 0x1403812B0 (sub_1403812B0.c)
 *     sub_1403903B8 @ 0x1403903B8 (sub_1403903B8.c)
 *     sub_14039042C @ 0x14039042C (sub_14039042C.c)
 *     sub_1405F6054 @ 0x1405F6054 (sub_1405F6054.c)
 */

__int64 __fastcall sub_1405F9270(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r12
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebp
  unsigned __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  _DWORD *v14; // rax
  int v15; // r10d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // r8d
  unsigned int v23; // eax
  unsigned int v24; // r8d
  signed int v25; // r10d
  unsigned int v26; // eax
  unsigned __int64 v27; // r8
  char v28; // cl
  __int64 v30[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0LL;
  *(_OWORD *)v30 = 0LL;
  if ( *(_QWORD *)(a1 + 72) )
  {
    v8 = *(_DWORD *)(a1 + 56);
    if ( (v8 & 1) == 0 )
    {
      sub_140237F80((__int64 *)a1, a1 + 24);
      v8 = *(_DWORD *)(a1 + 56);
    }
    *(_DWORD *)(a1 + 56) = v8 | 1;
    v9 = *(_DWORD *)(a1 + 120);
    if ( (v9 & 1) == 0 )
    {
      sub_140237ED8((__int64 *)(a1 + 64), a1 + 88);
      v9 = *(_DWORD *)(a1 + 120);
    }
    *(_DWORD *)(a1 + 120) = v9 | 1;
    sub_1403812B0(a1, *(_QWORD *)(a1 + 760));
    **(_DWORD **)(a1 + 760) = 0;
    v10 = sub_140380C38(a1 + 64, *(_DWORD *)(a1 + 768), a1 + 88);
    if ( v10 != -1073741818 )
    {
      sub_14039042C((__int64 *)(a1 + 64), (__int64)v30, a1 + 88);
      v11 = v30[1];
      v12 = v30[0];
      while ( 1 )
      {
        if ( !v12 )
          goto LABEL_27;
        v11 += 4LL;
        v13 = (unsigned __int16)*(_DWORD *)v12 + 4LL;
        v30[1] = v11;
        if ( v11 < v12 + 4 * v13 )
          goto LABEL_16;
        if ( **(_DWORD **)((a1 + 80) & -(__int64)(a1 != -64)) == -1 )
          break;
        v14 = (_DWORD *)sub_1405F6054((_DWORD **)(a1 + 64), v12);
        if ( v14 != (_DWORD *)-1LL )
          goto LABEL_14;
LABEL_17:
        if ( !v14 )
          goto LABEL_27;
        if ( v14 == (_DWORD *)-1LL )
        {
          v10 = -1073741818;
          goto LABEL_28;
        }
        v15 = 4096;
        v16 = (unsigned int)(*v14 >> *(_DWORD *)(a1 + 456));
        _BitScanReverse((unsigned int *)&v17, v16);
        v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8 * v17 + 192) + 16 * (v16 ^ (unsigned int)(1 << v17)));
        v19 = 4096LL;
        v20 = (unsigned int)(*(_DWORD *)(a1 + 464) * (*v14 & *(_DWORD *)(a1 + 460))) + v18;
        v21 = *(unsigned int *)(a1 + 472);
        v22 = *(_DWORD *)(v20 + v21 + 4);
        v23 = *(_DWORD *)(v20 + v21);
        v24 = v22 & 0xFFF;
        if ( v24 )
          v19 = v24;
        v4 += v19;
        if ( v24 )
          v15 = v24;
        v25 = (unsigned int)(*(_DWORD *)(a1 + 824) + 15 + v15) >> 4;
        v26 = v23 / a2;
        if ( v25 )
        {
          do
          {
            v27 = (unsigned __int64)v26 >> 3;
            v28 = v26++ & 7;
            v25 -= a2;
            *(_BYTE *)(v27 + a3) |= 1 << v28;
          }
          while ( v25 > 0 );
        }
      }
      v14 = *(_DWORD **)(v12 + 8);
LABEL_14:
      if ( !v14 )
        goto LABEL_17;
      v11 = (unsigned __int64)(v14 + 4);
      v30[0] = (__int64)v14;
      v30[1] = (__int64)(v14 + 4);
      v12 = (__int64)v14;
LABEL_16:
      v14 = (_DWORD *)v11;
      goto LABEL_17;
    }
  }
  else
  {
LABEL_27:
    *a4 = v4;
    v10 = 0;
  }
LABEL_28:
  sub_1403903B8(v30, (__int64 *)(a1 + 64));
  return v10;
}
