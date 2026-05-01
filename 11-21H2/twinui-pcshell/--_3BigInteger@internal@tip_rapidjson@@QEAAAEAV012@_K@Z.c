/*
 * XREFs of ??_3BigInteger@internal@tip_rapidjson@@QEAAAEAV012@_K@Z @ 0x18034D61C
 * Callers:
 *     ?AppendDecimal64@BigInteger@internal@tip_rapidjson@@AEAAXPEBD0@Z @ 0x18034DC44 (-AppendDecimal64@BigInteger@internal@tip_rapidjson@@AEAAXPEBD0@Z.c)
 *     ?CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z @ 0x18034DE00 (-CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z.c)
 * Callees:
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x1802D6668 (--0exception@std@@QEAA@QEBD@Z.c)
 */

_QWORD *__fastcall tip_rapidjson::internal::BigInteger::operator<<=(_QWORD *a1, unsigned __int64 a2)
{
  size_t v2; // rax
  char v4; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  size_t v7; // rax
  __int64 v8; // r9
  _QWORD *v9; // r10
  __int64 v10; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1[416];
  if ( (v2 != 1 || *a1) && a2 )
  {
    v4 = a2 & 0x3F;
    v5 = a2 >> 6;
    v6 = v2 + (a2 >> 6);
    if ( v6 > 0x1A0 )
    {
      std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
      throw (std::exception *)pExceptionObject;
    }
    v7 = v2;
    if ( (a2 & 0x3F) != 0 )
    {
      a1[v7] = 0LL;
      v8 = a1[416];
      if ( v8 )
      {
        v9 = &a1[v8 + v5];
        do
        {
          *v9 = (v9[-v5] << v4) | (v9[-1LL - v5] >> (64 - v4));
          --v9;
          --v8;
        }
        while ( v8 );
      }
      a1[v5] = *a1 << v4;
      a1[416] += v5;
      v10 = a1[416];
      if ( a1[v10] )
        a1[416] = v10 + 1;
    }
    else
    {
      memmove_0(&a1[v6 - 1], &a1[v7 - 1], v7 * 8);
      a1[416] += v5;
    }
    memset_0(a1, 0, 8 * v5);
  }
  return a1;
}
