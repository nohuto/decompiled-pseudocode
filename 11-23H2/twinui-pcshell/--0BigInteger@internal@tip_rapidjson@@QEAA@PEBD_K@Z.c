/*
 * XREFs of ??0BigInteger@internal@tip_rapidjson@@QEAA@PEBD_K@Z @ 0x1804166D0
 * Callers:
 *     ?StrtodBigInteger@internal@tip_rapidjson@@YANNPEBD_K1H@Z @ 0x180419FFC (-StrtodBigInteger@internal@tip_rapidjson@@YANNPEBD_K1H@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?AppendDecimal64@BigInteger@internal@tip_rapidjson@@AEAAXPEBD0@Z @ 0x180417F30 (-AppendDecimal64@BigInteger@internal@tip_rapidjson@@AEAAXPEBD0@Z.c)
 */

tip_rapidjson::internal::BigInteger *__fastcall tip_rapidjson::internal::BigInteger::BigInteger(
        tip_rapidjson::internal::BigInteger *this,
        const char *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  *((_QWORD *)this + 416) = 1LL;
  v3 = a3;
  if ( !a3 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *(_QWORD *)this = 0LL;
  v6 = 0LL;
  if ( a3 < 0x13 )
    goto LABEL_7;
  v7 = a3 / 0x13;
  v3 = a3 % 0x13;
  do
  {
    tip_rapidjson::internal::BigInteger::AppendDecimal64(this, &a2[v6], &a2[v6 + 19]);
    v6 += 19LL;
    --v7;
  }
  while ( v7 );
  if ( v3 )
LABEL_7:
    tip_rapidjson::internal::BigInteger::AppendDecimal64(this, &a2[v6], &a2[v6 + v3]);
  return this;
}
