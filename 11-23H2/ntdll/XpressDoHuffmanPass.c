/*
 * XREFs of XpressDoHuffmanPass @ 0x1800566A0
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x180055E80 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x1801205AC (RtlCompressBufferXpressHuffMax.c)
 * Callees:
 *     <none>
 */

char *__fastcall XpressDoHuffmanPass(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3, char *a4, int a5)
{
  char *v7; // rax
  __int128 *v8; // rdx
  __int64 v9; // r9
  __int128 v12; // xmm0
  char *v13; // r12
  char *v14; // r13
  unsigned __int64 v15; // r9
  unsigned __int16 v16; // ax
  char *v17; // r14
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // r11
  char *v21; // r10
  __int64 v22; // rbx
  unsigned __int64 v23; // rcx
  unsigned __int16 v24; // si
  unsigned __int64 v25; // r9
  __int16 v26; // ax
  unsigned __int16 v27; // bx
  unsigned __int8 v28; // r11
  int v29; // ecx
  bool v30; // sf
  __int64 v31; // rcx
  unsigned __int16 v32; // dx
  unsigned __int16 *v33; // r11
  unsigned __int64 v34; // rcx
  char v35; // cl
  unsigned __int16 v36; // dx
  char v37; // cl
  unsigned __int64 v38; // rcx
  unsigned __int16 v39; // dx
  __int16 v40; // r8

  v7 = a4;
  v8 = (__int128 *)(a1 + 31264);
  v9 = 2LL;
  do
  {
    v7 += 128;
    v12 = *v8;
    v8 += 8;
    *((_OWORD *)v7 - 8) = v12;
    *((_OWORD *)v7 - 7) = *(v8 - 7);
    *((_OWORD *)v7 - 6) = *(v8 - 6);
    *((_OWORD *)v7 - 5) = *(v8 - 5);
    *((_OWORD *)v7 - 4) = *(v8 - 4);
    *((_OWORD *)v7 - 3) = *(v8 - 3);
    *((_OWORD *)v7 - 2) = *(v8 - 2);
    *((_OWORD *)v7 - 1) = *(v8 - 1);
    --v9;
  }
  while ( v9 );
  v13 = a4 + 256;
  v14 = a4 + 258;
  v15 = 16LL;
  v16 = 0;
  v17 = a4 + 260;
LABEL_4:
  v18 = *(_DWORD *)a2;
  a2 += 4;
  v19 = 2 * v18 + 1;
  if ( v18 >= 0 )
  {
LABEL_15:
    v31 = *a2++;
    v32 = *(_WORD *)(a1 + 4 * v31 + 2);
    v33 = (unsigned __int16 *)(a1 + 4 * v31);
    v34 = *v33;
    if ( v15 < v34 )
    {
      *(_WORD *)v13 = (v16 << v15) | (v32 >> (v34 - v15));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      v15 += 16LL - (unsigned int)v34;
      v16 = v33[1];
    }
    else
    {
      v15 -= v34;
      v16 = v32 | (v16 << v34);
    }
    goto LABEL_14;
  }
  while ( (unsigned __int64)a2 < a3 )
  {
    _mm_lfence();
    v20 = *a2;
    v21 = (char *)(a2 + 1);
    v22 = a1 + 4 * v20;
    v23 = *(unsigned __int16 *)(v22 + 1024);
    v24 = *(_WORD *)(v22 + 1026);
    if ( v15 < v23 )
    {
      *(_WORD *)v13 = (v16 << v15) | (v24 >> (v23 - v15));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      v25 = 16 - v23 + v15;
      v26 = *(_WORD *)(v22 + 1026);
    }
    else
    {
      v25 = v15 - v23;
      v26 = v24 | (v16 << v23);
    }
    if ( (v20 & 0xF) == 0xF )
    {
      v35 = *v21++;
      *v17++ = v35;
      if ( v35 == -1 )
      {
        v36 = *(_WORD *)v21;
        *v17 = *(_WORD *)v21;
        v37 = v21[1];
        v21 += 2;
        v17[1] = v37;
        v17 += 2;
        if ( !v36 )
        {
          *v17 = *v21;
          v17[1] = v21[1];
          v17[2] = v21[2];
          v17[3] = v21[3];
          v17 += 4;
          v21 += 4;
        }
      }
    }
    v27 = *(_WORD *)v21;
    v28 = (unsigned __int8)v20 >> 4;
    if ( v25 < v28 )
    {
      *(_WORD *)v13 = (v26 << v25) | (v27 >> (v28 - v25));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      v15 = 16LL - v28 + v25;
      v16 = *(_WORD *)v21;
    }
    else
    {
      v15 = v25 - v28;
      v16 = v27 | (v26 << v28);
    }
    a2 = (unsigned __int8 *)(v21 + 2);
LABEL_14:
    v29 = 2 * v19;
    v30 = v19 < 0;
    v19 *= 2;
    if ( !v30 )
      goto LABEL_15;
    if ( !v29 )
      goto LABEL_4;
  }
  if ( a5 )
  {
    v38 = *(unsigned __int16 *)(a1 + 1024);
    v39 = *(_WORD *)(a1 + 1026);
    v40 = *(_WORD *)(a1 + 1024);
    if ( v15 >= v38 )
    {
      LOBYTE(v15) = v15 - v40;
      v16 = v39 | (v16 << v38);
    }
    else
    {
      *(_WORD *)v13 = (v16 << v15) | (v39 >> (v38 - v15));
      v13 = v14;
      v14 = v17;
      v17 += 2;
      LOBYTE(v15) = 16 - v40 + v15;
      v16 = *(_WORD *)(a1 + 1026);
    }
  }
  *(_WORD *)v13 = v16 << v15;
  *(_WORD *)v14 = 0;
  return v17;
}
