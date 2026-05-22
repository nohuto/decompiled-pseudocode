/*
 * XREFs of ?GetRelativePoint@InputSite@@QEAA?AV?$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z @ 0x180123EBC
 * Callers:
 *     ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x1801B08A0 (-AveragePoint@@YA-AUPoint@Foundation@Windows@@PEBUInputInfo@@V-$ComPtr@VInputSite@@@WRL@Microsof.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?ScreenPointToRelative@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800E7A2C (-ScreenPointToRelative@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x180124D8C (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 */

__int64 __fastcall InputSite::GetRelativePoint(__int64 a1, __int64 a2, int *a3)
{
  char v3; // al
  __int128 *Transform; // rax
  float *v7; // rax
  float v8; // xmm0_4
  float v9; // xmm1_4
  __int64 result; // rax
  unsigned __int64 v11; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v12[8]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v13[64]; // [rsp+30h] [rbp-58h] BYREF

  v3 = 0;
  if ( *(_BYTE *)(a1 + 480) )
  {
    Transform = (__int128 *)LegacyInputSinkData::GetTransform(a1 + 48, v13);
    v11 = _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)*a3), (__m128)COERCE_UNSIGNED_INT((float)a3[1])).m128_u64[0];
    v7 = (float *)CInputTransform::ScreenPointToRelative((__int64)v12, (float *)&v11, Transform);
    v8 = *v7;
    v9 = v7[1];
    v3 = 1;
  }
  else
  {
    v8 = (float)*a3;
    v9 = (float)a3[1];
  }
  *(_BYTE *)a2 = v3;
  result = a2;
  *(float *)(a2 + 4) = v8;
  *(float *)(a2 + 8) = v9;
  return result;
}
