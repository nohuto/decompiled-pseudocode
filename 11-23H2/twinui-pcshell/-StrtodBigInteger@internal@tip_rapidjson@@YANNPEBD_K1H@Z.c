/*
 * XREFs of ?StrtodBigInteger@internal@tip_rapidjson@@YANNPEBD_K1H@Z @ 0x180419FFC
 * Callers:
 *     ?StrtodFullPrecision@internal@tip_rapidjson@@YANNHPEBD_K1H@Z @ 0x18041A4C0 (-StrtodFullPrecision@internal@tip_rapidjson@@YANNHPEBD_K1H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??0BigInteger@internal@tip_rapidjson@@QEAA@PEBD_K@Z @ 0x1804166D0 (--0BigInteger@internal@tip_rapidjson@@QEAA@PEBD_K@Z.c)
 *     ?CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z @ 0x1804180E8 (-CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z.c)
 *     ?NextPositiveDouble@Double@internal@tip_rapidjson@@QEBANXZ @ 0x1804191AC (-NextPositiveDouble@Double@internal@tip_rapidjson@@QEBANXZ.c)
 */

double __fastcall tip_rapidjson::internal::StrtodBigInteger(
        tip_rapidjson::internal *this,
        double a2,
        const char *a3,
        int a4,
        unsigned __int64 a5)
{
  const char *v5; // rdx
  double result; // xmm0_8
  int v8; // ebx
  tip_rapidjson::internal *v9; // rcx
  int v10; // eax
  double v11[2]; // [rsp+20h] [rbp-D48h] BYREF
  _BYTE v12[3344]; // [rsp+30h] [rbp-D38h] BYREF

  v8 = (int)a3;
  tip_rapidjson::internal::BigInteger::BigInteger((tip_rapidjson::internal::BigInteger *)v12, v5, (unsigned __int64)a3);
  v11[0] = result;
  v10 = tip_rapidjson::internal::CheckWithinHalfULP(
          v9,
          a2,
          (const struct tip_rapidjson::internal::BigInteger *)(unsigned int)(a5 + a4 - v8));
  if ( v10 >= 0 && (v10 || (LOBYTE(v11[0]) & 1) != 0) )
    return tip_rapidjson::internal::Double::NextPositiveDouble((tip_rapidjson::internal::Double *)v11);
  return result;
}
