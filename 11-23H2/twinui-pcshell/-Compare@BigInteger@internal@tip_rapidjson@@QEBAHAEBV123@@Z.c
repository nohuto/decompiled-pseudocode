/*
 * XREFs of ?Compare@BigInteger@internal@tip_rapidjson@@QEBAHAEBV123@@Z @ 0x1804182CC
 * Callers:
 *     ?CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z @ 0x1804180E8 (-CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z.c)
 *     ?Difference@BigInteger@internal@tip_rapidjson@@QEBA_NAEBV123@PEAV123@@Z @ 0x180418310 (-Difference@BigInteger@internal@tip_rapidjson@@QEBA_NAEBV123@PEAV123@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip_rapidjson::internal::BigInteger::Compare(
        tip_rapidjson::internal::BigInteger *this,
        const struct tip_rapidjson::internal::BigInteger *a2)
{
  unsigned __int64 v2; // rax
  bool v3; // cf
  _QWORD *v5; // r8
  __int64 v6; // rdx

  v2 = *((_QWORD *)this + 416);
  v3 = v2 < *((_QWORD *)a2 + 416);
  if ( v2 != *((_QWORD *)a2 + 416) )
    return v3 ? -1 : 1;
  if ( v2 )
  {
    v5 = (_QWORD *)((char *)this + 8 * v2);
    v6 = a2 - this;
    while ( 1 )
    {
      --v5;
      --v2;
      v3 = *v5 < *(_QWORD *)((char *)v5 + v6);
      if ( *v5 != *(_QWORD *)((char *)v5 + v6) )
        break;
      if ( !v2 )
        return 0LL;
    }
    return v3 ? -1 : 1;
  }
  return 0LL;
}
