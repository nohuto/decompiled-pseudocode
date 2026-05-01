/*
 * XREFs of ?ToDouble@DiyFp@internal@tip_rapidjson@@QEBANXZ @ 0x18041A60C
 * Callers:
 *     ?StrtodDiyFp@internal@tip_rapidjson@@YA_NPEBD_K1HPEAN@Z @ 0x18041A09C (-StrtodDiyFp@internal@tip_rapidjson@@YA_NPEBD_K1HPEAN@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall tip_rapidjson::internal::DiyFp::ToDouble(tip_rapidjson::internal::DiyFp *this)
{
  int v1; // eax
  __int64 v2; // rdx
  double result; // xmm0_8

  v1 = *((_DWORD *)this + 2);
  if ( v1 != -1074 || (*(_QWORD *)this & 0x10000000000000LL) != 0 )
    v2 = v1 + 1075;
  else
    v2 = 0LL;
  *(_QWORD *)&result = (v2 << 52) | *(_QWORD *)this & 0xFFFFFFFFFFFFFLL;
  return result;
}
