/*
 * XREFs of Xp10ExecuteHuffmanEncode @ 0x18011E21C
 * Callers:
 *     Xp10CompressBuffer @ 0x18011D4E4 (Xp10CompressBuffer.c)
 * Callees:
 *     RtlCopyBitMap @ 0x1800F7940 (RtlCopyBitMap.c)
 *     Xp10BuildAndWriteHuffmanEncodings @ 0x18011C014 (Xp10BuildAndWriteHuffmanEncodings.c)
 */

__int64 __fastcall Xp10ExecuteHuffmanEncode(
        __int16 **a1,
        unsigned int *a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        _DWORD *a7)
{
  int v8; // esi
  __int64 v10; // rbx
  unsigned __int16 *v12; // rdi
  __int16 v13; // r10
  unsigned int *v14; // rdx
  ULONG v15; // r14d
  int v16; // ecx
  int v17; // r10d
  unsigned int v18; // eax
  int v19; // r15d
  int v20; // r12d
  __int64 result; // rax
  __int64 v22; // r9
  int v23; // esi
  int v24; // r8d
  __int16 **v25; // r15
  unsigned int v26; // esi
  unsigned int v27; // r11d
  unsigned int *v28; // rax
  _DWORD *v29; // rax
  unsigned __int16 *v30; // r13
  unsigned int v31; // r9d
  __int64 v32; // r12
  _BYTE *v33; // r8
  int v34; // ecx
  unsigned int v35; // ebp
  unsigned int v36; // r10d
  unsigned int v37; // esi
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // r10d
  _BYTE *v41; // r8
  unsigned __int64 v42; // rcx
  unsigned int v43; // r8d
  __int64 v44; // r15
  _BYTE *v45; // r10
  unsigned int v46; // ebp
  unsigned int v47; // esi
  int v48; // ecx
  unsigned int v49; // r14d
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // esi
  _BYTE *v53; // r10
  unsigned __int64 v54; // rcx
  unsigned int v55; // esi
  unsigned int v56; // r10d
  _BYTE *v57; // r9
  int v58; // ecx
  unsigned int v59; // ebp
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned int v62; // esi
  _BYTE *v63; // r9
  unsigned __int64 v64; // rcx
  unsigned int v65; // esi
  _BYTE *v66; // r9
  int v67; // r14d
  unsigned int v68; // ebp
  unsigned int v69; // r10d
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned int v72; // esi
  _BYTE *v73; // r9
  unsigned __int64 v74; // rcx
  _RTL_BITMAP Destination; // [rsp+40h] [rbp-48h] BYREF
  _RTL_BITMAP Source; // [rsp+50h] [rbp-38h] BYREF

  v8 = *((_DWORD *)a1 + 6);
  v10 = a6;
  v12 = (unsigned __int16 *)a4;
  v13 = **a1;
  v14 = (unsigned int *)a1 + 7;
  v15 = *(_DWORD *)(a6 + 8);
  v16 = v13 & 0x1F;
  v17 = (unsigned __int8)v13 >> 5;
  v18 = (1 << v16) - v17 - 246;
  _BitScanReverse((unsigned int *)&v19, v18);
  v20 = v18 & ((1 << v16) - v17 - 247);
  result = Xp10BuildAndWriteHuffmanEncodings(
             (__int64)(a1 + 708),
             v14,
             16 * (v16 + 20),
             a4,
             v14,
             a6,
             (unsigned int *)&a6);
  if ( (int)result >= 0 )
  {
    v23 = a6 + v8;
    v24 = v19 + 1;
    if ( !v20 )
      v24 = v19;
    v25 = a1;
    result = Xp10BuildAndWriteHuffmanEncodings(
               (__int64)(a1 + 708),
               (_DWORD *)a1 + 711,
               v24 + 232,
               v22,
               (unsigned int *)a1 + 711,
               v10,
               (unsigned int *)&a6);
    if ( (int)result >= 0 )
    {
      v26 = a6 + v23;
      v27 = *(_DWORD *)(v10 + 12);
      if ( v26 >= 8 * a3 )
      {
        *(_DWORD *)(v10 + 8) = v15;
        if ( 8 * a3 + v15 <= v27 )
        {
          v28 = *(unsigned int **)v10;
          Source.SizeOfBitMap = 8 * a3;
          Destination.Buffer = v28;
          Source.Buffer = a2;
          Destination.SizeOfBitMap = v27;
          RtlCopyBitMap(&Source, &Destination, v15);
          v29 = a7;
          *(_DWORD *)(v10 + 8) += 8 * a3;
          *(_OWORD *)(a1 + 1) = 0LL;
          *v29 = 0;
          return 0LL;
        }
        return 3221225507LL;
      }
      *a7 = 1;
      if ( v15 + v26 > v27 )
        return 3221225507LL;
      v30 = (unsigned __int16 *)((char *)v12 + a5);
      if ( v12 >= v30 )
        return 0LL;
      while ( 1 )
      {
        v31 = *(_DWORD *)(v10 + 8);
        if ( v31 >= v27 )
          break;
        v32 = *v12;
        v33 = (_BYTE *)(*(_QWORD *)v10 + ((unsigned __int64)v31 >> 3));
        v34 = *(_DWORD *)(v10 + 8) & 7;
        v35 = 8 - v34;
        v36 = *((_DWORD *)v25 + v32 + 7) >> 5;
        v37 = *((_DWORD *)v25 + v32 + 7) & 0x1F;
        if ( v31 + v37 <= v27 || (v37 = v27 - v31, v27 != v31) )
        {
          v38 = v35;
          if ( v35 >= v37 )
            v38 = v37;
          *v33 |= ((unsigned __int8)v36 & (unsigned __int8)byte_180148F10[4 * v38]) << v34;
          v39 = v37 - (unsigned int)v38;
          v40 = v36 >> v35;
          v41 = v33 + 1;
          if ( (unsigned int)v39 >= 8 )
          {
            v42 = (unsigned __int64)(unsigned int)v39 >> 3;
            do
            {
              *v41 = v40;
              v39 = (unsigned int)(v39 - 8);
              v40 >>= 8;
              ++v41;
              --v42;
            }
            while ( v42 );
          }
          if ( (_DWORD)v39 )
            *v41 |= (unsigned __int8)v40 & byte_180148F10[4 * v39];
          v31 += v37;
          *(_DWORD *)(v10 + 8) = v31;
        }
        ++v12;
        v43 = v31;
        if ( (unsigned __int16)v32 >= 0x100u && (v32 & 0xF) == 0xF )
        {
          v44 = *(unsigned __int8 *)v12;
          v45 = (_BYTE *)(*(_QWORD *)v10 + ((unsigned __int64)v31 >> 3));
          v46 = *((_DWORD *)a1 + v44 + 711) & 0x1F;
          v47 = *((_DWORD *)a1 + v44 + 711) >> 5;
          v48 = v31 & 7;
          v49 = 8 - v48;
          if ( v31 + v46 <= v27 || (v46 = v27 - v31, v27 != v31) )
          {
            v50 = v49;
            if ( v49 >= v46 )
              v50 = v46;
            *v45 |= ((unsigned __int8)v47 & (unsigned __int8)byte_180148F10[4 * v50]) << v48;
            v51 = v46 - (unsigned int)v50;
            v52 = v47 >> v49;
            v53 = v45 + 1;
            if ( (unsigned int)v51 >= 8 )
            {
              v54 = (unsigned __int64)(unsigned int)v51 >> 3;
              do
              {
                *v53 = v52;
                v51 = (unsigned int)(v51 - 8);
                v52 >>= 8;
                ++v53;
                --v54;
              }
              while ( v54 );
            }
            if ( (_DWORD)v51 )
              *v53 |= (unsigned __int8)v52 & byte_180148F10[4 * v51];
            v43 = v31 + v46;
            *(_DWORD *)(v10 + 8) = v31 + v46;
          }
          v12 = (unsigned __int16 *)((char *)v12 + 1);
          if ( (unsigned __int8)v44 > 0xE8u )
          {
            v55 = *(_DWORD *)v12;
            v56 = v44 - 232;
            v57 = (_BYTE *)(*(_QWORD *)v10 + ((unsigned __int64)v43 >> 3));
            v58 = v43 & 7;
            v59 = 8 - v58;
            if ( v43 + (_DWORD)v44 - 232 <= v27 || (v56 = v27 - v43, v27 != v43) )
            {
              v60 = v59;
              if ( v59 >= v56 )
                v60 = v56;
              *v57 |= ((unsigned __int8)v55 & (unsigned __int8)byte_180148F10[4 * v60]) << v58;
              v61 = v56 - (unsigned int)v60;
              v62 = v55 >> v59;
              v63 = v57 + 1;
              if ( (unsigned int)v61 >= 8 )
              {
                v64 = (unsigned __int64)(unsigned int)v61 >> 3;
                do
                {
                  *v63 = v62;
                  v61 = (unsigned int)(v61 - 8);
                  v62 >>= 8;
                  ++v63;
                  --v64;
                }
                while ( v64 );
              }
              if ( (_DWORD)v61 )
                *v63 |= (unsigned __int8)v62 & byte_180148F10[4 * v61];
              v43 += v56;
              *(_DWORD *)(v10 + 8) = v43;
            }
            v12 += 2;
          }
          v25 = a1;
        }
        if ( (unsigned __int16)v32 > 0x14Fu )
        {
          v65 = *(_DWORD *)v12;
          v66 = (_BYTE *)(*(_QWORD *)v10 + ((unsigned __int64)v43 >> 3));
          v67 = v43 & 7;
          v68 = 8 - v67;
          v69 = ((int)v32 - 320) / 16;
          if ( v43 + v69 <= v27 || (v69 = v27 - v43, v27 != v43) )
          {
            v70 = v68;
            if ( v68 >= v69 )
              v70 = v69;
            *v66 |= ((unsigned __int8)v65 & (unsigned __int8)byte_180148F10[4 * v70]) << v67;
            v71 = v69 - (unsigned int)v70;
            v72 = v65 >> v68;
            v73 = v66 + 1;
            if ( (unsigned int)v71 >= 8 )
            {
              v74 = (unsigned __int64)(unsigned int)v71 >> 3;
              do
              {
                *v73 = v72;
                v71 = (unsigned int)(v71 - 8);
                v72 >>= 8;
                ++v73;
                --v74;
              }
              while ( v74 );
            }
            if ( (_DWORD)v71 )
              *v73 |= (unsigned __int8)v72 & byte_180148F10[4 * v71];
            *(_DWORD *)(v10 + 8) = v43 + v69;
          }
          v12 += 2;
        }
        if ( v12 >= v30 )
          return 0LL;
      }
      return *(_DWORD *)(v10 + 8) >= v27 ? 0xC0000023 : 0;
    }
  }
  return result;
}
