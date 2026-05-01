/*
 * XREFs of ?PushBack@BigInteger@internal@tip_rapidjson@@AEAAX_K@Z @ 0x18034F688
 * Callers:
 *     ??XBigInteger@internal@tip_rapidjson@@QEAAAEAV012@I@Z @ 0x18034D4F8 (--XBigInteger@internal@tip_rapidjson@@QEAAAEAV012@I@Z.c)
 *     ??YBigInteger@internal@tip_rapidjson@@QEAAAEAV012@_K@Z @ 0x18034D5A4 (--YBigInteger@internal@tip_rapidjson@@QEAAAEAV012@_K@Z.c)
 *     ?MultiplyPow5@BigInteger@internal@tip_rapidjson@@QEAAAEAV123@I@Z @ 0x18034ED58 (-MultiplyPow5@BigInteger@internal@tip_rapidjson@@QEAAAEAV123@I@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 */

void __fastcall tip_rapidjson::internal::BigInteger::PushBack(tip_rapidjson::internal::BigInteger *this, __int64 a2)
{
  unsigned __int64 v2; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 416);
  if ( v2 >= 0x1A0 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  *((_QWORD *)this + v2) = a2;
  ++*((_QWORD *)this + 416);
}
