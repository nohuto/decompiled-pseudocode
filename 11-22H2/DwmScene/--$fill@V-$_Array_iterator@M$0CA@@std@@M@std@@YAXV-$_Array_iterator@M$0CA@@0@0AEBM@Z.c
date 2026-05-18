/*
 * XREFs of ??$fill@V?$_Array_iterator@M$0CA@@std@@M@std@@YAXV?$_Array_iterator@M$0CA@@0@0AEBM@Z @ 0x18009BD98
 * Callers:
 *     ?CalculateBlurConstants@ImageProcessingEffectBlur@Engine@Spectre@@IEBAXAEAV?$array@UVector4@Math@Utils@Spectre@@$0BA@@std@@0MM@Z @ 0x18009C688 (-CalculateBlurConstants@ImageProcessingEffectBlur@Engine@Spectre@@IEBAXAEAV-$array@UVector4@Math.c)
 * Callees:
 *     ??$_Is_all_bits_zero@M@std@@YA_NAEBM@Z @ 0x180044D30 (--$_Is_all_bits_zero@M@std@@YA_NAEBM@Z.c)
 */

char __fastcall std::fill<std::_Array_iterator<float,32>,float>(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned __int64 v3; // rax
  _DWORD *v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9
  _DWORD *v7; // r10
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  _DWORD *v10; // rdi
  unsigned __int64 i; // rcx

  LOBYTE(v3) = std::_Is_all_bits_zero<float>(a3);
  if ( (_BYTE)v3 )
  {
    LOBYTE(v3) = (unsigned __int8)std::_Fill_zero_memset<float *>(v6, v5 >> 2);
  }
  else
  {
    v8 = (unsigned __int64)(v5 + 3) >> 2;
    if ( v6 > v4 )
      v8 = 0LL;
    if ( v8 >= 4 )
    {
      v3 = (unsigned __int64)&v6[v8 - 1];
      if ( v6 > v7 || v3 < (unsigned __int64)v7 )
      {
        LODWORD(v3) = *v7;
        v9 = 4 * (v8 & 0xFFFFFFFFFFFFFFFCuLL);
        v10 = v6;
        for ( i = v9 >> 2; i; --i )
          *v10++ = v3;
        v6 = (_DWORD *)((char *)v6 + v9);
      }
    }
    while ( v6 != v4 )
    {
      LODWORD(v3) = *v7;
      *v6++ = *v7;
    }
  }
  return v3;
}
