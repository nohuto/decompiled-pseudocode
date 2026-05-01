/*
 * XREFs of ?CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z @ 0x18034DE00
 * Callers:
 *     ?StrtodBigInteger@internal@tip_rapidjson@@YANNPEBD_K1H@Z @ 0x180350250 (-StrtodBigInteger@internal@tip_rapidjson@@YANNPEBD_K1H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1801EAC80 (_alloca_probe.c)
 *     memcpy_0 @ 0x1801EACEF (memcpy_0.c)
 *     ??_3BigInteger@internal@tip_rapidjson@@QEAAAEAV012@_K@Z @ 0x18034D61C (--_3BigInteger@internal@tip_rapidjson@@QEAAAEAV012@_K@Z.c)
 *     ?Compare@BigInteger@internal@tip_rapidjson@@QEBAHAEBV123@@Z @ 0x18034DFE4 (-Compare@BigInteger@internal@tip_rapidjson@@QEBAHAEBV123@@Z.c)
 *     ?Difference@BigInteger@internal@tip_rapidjson@@QEBA_NAEBV123@PEAV123@@Z @ 0x18034E064 (-Difference@BigInteger@internal@tip_rapidjson@@QEBA_NAEBV123@PEAV123@@Z.c)
 *     ?IntegerExponent@Double@internal@tip_rapidjson@@QEBAHXZ @ 0x18034EA70 (-IntegerExponent@Double@internal@tip_rapidjson@@QEBAHXZ.c)
 *     ?MultiplyPow5@BigInteger@internal@tip_rapidjson@@QEAAAEAV123@I@Z @ 0x18034ED58 (-MultiplyPow5@BigInteger@internal@tip_rapidjson@@QEAAAEAV123@I@Z.c)
 */

__int64 __fastcall tip_rapidjson::internal::CheckWithinHalfULP(
        tip_rapidjson::internal *this,
        double a2,
        const struct tip_rapidjson::internal::BigInteger *a3)
{
  __int64 v3; // xmm0_8
  __int64 v4; // r14
  int v5; // eax
  int v6; // r8d
  _QWORD *v7; // r9
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  int v10; // edx
  signed int v11; // ebx
  unsigned int v12; // ecx
  signed int v13; // r13d
  __int64 v14; // r8
  signed int v15; // esi
  signed int v16; // edi
  signed int v17; // eax
  struct tip_rapidjson::internal::BigInteger *v18; // rax
  struct tip_rapidjson::internal::BigInteger *v19; // rax
  struct tip_rapidjson::internal::BigInteger *v20; // rax
  __int64 v22; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v23[418]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v24[3328]; // [rsp+D40h] [rbp+C40h] BYREF
  __int64 v25; // [rsp+1A40h] [rbp+1940h]
  _QWORD v26[418]; // [rsp+1A50h] [rbp+1950h] BYREF
  _QWORD v27[418]; // [rsp+2760h] [rbp+2660h] BYREF

  v22 = v3;
  if ( (v3 & 0x7FF0000000000000LL) != 0 || (v4 = v3 & 0xFFFFFFFFFFFFFLL, (v3 & 0xFFFFFFFFFFFFFLL) == 0) )
    v4 = v3 & 0xFFFFFFFFFFFFFLL | 0x10000000000000LL;
  v5 = tip_rapidjson::internal::Double::IntegerExponent((tip_rapidjson::internal::Double *)&v22);
  v8 = v6;
  v9 = 0;
  if ( v6 < 0 )
    v8 = 0;
  v10 = v5 - 1;
  v11 = v8;
  if ( v6 < 0 )
    v9 = -v6;
  v12 = v9;
  if ( v5 < 0 )
  {
    v11 = v8 - v5;
    v13 = v9;
    v12 = v9 - v5;
  }
  else
  {
    v13 = v9 + v5;
  }
  v14 = v7[416];
  v15 = v12 + v10;
  v25 = v14;
  if ( v10 < 0 )
    v15 = v12;
  v16 = v15;
  if ( v10 < 0 )
  {
    v13 -= v10;
    v11 -= v10;
  }
  v17 = v11;
  if ( v11 > v13 )
    v17 = v13;
  if ( v17 <= v15 )
    v16 = v17;
  memcpy_0(v24, v7, 8 * v14);
  v18 = tip_rapidjson::internal::BigInteger::MultiplyPow5((tip_rapidjson::internal::BigInteger *)v24, v8);
  tip_rapidjson::internal::BigInteger::operator<<=(v18, (unsigned int)(v11 - v16));
  v23[0] = v4;
  v23[416] = 1LL;
  v19 = tip_rapidjson::internal::BigInteger::MultiplyPow5((tip_rapidjson::internal::BigInteger *)v23, v9);
  tip_rapidjson::internal::BigInteger::operator<<=(v19, (unsigned int)(v13 - v16));
  v26[416] = 1LL;
  v26[0] = 1LL;
  v20 = tip_rapidjson::internal::BigInteger::MultiplyPow5((tip_rapidjson::internal::BigInteger *)v26, v9);
  tip_rapidjson::internal::BigInteger::operator<<=(v20, (unsigned int)(v15 - v16));
  v27[0] = 0LL;
  v27[416] = 1LL;
  tip_rapidjson::internal::BigInteger::Difference(
    (tip_rapidjson::internal::BigInteger *)v24,
    (const struct tip_rapidjson::internal::BigInteger *)v23,
    (struct tip_rapidjson::internal::BigInteger *)v27);
  return tip_rapidjson::internal::BigInteger::Compare(
           (tip_rapidjson::internal::BigInteger *)v27,
           (const struct tip_rapidjson::internal::BigInteger *)v26);
}
