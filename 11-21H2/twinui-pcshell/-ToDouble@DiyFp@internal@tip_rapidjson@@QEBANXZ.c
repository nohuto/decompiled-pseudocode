/*
 * XREFs of ?ToDouble@DiyFp@internal@tip_rapidjson@@QEBANXZ @ 0x18035086C
 * Callers:
 *     ?StrtodDiyFp@internal@tip_rapidjson@@YA_NPEBD_K1HPEAN@Z @ 0x1803502F0 (-StrtodDiyFp@internal@tip_rapidjson@@YA_NPEBD_K1HPEAN@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall tip_rapidjson::internal::DiyFp::ToDouble(tip_rapidjson::internal::DiyFp *this)
{
  int v1; // edx
  __int64 v2; // rax
  __int64 v3; // rdx
  double result; // xmm0_8

  v1 = *((_DWORD *)this + 2);
  if ( v1 != -1074 || (v2 = *(_QWORD *)this, (*(_QWORD *)this & 0x10000000000000LL) != 0) )
  {
    v3 = v1 + 1075;
    v2 = *(_QWORD *)this;
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)&result = (v3 << 52) | v2 & 0xFFFFFFFFFFFFFLL;
  return result;
}
