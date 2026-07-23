/*
 * XREFs of sub_1407243A0 @ 0x1407243A0
 * Callers:
 *     SeAuditingAnyFileEventsWithContextEx @ 0x1402A4690 (SeAuditingAnyFileEventsWithContextEx.c)
 *     SeAuditingFileEventsWithContextEx @ 0x1405F4D90 (SeAuditingFileEventsWithContextEx.c)
 *     sub_140723F80 @ 0x140723F80 (sub_140723F80.c)
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 */

char __fastcall sub_1407243A0(unsigned int a1, int a2, struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  __int64 v4; // rbp
  char v6; // di
  int v7; // eax
  char v8; // bl
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r15
  _BYTE *ClientToken; // r8
  unsigned int v12; // edx
  __int16 v13; // r13
  __int16 v14; // r12
  unsigned int v15; // r9d
  __m128i v16; // xmm3
  __m128i v17; // xmm2
  __int64 v18; // rax
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  __m128i v21; // xmm2
  unsigned __int16 *v22; // rcx
  __int64 v23; // r9
  int v24; // eax
  int v25; // r11d
  unsigned int i; // r10d
  int v27; // r9d
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+20h] [rbp-48h] BYREF

  v4 = a1;
  v6 = a2;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v7 = dword_140C1B340[a1];
  if ( !v7 )
    return 0;
  if ( (v7 & a2) != 0 )
    return 1;
  v8 = 0;
  if ( dword_140C1B500[a1] )
  {
    if ( a3 )
    {
      p_SubjectContext = a3;
    }
    else
    {
      p_SubjectContext = &SubjectContext;
      SeCaptureSubjectContext(&SubjectContext);
    }
    ClientToken = p_SubjectContext->ClientToken;
    if ( p_SubjectContext->ClientToken || (ClientToken = p_SubjectContext->PrimaryToken) != 0LL )
    {
      if ( ClientToken[118] == 2 )
      {
        v12 = 0;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        if ( a1 )
        {
          if ( a1 < 8 )
            goto LABEL_19;
          v16 = 0LL;
          v17 = 0LL;
          do
          {
            v18 = v15 + 4;
            v19 = _mm_unpacklo_epi16(_mm_loadl_epi64((const __m128i *)&qword_140D3B168[v15 / 4]), (__m128i)0LL);
            v15 += 8;
            v16 = _mm_add_epi32(v16, v19);
            v17 = _mm_add_epi32(
                    v17,
                    _mm_unpacklo_epi16(
                      _mm_loadl_epi64((const __m128i *)((char *)qword_140D3B168 + 2 * v18)),
                      (__m128i)0LL));
          }
          while ( v15 < (a1 & 0xFFFFFFF8) );
          v20 = _mm_add_epi32(v17, v16);
          v21 = _mm_add_epi32(v20, _mm_srli_si128(v20, 8));
          v12 = _mm_cvtsi128_si32(_mm_add_epi32(v21, _mm_srli_si128(v21, 4)));
          if ( v15 < a1 )
          {
LABEL_19:
            v22 = (unsigned __int16 *)(0x140000000LL + 2LL * v15 + 13873512);
            v23 = a1 - v15;
            do
            {
              v24 = *v22++;
              v12 += v24;
              --v23;
            }
            while ( v23 );
          }
        }
        v25 = *((unsigned __int16 *)qword_140D3B168 + v4);
        for ( i = v12 + v25; v12 < i; ++v12 )
        {
          v27 = (unsigned __int8)ClientToken[((unsigned __int64)v12 >> 1) + 88] >> (4 * (v12 & 1));
          if ( (v27 & 1) != 0 )
          {
            if ( (v6 & 2) != 0 )
              goto LABEL_33;
            ++v13;
          }
          if ( (v27 & 4) != 0 )
          {
            if ( (v6 & 0x20) != 0 )
              goto LABEL_33;
            ++v14;
          }
        }
        if ( (v6 & 1) != 0 && v13 == (_WORD)v25 || (v6 & 0x10) != 0 && v14 == (_WORD)v25 )
LABEL_33:
          v8 = 1;
      }
    }
    else
    {
      sub_1409CF1A0(3221225596LL);
    }
    if ( !a3 )
      SeReleaseSubjectContext(p_SubjectContext);
  }
  return v8;
}
