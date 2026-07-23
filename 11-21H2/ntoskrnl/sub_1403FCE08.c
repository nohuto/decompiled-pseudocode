/*
 * XREFs of sub_1403FCE08 @ 0x1403FCE08
 * Callers:
 *     sub_1403FCD10 @ 0x1403FCD10 (sub_1403FCD10.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall sub_1403FCE08(__m128i **a1, __int64 a2, unsigned __int64 a3, __m128i *a4)
{
  __m128i v4; // xmm8
  __m128i v5; // xmm0
  __m128i v6; // xmm10
  __m128i v7; // xmm8
  __m128i v8; // xmm2
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  __m128i v11; // xmm7
  __m128i v12; // xmm10
  __m128i v13; // xmm2
  __m128i v14; // xmm9
  __m128i v15; // xmm8
  __m128i v16; // xmm5
  __m128i v17; // xmm0
  __m128i v18; // xmm3
  __m128i v19; // xmm5
  __m128i v20; // xmm4
  __m128i v21; // xmm1
  __m128i v22; // xmm2
  __m128i v23; // xmm4
  unsigned __int64 v24; // r10
  __m128i *v25; // r8
  __int64 v26; // r11
  __m128i v27; // xmm4
  __m128i v28; // xmm4
  __m128i v29; // xmm1
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  __m128i v32; // xmm3
  __m128i v33; // xmm4
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __m128i v37; // xmm3
  __m128i v38; // xmm4
  __m128i *v39; // rax
  __m128i v40; // xmm5
  __int64 v41; // r8
  __m128i v42; // xmm6
  __m128i v43; // xmm3
  __m128i v44; // xmm5
  __m128i v45; // xmm5
  __m128i v46; // xmm7
  unsigned int *v47; // r8
  __m128i v48; // xmm10
  __m128i *v49; // r11
  __m128i v50; // xmm9
  __m128i v51; // xmm8
  __m128i v52; // xmm12
  __m128i v53; // xmm6
  __m128i v54; // xmm5
  __m128i v55; // xmm3
  __m128i v56; // xmm2
  __m128i v57; // xmm2
  __m128i v58; // xmm4
  __m128i v59; // xmm2
  __m128i v60; // xmm3
  __m128i v61; // xmm0
  __m128i v62; // xmm2
  __m128i v63; // xmm1
  __m128i v64; // xmm2
  __m128i v65; // xmm1
  __m128i v66; // xmm7
  __m128i v67; // xmm9
  __m128i v68; // xmm0
  __m128i v69; // xmm5
  __m128i v70; // xmm3
  __m128i v71; // xmm4
  __m128i v72; // xmm5
  __m128i v73; // xmm0
  __m128i v74; // xmm1
  __m128i v75; // xmm3
  __m128i *result; // rax

  v4 = _mm_loadu_si128(*a1);
  v5 = _mm_loadu_si128(a1[1]);
  v6 = _mm_unpacklo_epi32(v4, v5);
  v7 = _mm_unpackhi_epi32(v4, v5);
  v8 = _mm_loadu_si128(a1[2]);
  v9 = _mm_loadu_si128(a1[3]);
  v10 = _mm_unpacklo_epi32(v8, v9);
  v11 = _mm_unpacklo_epi64(v6, v10);
  a4[11] = v11;
  v12 = _mm_unpackhi_epi64(v6, v10);
  a4[10] = v12;
  v13 = _mm_unpackhi_epi32(v8, v9);
  v14 = _mm_unpacklo_epi64(v7, v13);
  a4[9] = v14;
  v15 = _mm_unpackhi_epi64(v7, v13);
  a4[8] = v15;
  v16 = _mm_loadu_si128(*a1 + 1);
  v17 = _mm_loadu_si128(a1[1] + 1);
  v18 = _mm_unpacklo_epi32(v16, v17);
  v19 = _mm_unpackhi_epi32(v16, v17);
  v20 = _mm_loadu_si128(a1[2] + 1);
  v21 = _mm_loadu_si128(a1[3] + 1);
  v22 = _mm_unpacklo_epi32(v20, v21);
  a4[7] = _mm_unpacklo_epi64(v18, v22);
  v23 = _mm_unpackhi_epi32(v20, v21);
  a4[5] = _mm_unpacklo_epi64(v19, v23);
  a4[6] = _mm_unpackhi_epi64(v18, v22);
  a4[4] = _mm_unpackhi_epi64(v19, v23);
  *a4 = v15;
  a4[1] = v14;
  a4[2] = v12;
  a4[3] = v11;
  if ( a3 >= 0x40 )
  {
    v24 = a3 >> 6;
    do
    {
      v25 = a4 + 14;
      v26 = 4LL;
      do
      {
        v27 = _mm_loadu_si128((const __m128i *)*(_QWORD *)a2);
        *(_QWORD *)a2 += 16LL;
        v28 = _mm_shuffle_epi8(v27, (__m128i)xmmword_140014100);
        v29 = _mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 8));
        *(_QWORD *)(a2 + 8) += 16LL;
        v30 = _mm_shuffle_epi8(v29, (__m128i)xmmword_140014100);
        v31 = _mm_unpacklo_epi32(v28, v30);
        v32 = _mm_shuffle_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 16)), (__m128i)xmmword_140014100);
        *(_QWORD *)(a2 + 16) += 16LL;
        v33 = _mm_unpackhi_epi32(v28, v30);
        v34 = _mm_loadu_si128((const __m128i *)*(_QWORD *)(a2 + 24));
        *(_QWORD *)(a2 + 24) += 16LL;
        v35 = _mm_shuffle_epi8(v34, (__m128i)xmmword_140014100);
        v36 = _mm_unpacklo_epi32(v32, v35);
        v37 = _mm_unpackhi_epi32(v32, v35);
        v25[-2] = _mm_unpacklo_epi64(v31, v36);
        *v25 = _mm_unpacklo_epi64(v33, v37);
        v25[-1] = _mm_unpackhi_epi64(v31, v36);
        v25[1] = _mm_unpackhi_epi64(v33, v37);
        v25 += 4;
        --v26;
      }
      while ( v26 );
      v38 = _mm_loadu_si128(a4 + 27);
      v39 = a4 + 21;
      v40 = _mm_loadu_si128(a4 + 26);
      v41 = 24LL;
      v42 = _mm_loadu_si128(a4 + 12);
      do
      {
        v43 = _mm_loadu_si128(v39 - 8);
        v44 = _mm_add_epi32(
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(_mm_srli_epi32(v40, 0x11u), _mm_slli_epi32(v40, 0xFu)),
                      _mm_slli_epi32(v40, 0xDu)),
                    _mm_srli_epi32(v40, 0x13u)),
                  _mm_srli_epi32(v40, 0xAu)),
                v42);
        v42 = _mm_loadu_si128(v39 - 7);
        v45 = _mm_add_epi32(v44, *v39);
        v39 += 2;
        v40 = _mm_add_epi32(
                v45,
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(_mm_slli_epi32(v43, 0x19u), _mm_srli_epi32(v43, 7u)),
                      _mm_slli_epi32(v43, 0xEu)),
                    _mm_srli_epi32(v43, 0x12u)),
                  _mm_srli_epi32(v43, 3u)));
        v39[5] = v40;
        v38 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_srli_epi32(v38, 0x11u), _mm_slli_epi32(v38, 0xFu)),
                          _mm_slli_epi32(v38, 0xDu)),
                        _mm_srli_epi32(v38, 0x13u)),
                      _mm_srli_epi32(v38, 0xAu)),
                    v43),
                  v39[-1]),
                _mm_xor_si128(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(_mm_slli_epi32(v42, 0x19u), _mm_srli_epi32(v42, 7u)),
                      _mm_slli_epi32(v42, 0xEu)),
                    _mm_srli_epi32(v42, 0x12u)),
                  _mm_srli_epi32(v42, 3u)));
        v39[6] = v38;
        --v41;
      }
      while ( v41 );
      v46 = _mm_loadu_si128(a4 + 11);
      v47 = (unsigned int *)&xmmword_140014000 + 2;
      v48 = _mm_loadu_si128(a4 + 10);
      v49 = a4 + 4;
      v50 = _mm_loadu_si128(a4 + 9);
      v51 = _mm_loadu_si128(a4 + 8);
      v52 = _mm_loadu_si128(a4 + 4);
      do
      {
        v53 = _mm_loadu_si128(v49 + 3);
        v54 = _mm_loadu_si128(v49 + 2);
        v55 = _mm_loadu_si128(v49 + 1);
        v56 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v53, 0x1Au), _mm_srli_epi32(v53, 6u)),
                              _mm_slli_epi32(v53, 0x15u)),
                            _mm_srli_epi32(v53, 0xBu)),
                          _mm_slli_epi32(v53, 7u)),
                        _mm_srli_epi32(v53, 0x19u)),
                      v49[8]),
                    v52),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v54, v55), v53), v55)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*(v47 - 2)), 0));
        v52 = _mm_add_epi32(v56, v51);
        v49[4] = v52;
        v51 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_slli_epi32(v46, 0x1Eu), _mm_srli_epi32(v46, 2u)),
                          _mm_slli_epi32(v46, 0x13u)),
                        _mm_srli_epi32(v46, 0xDu)),
                      _mm_slli_epi32(v46, 0xAu)),
                    _mm_srli_epi32(v46, 0x16u)),
                  v56),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v48, v46), v50), _mm_and_si128(v48, v46)));
        v57 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v52, 0x1Au), _mm_srli_epi32(v52, 6u)),
                              _mm_slli_epi32(v52, 0x15u)),
                            _mm_srli_epi32(v52, 0xBu)),
                          _mm_slli_epi32(v52, 7u)),
                        _mm_srli_epi32(v52, 0x19u)),
                      v49[9]),
                    v55),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v54, v53), v52), v54)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*(v47 - 1)), 0));
        v58 = _mm_add_epi32(v57, v50);
        v49[5] = v58;
        v50 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_slli_epi32(v51, 0x1Eu), _mm_srli_epi32(v51, 2u)),
                          _mm_slli_epi32(v51, 0x13u)),
                        _mm_srli_epi32(v51, 0xDu)),
                      _mm_slli_epi32(v51, 0xAu)),
                    _mm_srli_epi32(v51, 0x16u)),
                  v57),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v51, v46), v48), _mm_and_si128(v51, v46)));
        v59 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v58, 0x1Au), _mm_srli_epi32(v58, 6u)),
                              _mm_slli_epi32(v58, 0x15u)),
                            _mm_srli_epi32(v58, 0xBu)),
                          _mm_slli_epi32(v58, 7u)),
                        _mm_srli_epi32(v58, 0x19u)),
                      v49[10]),
                    v54),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v53, v52), v58), v53)),
                _mm_shuffle_epi32(_mm_cvtsi32_si128(*v47), 0));
        v60 = _mm_add_epi32(v59, v48);
        v49[6] = v60;
        v49 += 4;
        v48 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_srli_epi32(v50, 2u), _mm_slli_epi32(v50, 0x1Eu)),
                          _mm_slli_epi32(v50, 0x13u)),
                        _mm_srli_epi32(v50, 0xDu)),
                      _mm_slli_epi32(v50, 0xAu)),
                    _mm_srli_epi32(v50, 0x16u)),
                  v59),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v50, v51), v46), _mm_and_si128(v50, v51)));
        v61 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v47[1]), 0);
        v47 += 4;
        v62 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(
                            _mm_xor_si128(
                              _mm_xor_si128(_mm_slli_epi32(v60, 0x1Au), _mm_srli_epi32(v60, 6u)),
                              _mm_slli_epi32(v60, 0x15u)),
                            _mm_srli_epi32(v60, 0xBu)),
                          _mm_slli_epi32(v60, 7u)),
                        _mm_srli_epi32(v60, 0x19u)),
                      v49[7]),
                    v53),
                  _mm_xor_si128(_mm_and_si128(_mm_xor_si128(v52, v58), v60), v52)),
                v61);
        v49[3] = _mm_add_epi32(v62, v46);
        v46 = _mm_add_epi32(
                _mm_add_epi32(
                  _mm_xor_si128(
                    _mm_xor_si128(
                      _mm_xor_si128(
                        _mm_xor_si128(
                          _mm_xor_si128(_mm_slli_epi32(v48, 0x1Eu), _mm_srli_epi32(v48, 2u)),
                          _mm_slli_epi32(v48, 0x13u)),
                        _mm_srli_epi32(v48, 0xDu)),
                      _mm_slli_epi32(v48, 0xAu)),
                    _mm_srli_epi32(v48, 0x16u)),
                  v62),
                _mm_or_si128(_mm_and_si128(_mm_or_si128(v50, v48), v51), _mm_and_si128(v50, v48)));
      }
      while ( (__int64)v47 < (__int64)((unsigned int *)&xmmword_140014100 + 2) );
      v11 = _mm_add_epi32(v46, a4[3]);
      a4[11] = v11;
      v12 = _mm_add_epi32(v48, a4[2]);
      a4[3] = v11;
      a4[10] = v12;
      v14 = _mm_add_epi32(v50, a4[1]);
      a4[2] = v12;
      a4[9] = v14;
      v15 = _mm_add_epi32(v51, *a4);
      a4[1] = v14;
      a4[8] = v15;
      *a4 = v15;
      a4[7] = _mm_add_epi32(_mm_loadu_si128(a4 + 71), a4[7]);
      a4[6] = _mm_add_epi32(_mm_loadu_si128(a4 + 70), a4[6]);
      v63 = _mm_loadu_si128(a4 + 4);
      a4[5] = _mm_add_epi32(_mm_loadu_si128(a4 + 69), a4[5]);
      a4[4] = _mm_add_epi32(v63, a4[68]);
      --v24;
    }
    while ( v24 );
  }
  v64 = _mm_unpacklo_epi32(v11, v12);
  v65 = _mm_unpacklo_epi32(v14, v15);
  **a1 = _mm_unpacklo_epi64(v64, v65);
  v66 = _mm_unpackhi_epi32(v11, v12);
  *a1[1] = _mm_unpackhi_epi64(v64, v65);
  v67 = _mm_unpackhi_epi32(v14, v15);
  *a1[2] = _mm_unpacklo_epi64(v66, v67);
  *a1[3] = _mm_unpackhi_epi64(v66, v67);
  v68 = _mm_loadu_si128(a4 + 6);
  v69 = _mm_loadu_si128(a4 + 7);
  v70 = _mm_loadu_si128(a4 + 5);
  v71 = _mm_unpacklo_epi32(v69, v68);
  v72 = _mm_unpackhi_epi32(v69, v68);
  v73 = _mm_loadu_si128(a4 + 4);
  v74 = _mm_unpacklo_epi32(v70, v73);
  v75 = _mm_unpackhi_epi32(v70, v73);
  (*a1)[1] = _mm_unpacklo_epi64(v71, v74);
  a1[1][1] = _mm_unpackhi_epi64(v71, v74);
  a1[2][1] = _mm_unpacklo_epi64(v72, v75);
  result = a1[3];
  result[1] = _mm_unpackhi_epi64(v72, v75);
  return result;
}
