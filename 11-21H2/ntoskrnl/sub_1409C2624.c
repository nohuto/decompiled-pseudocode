/*
 * XREFs of sub_1409C2624 @ 0x1409C2624
 * Callers:
 *     sub_1409C0E20 @ 0x1409C0E20 (sub_1409C0E20.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409C29AC @ 0x1409C29AC (sub_1409C29AC.c)
 *     sub_1409C3320 @ 0x1409C3320 (sub_1409C3320.c)
 *     sub_1409C37DC @ 0x1409C37DC (sub_1409C37DC.c)
 *     sub_1409C3F20 @ 0x1409C3F20 (sub_1409C3F20.c)
 *     sub_1409C5400 @ 0x1409C5400 (sub_1409C5400.c)
 */

__int64 __fastcall sub_1409C2624(
        _WORD *a1,
        __int64 a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int Size,
        _DWORD *a6,
        __int64 a7)
{
  __int64 v7; // rdi
  __int64 v11; // r12
  __int64 result; // rax
  unsigned int v13; // r11d
  int v14; // ebx
  __int64 v15; // r13
  unsigned int v16; // ebx
  unsigned int v17; // r10d
  unsigned int v18; // esi
  unsigned int v19; // r14d
  unsigned int v20; // eax
  unsigned int v21; // r13d
  int v22; // r8d
  unsigned int v23; // r11d
  unsigned int v24; // r9d
  int v25; // ecx
  _BYTE *v26; // r8
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // r9d
  _BYTE *v31; // r8
  unsigned __int64 v32; // rcx
  unsigned int v33; // edx
  unsigned int v34; // eax
  int v35; // ecx
  _BYTE *v36; // r9
  unsigned int v37; // r8d
  unsigned int v38; // r10d
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned int v41; // edx
  unsigned __int64 v42; // rax
  unsigned int v43; // [rsp+48h] [rbp-41h]
  int v44; // [rsp+4Ch] [rbp-3Dh] BYREF
  unsigned int v45; // [rsp+50h] [rbp-39h]
  int v46; // [rsp+54h] [rbp-35h] BYREF
  __int16 v47; // [rsp+58h] [rbp-31h]
  __int128 v48; // [rsp+68h] [rbp-21h] BYREF
  __int128 v49; // [rsp+78h] [rbp-11h] BYREF
  __int128 v50; // [rsp+88h] [rbp-1h]

  v7 = a7;
  v44 = 0;
  v46 = 0;
  v47 = 0;
  v49 = 0LL;
  memset((void *)(a7 + 24), 0, 0x12508uLL);
  v11 = v7 + 75040;
  LODWORD(a7) = 0;
  *(_QWORD *)v7 = a1;
  *(_OWORD *)(v7 + 8) = 0LL;
  v45 = 1 << (*a1 & 0x1F);
  v43 = 2 * v45;
  memset(a4, 0, Size);
  result = sub_1409C5400(a1, &v46);
  if ( (int)result >= 0 )
  {
    v13 = a3;
    *(_DWORD *)a4 = v46;
    a4[2] = v47;
    *(_QWORD *)&v48 = a4;
    v14 = 0x1FFFFFFF;
    DWORD2(v48) = 48;
    if ( Size <= 0x1FFFFFFF )
      v14 = Size;
    v15 = 0LL;
    v16 = 8 * v14;
    v17 = 0;
    v18 = 0;
    HIDWORD(v48) = v16;
    v19 = 0;
    if ( a3 )
    {
      while ( 1 )
      {
        memset((void *)(v7 + 28), 0, 0xB00uLL);
        memset((void *)(v7 + 2844), 0, 0x400uLL);
        v20 = a3 - v19;
        if ( a3 - v19 >= v45 )
          v20 = v45;
        v21 = v20;
        v22 = a2 + v19 + v20;
        if ( (((unsigned __int16)*a1 >> 5) & 7) == 3 )
        {
          result = sub_1409C37DC(v7, v19 + (unsigned int)a2, v22, (int)v7 + 75040, v11 + v43, (__int64)&a7);
        }
        else
        {
          if ( (((unsigned __int16)*a1 >> 5) & 7) != 4 )
            goto LABEL_12;
          result = sub_1409C3F20(v7, v19 + (unsigned int)a2, v22, (int)v7 + 75040, v11 + v43, (__int64)&a7);
        }
        if ( (int)result < 0 )
          return result;
LABEL_12:
        v50 = v48;
        if ( DWORD2(v48) + 32 > v16 )
          return 3221225507LL;
        DWORD2(v48) += 32;
        result = sub_1409C3320(v7, v19 + (unsigned int)a2, v21, (int)v7 + 75040, a7, (__int64)&v48, (__int64)&v44);
        if ( (int)result < 0 )
          return result;
        v17 = DWORD2(v50);
        v23 = 32;
        v15 = v50;
        v18 = HIDWORD(v50);
        v24 = ((v44 & 1) << 29) | (DWORD2(v48) - DWORD2(v50)) & 0xFFFFFFF;
        v25 = BYTE8(v50) & 7;
        v26 = (_BYTE *)(v50 + ((unsigned __int64)DWORD2(v50) >> 3));
        v27 = 8 - v25;
        if ( (unsigned int)(DWORD2(v50) + 32) <= HIDWORD(v50)
          || (v23 = HIDWORD(v50) - DWORD2(v50), HIDWORD(v50) != DWORD2(v50)) )
        {
          v28 = v27;
          if ( v27 >= v23 )
            v28 = v23;
          *v26 |= ((unsigned __int8)(BYTE8(v48) - BYTE8(v50)) & (unsigned __int8)byte_14001BB70[4 * v28]) << v25;
          v29 = v23 - (unsigned int)v28;
          v30 = v24 >> v27;
          v31 = v26 + 1;
          if ( (unsigned int)v29 >= 8 )
          {
            v32 = (unsigned __int64)(unsigned int)v29 >> 3;
            do
            {
              *v31 = v30;
              v29 = (unsigned int)(v29 - 8);
              v30 >>= 8;
              ++v31;
              --v32;
            }
            while ( v32 );
          }
          if ( (_DWORD)v29 )
            *v31 |= (unsigned __int8)v30 & byte_14001BB70[4 * v29];
          v17 += v23;
        }
        v19 += v45;
        v13 = a3;
        if ( v19 >= a3 )
          break;
        v16 = HIDWORD(v48);
      }
    }
    v33 = v17 - 1;
    v34 = v17;
    v35 = ((_BYTE)v17 - 1) & 7;
    v36 = (_BYTE *)(v15 + ((unsigned __int64)(v17 - 1) >> 3));
    v37 = 1;
    v38 = 8 - v35;
    if ( v34 <= v18 || (v37 = v18 - v33, v18 != v33) )
    {
      v39 = v38;
      if ( v38 >= v37 )
        v39 = v37;
      v40 = v37 - (unsigned int)v39;
      *v36++ |= (byte_14001BB70[4 * v39] & 1) << v35;
      v41 = 1u >> v38;
      if ( (unsigned int)v40 >= 8 )
      {
        v42 = (unsigned __int64)(unsigned int)v40 >> 3;
        do
        {
          *v36 = v41;
          v40 = (unsigned int)(v40 - 8);
          v41 >>= 8;
          ++v36;
          --v42;
        }
        while ( v42 );
      }
      if ( (_DWORD)v40 )
        *v36 |= (unsigned __int8)v41 & byte_14001BB70[4 * v40];
    }
    DWORD2(v49) = 0;
    *(_QWORD *)&v49 = a2;
    HIDWORD(v49) = v13;
    result = sub_1409C29AC(a1, &v49, &v48, v36);
    if ( (int)result >= 0 )
    {
      *a6 = DWORD2(v48) >> 3;
      return (unsigned int)result;
    }
  }
  return result;
}
