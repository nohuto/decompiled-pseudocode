/*
 * XREFs of ?Compare@BigInteger@internal@tip_rapidjson@@QEBAHAEBV123@@Z @ 0x18034DFE4
 * Callers:
 *     ?CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z @ 0x18034DE00 (-CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z.c)
 *     ?Difference@BigInteger@internal@tip_rapidjson@@QEBA_NAEBV123@PEAV123@@Z @ 0x18034E064 (-Difference@BigInteger@internal@tip_rapidjson@@QEBA_NAEBV123@PEAV123@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip_rapidjson::internal::BigInteger::Compare(
        tip_rapidjson::internal::BigInteger *this,
        const struct tip_rapidjson::internal::BigInteger *a2)
{
  unsigned __int64 v2; // rax
  bool v4; // cf
  _QWORD *v6; // rcx
  __int64 v7; // rdx

  v2 = *((_QWORD *)this + 416);
  v4 = v2 < *((_QWORD *)a2 + 416);
  if ( v2 != *((_QWORD *)a2 + 416) )
    return v4 ? -1 : 1;
  if ( v2 )
  {
    v6 = (_QWORD *)((char *)this + 8 * v2);
    v7 = a2 - this;
    while ( 1 )
    {
      --v6;
      --v2;
      v4 = *v6 < *(_QWORD *)((char *)v6 + v7);
      if ( *v6 != *(_QWORD *)((char *)v6 + v7) )
        break;
      if ( !v2 )
        return 0LL;
    }
    return v4 ? -1 : 1;
  }
  return 0LL;
}
