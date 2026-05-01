/*
 * XREFs of ??YBigInteger@internal@tip_rapidjson@@QEAAAEAV012@_K@Z @ 0x18034D5A4
 * Callers:
 *     ?AppendDecimal64@BigInteger@internal@tip_rapidjson@@AEAAXPEBD0@Z @ 0x18034DC44 (-AppendDecimal64@BigInteger@internal@tip_rapidjson@@AEAAXPEBD0@Z.c)
 * Callees:
 *     ?PushBack@BigInteger@internal@tip_rapidjson@@AEAAX_K@Z @ 0x18034F688 (-PushBack@BigInteger@internal@tip_rapidjson@@AEAAX_K@Z.c)
 */

tip_rapidjson::internal::BigInteger *__fastcall tip_rapidjson::internal::BigInteger::operator+=(
        tip_rapidjson::internal::BigInteger *this,
        __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 *v7; // rcx

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v5 = *(_QWORD *)this + a2;
  v6 = *((_QWORD *)this + 416);
  *(_QWORD *)this = v5;
  if ( v6 == 1 )
  {
LABEL_5:
    if ( *((_QWORD *)this + v6 - 1) < v2 )
      tip_rapidjson::internal::BigInteger::PushBack(this, 1uLL);
  }
  else
  {
    v7 = (unsigned __int64 *)((char *)this + 8);
    while ( *(v7 - 1) < v2 )
    {
      v2 = *v7;
      ++v3;
      ++*v7++;
      v6 = *((_QWORD *)this + 416);
      if ( v3 >= v6 - 1 )
        goto LABEL_5;
    }
  }
  return this;
}
