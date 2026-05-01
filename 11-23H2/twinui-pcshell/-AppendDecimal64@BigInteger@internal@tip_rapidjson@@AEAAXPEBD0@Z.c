/*
 * XREFs of ?AppendDecimal64@BigInteger@internal@tip_rapidjson@@AEAAXPEBD0@Z @ 0x180417F30
 * Callers:
 *     ??0BigInteger@internal@tip_rapidjson@@QEAA@PEBD_K@Z @ 0x1804166D0 (--0BigInteger@internal@tip_rapidjson@@QEAA@PEBD_K@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ??YBigInteger@internal@tip_rapidjson@@QEAAAEAV012@_K@Z @ 0x18041775C (--YBigInteger@internal@tip_rapidjson@@QEAAAEAV012@_K@Z.c)
 *     ??_3BigInteger@internal@tip_rapidjson@@QEAAAEAV012@_K@Z @ 0x1804177D4 (--_3BigInteger@internal@tip_rapidjson@@QEAAAEAV012@_K@Z.c)
 *     ?MultiplyPow5@BigInteger@internal@tip_rapidjson@@QEAAAEAV123@I@Z @ 0x1804190A4 (-MultiplyPow5@BigInteger@internal@tip_rapidjson@@QEAAAEAV123@I@Z.c)
 */

void __fastcall tip_rapidjson::internal::BigInteger::AppendDecimal64(
        tip_rapidjson::internal::BigInteger *this,
        const char *a2,
        const char *a3)
{
  __int64 v3; // rdi
  const char *i; // r10
  __int64 v6; // rcx
  unsigned int v7; // ebx
  struct tip_rapidjson::internal::BigInteger *v8; // rax
  tip_rapidjson::internal::BigInteger *v9; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  for ( i = a2; i != a3; v3 = v6 + 10 * v3 )
  {
    if ( (unsigned __int8)(*i - 48) > 9u )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
    v6 = (unsigned int)(*i++ - 48);
  }
  if ( *((_QWORD *)this + 416) != 1LL || *(_QWORD *)this )
  {
    v7 = (_DWORD)a3 - (_DWORD)a2;
    v8 = tip_rapidjson::internal::BigInteger::MultiplyPow5(this, (int)a3 - (int)a2);
    v9 = (tip_rapidjson::internal::BigInteger *)tip_rapidjson::internal::BigInteger::operator<<=(v8, v7);
    tip_rapidjson::internal::BigInteger::operator+=(v9, v3);
  }
  else
  {
    *(_QWORD *)this = v3;
    *((_QWORD *)this + 416) = 1LL;
  }
}
