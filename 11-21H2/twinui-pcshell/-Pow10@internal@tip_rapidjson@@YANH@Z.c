/*
 * XREFs of ?Pow10@internal@tip_rapidjson@@YANH@Z @ 0x18034F63C
 * Callers:
 *     ?FastPath@internal@tip_rapidjson@@YANNH@Z @ 0x18034E530 (-FastPath@internal@tip_rapidjson@@YANNH@Z.c)
 *     ?StrtodFast@internal@tip_rapidjson@@YA_NNHPEAN@Z @ 0x1803506B8 (-StrtodFast@internal@tip_rapidjson@@YA_NNHPEAN@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
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
