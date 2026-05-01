/*
 * XREFs of ??_3BigInteger@internal@tip_rapidjson@@QEAAAEAV012@_K@Z @ 0x1804177D4
 * Callers:
 *     ?AppendDecimal64@BigInteger@internal@tip_rapidjson@@AEAAXPEBD0@Z @ 0x180417F30 (-AppendDecimal64@BigInteger@internal@tip_rapidjson@@AEAAXPEBD0@Z.c)
 *     ?CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z @ 0x1804180E8 (-CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 */

_QWORD *__fastcall tip_rapidjson::internal::BigInteger::operator<<=(_QWORD *a1, unsigned __int64 a2)
{
  size_t v2; // rax
  char v4; // r9
  size_t v5; // rdi
  unsigned __int64 v6; // rcx
  size_t v7; // rax
  size_t v8; // r8
  __int64 v9; // r10
  _QWORD *v10; // r11
  size_t v11; // rax
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
      v8 = v5;
      v9 = a1[416];
      if ( v9 )
      {
        v10 = &a1[v9 + v5];
        do
        {
          *v10 = (v10[-v5] << v4) | (*(_QWORD *)((char *)v10 - 8LL - 8 * v5) >> (64 - v4));
          --v10;
          --v9;
        }
        while ( v9 );
      }
      a1[v8] = *a1 << v4;
      v11 = v5 + a1[416];
      a1[416] = v11;
      if ( a1[v11] )
        a1[416] = v11 + 1;
    }
    else
    {
      memmove_0(&a1[v6 - 1], &a1[v7 - 1], v7 * 8);
      a1[416] += v5;
      v8 = v5;
    }
    memset_0(a1, 0, v8 * 8);
  }
  return a1;
}
