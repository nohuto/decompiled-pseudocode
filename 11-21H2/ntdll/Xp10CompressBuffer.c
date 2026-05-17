/*
 * XREFs of Xp10CompressBuffer @ 0x18011AC98
 * Callers:
 *     RtlCompressBufferXp10 @ 0x1801194D0 (RtlCompressBufferXp10.c)
 * Callees:
 *     memset @ 0x1800AAE00 (memset.c)
 *     Xp10ComputeAndWriteCrc @ 0x18011B004 (Xp10ComputeAndWriteCrc.c)
 *     Xp10ExecuteHuffmanEncode @ 0x18011B934 (Xp10ExecuteHuffmanEncode.c)
 *     Xp10ExecuteLz77PassMinMatchLen3 @ 0x18011BDEC (Xp10ExecuteLz77PassMinMatchLen3.c)
 *     Xp10ExecuteLz77PassMinMatchLen4 @ 0x18011C4B4 (Xp10ExecuteLz77PassMinMatchLen4.c)
 *     Xp10ValidateParametersAndFillFrameHeader @ 0x18011D928 (Xp10ValidateParametersAndFillFrameHeader.c)
 */

__int64 __fastcall Xp10CompressBuffer(
        _WORD *a1,
        __int64 a2,
        unsigned int a3,
        _WORD *a4,
        size_t Size,
        _DWORD *a6,
        __int64 a7)
{
  __int64 v7; // rdi
  unsigned int v11; // esi
  __int64 v12; // r12
  __int64 result; // rax
  unsigned int v14; // r11d
  int v15; // ebx
  __int64 v16; // r13
  unsigned int v17; // ebx
  unsigned int v18; // r10d
  unsigned int v19; // esi
  unsigned int v20; // r14d
  unsigned int v21; // eax
  unsigned int v22; // r13d
  int v23; // r8d
  unsigned int v24; // r11d
  unsigned int v25; // r9d
  int v26; // ecx
  _BYTE *v27; // r8
  unsigned int v28; // ebx
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // r9d
  _BYTE *v32; // r8
  unsigned __int64 v33; // rcx
  unsigned int v34; // edx
  unsigned int v35; // eax
  int v36; // ecx
  _BYTE *v37; // r9
  unsigned int v38; // r8d
  unsigned int v39; // r10d
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned int v42; // edx
  unsigned __int64 v43; // rax
  unsigned int v44; // [rsp+40h] [rbp-30h]
  unsigned int v45; // [rsp+44h] [rbp-2Ch]
  int v46; // [rsp+48h] [rbp-28h] BYREF
  __int16 v47; // [rsp+4Ch] [rbp-24h]
  __int128 v48; // [rsp+50h] [rbp-20h] BYREF
  __int128 v49; // [rsp+60h] [rbp-10h] BYREF

  v7 = a7;
  memset((void *)(a7 + 24), 0, 0x12508uLL);
  v11 = Size;
  v12 = v7 + 75040;
  LODWORD(a7) = 0;
  *(_QWORD *)v7 = a1;
  *(_OWORD *)(v7 + 8) = 0LL;
  v45 = 1 << (*a1 & 0x1F);
  v44 = 2 * v45;
  memset(a4, 0, v11);
  result = Xp10ValidateParametersAndFillFrameHeader(a1, &v46);
  if ( (int)result >= 0 )
  {
    v14 = a3;
    *(_DWORD *)a4 = v46;
    a4[2] = v47;
    *(_QWORD *)&v48 = a4;
    v15 = 0x1FFFFFFF;
    DWORD2(v48) = 48;
    if ( v11 <= 0x1FFFFFFF )
      v15 = v11;
    v16 = 0LL;
    v17 = 8 * v15;
    v18 = 0;
    v19 = 0;
    HIDWORD(v48) = v17;
    v20 = 0;
    if ( a3 )
    {
      while ( 1 )
      {
        memset((void *)(v7 + 28), 0, 0xB00uLL);
        memset((void *)(v7 + 2844), 0, 0x400uLL);
        v21 = a3 - v20;
        if ( a3 - v20 >= v45 )
          v21 = v45;
        v22 = v21;
        v23 = a2 + v20 + v21;
        if ( (((unsigned __int16)*a1 >> 5) & 7) == 3 )
        {
          result = Xp10ExecuteLz77PassMinMatchLen3(
                     v7,
                     v20 + (unsigned int)a2,
                     v23,
                     (int)v7 + 75040,
                     v12 + v44,
                     (__int64)&a7);
        }
        else
        {
          if ( (((unsigned __int16)*a1 >> 5) & 7) != 4 )
            goto LABEL_12;
          result = Xp10ExecuteLz77PassMinMatchLen4(
                     v7,
                     v20 + (unsigned int)a2,
                     v23,
                     (int)v7 + 75040,
                     v12 + v44,
                     (__int64)&a7);
        }
        if ( (int)result < 0 )
          return result;
LABEL_12:
        v49 = v48;
        if ( DWORD2(v48) + 32 > v17 )
          return 3221225507LL;
        DWORD2(v48) += 32;
        result = Xp10ExecuteHuffmanEncode(
                   v7,
                   v20 + (unsigned int)a2,
                   v22,
                   (int)v7 + 75040,
                   a7,
                   (__int64)&v48,
                   (__int64)&Size);
        if ( (int)result < 0 )
          return result;
        v18 = DWORD2(v49);
        v24 = 32;
        v16 = v49;
        v19 = HIDWORD(v49);
        v25 = ((Size & 1) << 29) | (DWORD2(v48) - DWORD2(v49)) & 0xFFFFFFF;
        v26 = BYTE8(v49) & 7;
        v27 = (_BYTE *)(v49 + ((unsigned __int64)DWORD2(v49) >> 3));
        v28 = 8 - v26;
        if ( (unsigned int)(DWORD2(v49) + 32) <= HIDWORD(v49)
          || (v24 = HIDWORD(v49) - DWORD2(v49), HIDWORD(v49) != DWORD2(v49)) )
        {
          v29 = v28;
          if ( v28 >= v24 )
            v29 = v24;
          *v27 |= ((unsigned __int8)(BYTE8(v48) - BYTE8(v49)) & (unsigned __int8)byte_18013CB40[4 * v29]) << v26;
          v30 = v24 - (unsigned int)v29;
          v31 = v25 >> v28;
          v32 = v27 + 1;
          if ( (unsigned int)v30 >= 8 )
          {
            v33 = (unsigned __int64)(unsigned int)v30 >> 3;
            do
            {
              *v32 = v31;
              v30 = (unsigned int)(v30 - 8);
              v31 >>= 8;
              ++v32;
              --v33;
            }
            while ( v33 );
          }
          if ( (_DWORD)v30 )
            *v32 |= (unsigned __int8)v31 & byte_18013CB40[4 * v30];
          v18 += v24;
        }
        v20 += v45;
        v14 = a3;
        if ( v20 >= a3 )
          break;
        v17 = HIDWORD(v48);
      }
    }
    v34 = v18 - 1;
    v35 = v18;
    v36 = ((_BYTE)v18 - 1) & 7;
    v37 = (_BYTE *)(v16 + ((unsigned __int64)(v18 - 1) >> 3));
    v38 = 1;
    v39 = 8 - v36;
    if ( v35 <= v19 || (v38 = v19 - v34, v19 != v34) )
    {
      v40 = v39;
      if ( v39 >= v38 )
        v40 = v38;
      v41 = v38 - (unsigned int)v40;
      *v37++ |= (byte_18013CB40[4 * v40] & 1) << v36;
      v42 = 1u >> v39;
      if ( (unsigned int)v41 >= 8 )
      {
        v43 = (unsigned __int64)(unsigned int)v41 >> 3;
        do
        {
          *v37 = v42;
          v41 = (unsigned int)(v41 - 8);
          v42 >>= 8;
          ++v37;
          --v43;
        }
        while ( v43 );
      }
      if ( (_DWORD)v41 )
        *v37 |= (unsigned __int8)v42 & byte_18013CB40[4 * v41];
    }
    DWORD2(v49) = 0;
    *(_QWORD *)&v49 = a2;
    HIDWORD(v49) = v14;
    result = Xp10ComputeAndWriteCrc(a1, &v49, &v48, v37);
    if ( (int)result >= 0 )
    {
      *a6 = DWORD2(v48) >> 3;
      return (unsigned int)result;
    }
  }
  return result;
}
