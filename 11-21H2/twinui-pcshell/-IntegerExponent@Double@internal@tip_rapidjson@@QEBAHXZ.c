/*
 * XREFs of ?IntegerExponent@Double@internal@tip_rapidjson@@QEBAHXZ @ 0x18034EA70
 * Callers:
 *     ?CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z @ 0x18034DE00 (-CheckWithinHalfULP@internal@tip_rapidjson@@YAHNAEBVBigInteger@12@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tip_rapidjson::internal::Double::IntegerExponent(tip_rapidjson::internal::Double *this)
{
  if ( (*(_QWORD *)this & 0xFFFFFFFFFFFFFLL) != 0 && (*(_QWORD *)this & 0x7FF0000000000000LL) == 0 )
    return (unsigned int)-1074;
  else
    return (unsigned int)(((*(_QWORD *)this >> 52) & 0x7FF) - 1075);
}
