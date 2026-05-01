/*
 * XREFs of ?Grisu2@internal@tip_rapidjson@@YAXNPEADPEAH1@Z @ 0x1806544BC
 * Callers:
 *     ?dtoa@internal@tip_rapidjson@@YAPEADNPEADH@Z @ 0x180655F38 (-dtoa@internal@tip_rapidjson@@YAPEADNPEADH@Z.c)
 * Callees:
 *     ??DDiyFp@internal@tip_rapidjson@@QEBA?AU012@AEBU012@@Z @ 0x180417570 (--DDiyFp@internal@tip_rapidjson@@QEBA-AU012@AEBU012@@Z.c)
 *     ??0DiyFp@internal@tip_rapidjson@@QEAA@N@Z @ 0x180653F74 (--0DiyFp@internal@tip_rapidjson@@QEAA@N@Z.c)
 *     ?DigitGen@internal@tip_rapidjson@@YAXAEBUDiyFp@12@0_KPEADPEAH3@Z @ 0x1806540C8 (-DigitGen@internal@tip_rapidjson@@YAXAEBUDiyFp@12@0_KPEADPEAH3@Z.c)
 *     ?NormalizedBoundaries@DiyFp@internal@tip_rapidjson@@QEBAXPEAU123@0@Z @ 0x1806551C8 (-NormalizedBoundaries@DiyFp@internal@tip_rapidjson@@QEBAXPEAU123@0@Z.c)
 */

void __fastcall tip_rapidjson::internal::Grisu2(tip_rapidjson::internal *this, double a2, char *a3, int *a4)
{
  tip_rapidjson::internal *v4; // rdx
  double v5; // xmm0_8
  tip_rapidjson::internal *v8; // rsi
  double v9; // xmm2_8
  int v10; // edx
  int v11; // edx
  unsigned __int64 v12; // r8
  int *v13; // [rsp+38h] [rbp-9h] BYREF
  int v14; // [rsp+40h] [rbp-1h]
  __int64 v15; // [rsp+48h] [rbp+7h] BYREF
  int v16; // [rsp+50h] [rbp+Fh]
  unsigned __int64 v17; // [rsp+58h] [rbp+17h] BYREF
  int v18; // [rsp+60h] [rbp+1Fh]
  unsigned __int64 v19; // [rsp+68h] [rbp+27h] BYREF
  int v20; // [rsp+70h] [rbp+2Fh]
  unsigned __int64 v21; // [rsp+78h] [rbp+37h] BYREF
  int v22; // [rsp+80h] [rbp+3Fh]
  _BYTE v23[16]; // [rsp+88h] [rbp+47h] BYREF

  v8 = v4;
  tip_rapidjson::internal::DiyFp::DiyFp((tip_rapidjson::internal::DiyFp *)&v17, v5);
  v19 = 0LL;
  v20 = 0;
  v13 = 0LL;
  v14 = 0;
  tip_rapidjson::internal::DiyFp::NormalizedBoundaries(
    (tip_rapidjson::internal::DiyFp *)&v17,
    (struct tip_rapidjson::internal::DiyFp *)&v19,
    (struct tip_rapidjson::internal::DiyFp *)&v13);
  v9 = (double)(-61 - v14) * 0.3010299956639811 + 347.0;
  v10 = (int)v9 + 1;
  if ( v9 - (double)(int)v9 <= 0.0 )
    v10 = (int)v9;
  v11 = (v10 >> 3) + 1;
  *a4 = 348 - 8 * v11;
  v15 = `tip_rapidjson::internal::GetCachedPowerByIndex'::`2'::kCachedPowers_F[v11];
  _BitScanReverse64(&v12, v17);
  v16 = `tip_rapidjson::internal::GetCachedPowerByIndex'::`2'::kCachedPowers_E[v11];
  v21 = v17 << (63 - (unsigned __int8)v12);
  v22 = v12 + v18 - 63;
  tip_rapidjson::internal::DiyFp::operator*(&v21, (__int64)v23, (unsigned __int64 *)&v15);
  tip_rapidjson::internal::DiyFp::operator*((unsigned __int64 *)&v13, (__int64)&v17, (unsigned __int64 *)&v15);
  tip_rapidjson::internal::DiyFp::operator*(&v19, (__int64)&v21, (unsigned __int64 *)&v15);
  tip_rapidjson::internal::DigitGen(
    (tip_rapidjson::internal *)v23,
    (const struct tip_rapidjson::internal::DiyFp *)&v17,
    v17 - 1 - v21 - 1,
    v8,
    a3,
    a4,
    v13);
}
