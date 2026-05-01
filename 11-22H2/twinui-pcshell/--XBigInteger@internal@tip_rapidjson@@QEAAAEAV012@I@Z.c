/*
 * XREFs of ??XBigInteger@internal@tip_rapidjson@@QEAAAEAV012@I@Z @ 0x1804176B0
 * Callers:
 *     ?MultiplyPow5@BigInteger@internal@tip_rapidjson@@QEAAAEAV123@I@Z @ 0x1804190A4 (-MultiplyPow5@BigInteger@internal@tip_rapidjson@@QEAAAEAV123@I@Z.c)
 * Callees:
 *     ?PushBack@BigInteger@internal@tip_rapidjson@@AEAAX_K@Z @ 0x1804199A0 (-PushBack@BigInteger@internal@tip_rapidjson@@AEAAX_K@Z.c)
 */

tip_rapidjson::internal::BigInteger *__fastcall tip_rapidjson::internal::BigInteger::operator*=(
        tip_rapidjson::internal::BigInteger *this,
        unsigned int a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // r10
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx

  if ( !a2 )
  {
    *(_QWORD *)this = 0LL;
LABEL_3:
    *((_QWORD *)this + 416) = 1LL;
    return this;
  }
  if ( a2 == 1 )
    return this;
  v3 = *((_QWORD *)this + 416);
  if ( v3 == 1 && *(_QWORD *)this == 1LL )
  {
    *(_QWORD *)this = a2;
    goto LABEL_3;
  }
  v4 = 0LL;
  v5 = 0LL;
  if ( v3 )
  {
    v6 = a2;
    do
    {
      v7 = v4 + v6 * *((unsigned int *)this + 2 * v5);
      v8 = HIDWORD(v7) + v6 * HIDWORD(*((_QWORD *)this + v5));
      v4 = HIDWORD(v8);
      *((_QWORD *)this + v5++) = (unsigned int)v7 | (v8 << 32);
    }
    while ( v5 < *((_QWORD *)this + 416) );
    if ( v4 )
      tip_rapidjson::internal::BigInteger::PushBack(this, v4);
  }
  return this;
}
