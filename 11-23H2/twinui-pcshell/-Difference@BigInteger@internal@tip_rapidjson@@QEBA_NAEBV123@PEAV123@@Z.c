/*
 * XREFs of ?Difference@BigInteger@internal@tip_rapidjson@@QEBA_NAEBV123@PEAV123@@Z @ 0x180418310
 * Callers:
 *     ?CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z @ 0x1804180E8 (-CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0exception@std@@QEAA@QEBD@Z @ 0x18038CD44 (--0exception@std@@QEAA@QEBD@Z.c)
 *     ?Compare@BigInteger@internal@tip_rapidjson@@QEBAHAEBV123@@Z @ 0x1804182CC (-Compare@BigInteger@internal@tip_rapidjson@@QEBAHAEBV123@@Z.c)
 */

bool __fastcall tip_rapidjson::internal::BigInteger::Difference(
        tip_rapidjson::internal::BigInteger *this,
        const struct tip_rapidjson::internal::BigInteger *a2,
        struct tip_rapidjson::internal::BigInteger *a3)
{
  int v4; // eax
  _QWORD *v5; // r9
  _QWORD *v6; // r10
  _QWORD *v7; // rcx
  unsigned int v8; // r11d
  _BOOL8 v9; // r10
  unsigned __int64 v10; // rax
  unsigned __int64 *v11; // rdi
  signed __int64 v12; // r9
  unsigned __int64 *v13; // rsi
  char *v14; // r8
  unsigned __int64 v15; // rdx
  bool v16; // cf
  bool v17; // zf
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = tip_rapidjson::internal::BigInteger::Compare(this, a2);
  if ( !v4 )
  {
    std::exception::exception((std::exception *)pExceptionObject, "rapidjson");
    throw (std::exception *)pExceptionObject;
  }
  v7 = v6;
  v8 = (unsigned int)v4 >> 31;
  if ( v4 >= 0 )
  {
    v7 = v5;
    v5 = v6;
  }
  v9 = 0LL;
  v10 = 0LL;
  v11 = v5 + 416;
  if ( v5[416] )
  {
    v12 = (char *)v5 - (char *)v7;
    v13 = v7 + 416;
    v14 = (char *)(a3 - (struct tip_rapidjson::internal::BigInteger *)v7);
    do
    {
      v15 = *(_QWORD *)((char *)v7 + v12) - v9;
      if ( v10 < *v13 )
        v15 -= *v7;
      v16 = v15 < *(_QWORD *)((char *)v7 + v12);
      v17 = v15 == *(_QWORD *)((char *)v7 + v12);
      *(_QWORD *)((char *)v7 + (_QWORD)v14) = v15;
      v9 = !v16 && !v17;
      ++v10;
      if ( v15 )
        *((_QWORD *)a3 + 416) = v10;
      ++v7;
    }
    while ( v10 < *v11 );
  }
  return v8;
}
