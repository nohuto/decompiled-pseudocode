/*
 * XREFs of RtlpMuiRegGetFallbackLanguageInfoByIndex @ 0x180112C48
 * Callers:
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1801130C4 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetFallbackLanguageInfoByIndex(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned __int16 *a5,
        __int64 a6)
{
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  __int128 v16; // [rsp+0h] [rbp-28h]

  if ( !a1 || !a2 || !a6 || !a5 || a3 > 3u )
    return 3221225485LL;
  v7 = (*(unsigned __int16 *)(a2 + 8) >> (2 * a3)) & 3;
  if ( !v7 )
    return 3221225473LL;
  v8 = v7 - 1;
  if ( !v8 )
  {
    v16 = 0LL;
    WORD3(v16) = -1;
    WORD2(v16) = *(_WORD *)(a2 + 2LL * (__int16)a3 + 12);
    goto LABEL_11;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v16 = 0LL;
      WORD3(v16) = *(_WORD *)(a2 + 2LL * (__int16)a3 + 12);
LABEL_11:
      *(_OWORD *)a6 = v16;
      *a5 = a3;
      *(_QWORD *)(a6 + 16) = 0LL;
      *(_DWORD *)(a6 + 24) = 0;
      return 0LL;
    }
  }
  else
  {
    _mm_lfence();
    v10 = *(__int16 *)(a2 + 2LL * (__int16)a3 + 12);
    if ( (v10 & 0x8000u) == 0LL )
    {
      v11 = *(_QWORD *)(a1 + 24);
      if ( (int)v10 < *(unsigned __int16 *)(v11 + 6) )
      {
        v12 = *(_QWORD *)(v11 + 16);
        *a5 = v10;
        v13 = *(_OWORD *)(28 * v10 + v12);
        v14 = *(_QWORD *)(28 * v10 + v12 + 16);
        LODWORD(v12) = *(_DWORD *)(28 * v10 + v12 + 24);
        *(_OWORD *)a6 = v13;
        *(_QWORD *)(a6 + 16) = v14;
        *(_DWORD *)(a6 + 24) = v12;
        return 0LL;
      }
    }
  }
  return 3221225701LL;
}
