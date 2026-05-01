/*
 * XREFs of ?NextPositiveDouble@Double@internal@tip_rapidjson@@QEBANXZ @ 0x1804191AC
 * Callers:
 *     ?StrtodBigInteger@internal@tip_rapidjson@@YANNPEBD_K1H@Z @ 0x180419FFC (-StrtodBigInteger@internal@tip_rapidjson@@YANNPEBD_K1H@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

double __fastcall tip_rapidjson::internal::Double::NextPositiveDouble(tip_rapidjson::internal::Double *this)
{
  double result; // xmm0_8
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(__int64 *)this < 0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *(_QWORD *)&result = *(_QWORD *)this + 1LL;
  return result;
}
