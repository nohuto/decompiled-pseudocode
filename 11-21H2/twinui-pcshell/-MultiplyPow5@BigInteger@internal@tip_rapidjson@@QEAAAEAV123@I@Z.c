/*
 * XREFs of ?MultiplyPow5@BigInteger@internal@tip_rapidjson@@QEAAAEAV123@I@Z @ 0x18034ED58
 * Callers:
 *     ?AppendDecimal64@BigInteger@internal@tip_rapidjson@@AEAAXPEBD0@Z @ 0x18034DC44 (-AppendDecimal64@BigInteger@internal@tip_rapidjson@@AEAAXPEBD0@Z.c)
 *     ?CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z @ 0x18034DE00 (-CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z.c)
 * Callees:
 *     ??XBigInteger@internal@tip_rapidjson@@QEAAAEAV012@I@Z @ 0x18034D4F8 (--XBigInteger@internal@tip_rapidjson@@QEAAAEAV012@I@Z.c)
 *     ?PushBack@BigInteger@internal@tip_rapidjson@@AEAAX_K@Z @ 0x18034F688 (-PushBack@BigInteger@internal@tip_rapidjson@@AEAAX_K@Z.c)
 */

struct tip_rapidjson::internal::BigInteger *__fastcall tip_rapidjson::internal::BigInteger::MultiplyPow5(
        tip_rapidjson::internal::BigInteger *this,
        unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int128 v8; // rax
  __int64 v9; // rsi

  v2 = a2;
  if ( a2 )
  {
    if ( a2 >= 0x1B )
    {
      v4 = a2 / 0x1B;
      do
      {
        v5 = *((_QWORD *)this + 416);
        if ( v5 == 1 && *(_QWORD *)this == 1LL )
        {
          *(_QWORD *)this = 0x6765C793FA10079DLL;
          *((_QWORD *)this + 416) = 1LL;
        }
        else
        {
          v6 = 0LL;
          v7 = 0LL;
          if ( v5 )
          {
            do
            {
              v8 = *((unsigned __int64 *)this + v7) * (unsigned __int128)0x6765C793FA10079DuLL;
              *(_QWORD *)&v8 = v6 + 0x6765C793FA10079DLL * *((_QWORD *)this + v7);
              if ( (unsigned __int64)v8 < v6 )
                ++*((_QWORD *)&v8 + 1);
              *((_QWORD *)this + v7) = v8;
              v6 = *((_QWORD *)&v8 + 1);
              ++v7;
            }
            while ( v7 < *((_QWORD *)this + 416) );
            if ( *((_QWORD *)&v8 + 1) )
              tip_rapidjson::internal::BigInteger::PushBack(this, *((unsigned __int64 *)&v8 + 1));
          }
        }
        v2 -= 27;
        --v4;
      }
      while ( v4 );
    }
    if ( v2 >= 0xD )
    {
      v9 = v2 / 0xD;
      do
      {
        tip_rapidjson::internal::BigInteger::operator*=(this, 0x48C27395u);
        v2 -= 13;
        --v9;
      }
      while ( v9 );
    }
    if ( v2 )
      tip_rapidjson::internal::BigInteger::operator*=(
        this,
        `tip_rapidjson::internal::BigInteger::MultiplyPow5'::`2'::kPow5[v2 - 1]);
  }
  return this;
}
