/*
 * XREFs of memmove @ 0x1C0024A40
 * Callers:
 *     sub_1C00035A0 @ 0x1C00035A0 (sub_1C00035A0.c)
 *     sub_1C0008F40 @ 0x1C0008F40 (sub_1C0008F40.c)
 *     sub_1C000B120 @ 0x1C000B120 (sub_1C000B120.c)
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 *     sub_1C0010614 @ 0x1C0010614 (sub_1C0010614.c)
 *     sub_1C0010F40 @ 0x1C0010F40 (sub_1C0010F40.c)
 *     sub_1C00137B4 @ 0x1C00137B4 (sub_1C00137B4.c)
 *     sub_1C00148CC @ 0x1C00148CC (sub_1C00148CC.c)
 *     sub_1C001840C @ 0x1C001840C (sub_1C001840C.c)
 *     sub_1C0018F00 @ 0x1C0018F00 (sub_1C0018F00.c)
 *     sub_1C001C6E8 @ 0x1C001C6E8 (sub_1C001C6E8.c)
 *     sub_1C001DDAC @ 0x1C001DDAC (sub_1C001DDAC.c)
 *     sub_1C001E620 @ 0x1C001E620 (sub_1C001E620.c)
 *     sub_1C001E760 @ 0x1C001E760 (sub_1C001E760.c)
 *     sub_1C001E954 @ 0x1C001E954 (sub_1C001E954.c)
 *     sub_1C001EF40 @ 0x1C001EF40 (sub_1C001EF40.c)
 *     sub_1C0022C18 @ 0x1C0022C18 (sub_1C0022C18.c)
 *     sub_1C0022F08 @ 0x1C0022F08 (sub_1C0022F08.c)
 *     sub_1C00343D8 @ 0x1C00343D8 (sub_1C00343D8.c)
 *     sub_1C003B7E8 @ 0x1C003B7E8 (sub_1C003B7E8.c)
 *     sub_1C003BBA4 @ 0x1C003BBA4 (sub_1C003BBA4.c)
 *     sub_1C003BCE8 @ 0x1C003BCE8 (sub_1C003BCE8.c)
 *     sub_1C003DB80 @ 0x1C003DB80 (sub_1C003DB80.c)
 *     sub_1C0041DFC @ 0x1C0041DFC (sub_1C0041DFC.c)
 *     sub_1C00440F0 @ 0x1C00440F0 (sub_1C00440F0.c)
 *     StorPortMoveMemory @ 0x1C0046960 (StorPortMoveMemory.c)
 *     sub_1C00480F8 @ 0x1C00480F8 (sub_1C00480F8.c)
 *     sub_1C004A6B0 @ 0x1C004A6B0 (sub_1C004A6B0.c)
 *     sub_1C0050684 @ 0x1C0050684 (sub_1C0050684.c)
 *     sub_1C00507E4 @ 0x1C00507E4 (sub_1C00507E4.c)
 *     sub_1C0056CF4 @ 0x1C0056CF4 (sub_1C0056CF4.c)
 *     sub_1C0057238 @ 0x1C0057238 (sub_1C0057238.c)
 *     sub_1C00596F4 @ 0x1C00596F4 (sub_1C00596F4.c)
 *     sub_1C005B9F4 @ 0x1C005B9F4 (sub_1C005B9F4.c)
 *     sub_1C005C694 @ 0x1C005C694 (sub_1C005C694.c)
 *     sub_1C005DAE4 @ 0x1C005DAE4 (sub_1C005DAE4.c)
 *     sub_1C00603D0 @ 0x1C00603D0 (sub_1C00603D0.c)
 *     sub_1C0060538 @ 0x1C0060538 (sub_1C0060538.c)
 *     sub_1C0060808 @ 0x1C0060808 (sub_1C0060808.c)
 *     sub_1C0061CC4 @ 0x1C0061CC4 (sub_1C0061CC4.c)
 *     sub_1C0065A40 @ 0x1C0065A40 (sub_1C0065A40.c)
 *     sub_1C006ED80 @ 0x1C006ED80 (sub_1C006ED80.c)
 *     sub_1C00722C8 @ 0x1C00722C8 (sub_1C00722C8.c)
 *     sub_1C00745B0 @ 0x1C00745B0 (sub_1C00745B0.c)
 *     sub_1C0078920 @ 0x1C0078920 (sub_1C0078920.c)
 *     sub_1C0078F68 @ 0x1C0078F68 (sub_1C0078F68.c)
 *     sub_1C007913C @ 0x1C007913C (sub_1C007913C.c)
 *     sub_1C00793D4 @ 0x1C00793D4 (sub_1C00793D4.c)
 *     sub_1C007B570 @ 0x1C007B570 (sub_1C007B570.c)
 *     sub_1C007B6C0 @ 0x1C007B6C0 (sub_1C007B6C0.c)
 *     sub_1C007B860 @ 0x1C007B860 (sub_1C007B860.c)
 *     sub_1C007C930 @ 0x1C007C930 (sub_1C007C930.c)
 *     sub_1C007CAA0 @ 0x1C007CAA0 (sub_1C007CAA0.c)
 *     sub_1C007EDC0 @ 0x1C007EDC0 (sub_1C007EDC0.c)
 *     sub_1C007EEF0 @ 0x1C007EEF0 (sub_1C007EEF0.c)
 *     sub_1C0080978 @ 0x1C0080978 (sub_1C0080978.c)
 *     sub_1C0080F70 @ 0x1C0080F70 (sub_1C0080F70.c)
 *     sub_1C0081040 @ 0x1C0081040 (sub_1C0081040.c)
 *     sub_1C0081288 @ 0x1C0081288 (sub_1C0081288.c)
 *     sub_1C008130C @ 0x1C008130C (sub_1C008130C.c)
 *     sub_1C00A0B3C @ 0x1C00A0B3C (sub_1C00A0B3C.c)
 *     sub_1C00A2530 @ 0x1C00A2530 (sub_1C00A2530.c)
 *     sub_1C00A3470 @ 0x1C00A3470 (sub_1C00A3470.c)
 *     sub_1C00A3884 @ 0x1C00A3884 (sub_1C00A3884.c)
 *     sub_1C00A3BF8 @ 0x1C00A3BF8 (sub_1C00A3BF8.c)
 *     sub_1C00A6E08 @ 0x1C00A6E08 (sub_1C00A6E08.c)
 *     sub_1C00A87D8 @ 0x1C00A87D8 (sub_1C00A87D8.c)
 *     sub_1C00A993C @ 0x1C00A993C (sub_1C00A993C.c)
 *     sub_1C00A9A4C @ 0x1C00A9A4C (sub_1C00A9A4C.c)
 *     sub_1C00A9E90 @ 0x1C00A9E90 (sub_1C00A9E90.c)
 *     sub_1C00AA6DC @ 0x1C00AA6DC (sub_1C00AA6DC.c)
 *     sub_1C00AAB80 @ 0x1C00AAB80 (sub_1C00AAB80.c)
 *     sub_1C00AB3FC @ 0x1C00AB3FC (sub_1C00AB3FC.c)
 *     sub_1C00AC53C @ 0x1C00AC53C (sub_1C00AC53C.c)
 *     sub_1C00AC5A8 @ 0x1C00AC5A8 (sub_1C00AC5A8.c)
 *     sub_1C00AC62C @ 0x1C00AC62C (sub_1C00AC62C.c)
 *     sub_1C00ACEE4 @ 0x1C00ACEE4 (sub_1C00ACEE4.c)
 *     sub_1C00AE918 @ 0x1C00AE918 (sub_1C00AE918.c)
 *     sub_1C00B0EA4 @ 0x1C00B0EA4 (sub_1C00B0EA4.c)
 *     sub_1C00B162C @ 0x1C00B162C (sub_1C00B162C.c)
 *     sub_1C00B1760 @ 0x1C00B1760 (sub_1C00B1760.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}
