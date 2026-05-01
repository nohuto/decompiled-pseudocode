/*
 * XREFs of ?Pow10@internal@tip_rapidjson@@YANH@Z @ 0x180419954
 * Callers:
 *     ?FastPath@internal@tip_rapidjson@@YANNH@Z @ 0x1804185F0 (-FastPath@internal@tip_rapidjson@@YANNH@Z.c)
 *     ?StrtodFast@internal@tip_rapidjson@@YA_NNHPEAN@Z @ 0x18041A458 (-StrtodFast@internal@tip_rapidjson@@YA_NNHPEAN@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

double __fastcall tip_rapidjson::internal::Pow10(tip_rapidjson::internal *this)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)this > 0x134 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  return `tip_rapidjson::internal::Pow10'::`2'::e[(int)this];
}
