/*
 * XREFs of ?WasThereSufficientYawMovement@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800D17A4
 * Callers:
 *     ?OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x1800D162C (-OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall MPCHeadMovementDetector::WasThereSufficientYawMovement(MPCHeadMovementDetector *this)
{
  char v2; // r8
  int v3; // eax
  bool v4; // cf
  __int64 v5; // rcx
  float v6; // xmm1_4
  unsigned __int64 v7; // r9
  __int64 v8; // rcx

  if ( *((_QWORD *)this + 5) < *((_QWORD *)this + 14) )
    return 0;
  v2 = 1;
  v3 = ((unsigned __int8)*((_DWORD *)this + 40) + 1) & 3;
  v4 = *((_DWORD *)this + 27) < 0xAu;
  v5 = ((unsigned __int8)*((_DWORD *)this + 40) + 1) & 3;
  *((_DWORD *)this + 40) = v3;
  v6 = v4 ? 0.0 : *((float *)this + 26) / (float)*((int *)this + 27);
  *((float *)this + v5 + 36) = v6;
  v7 = *((_QWORD *)this + 5);
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_QWORD *)this + 14) = v7 + 1000;
  if ( v7 < *((_QWORD *)this + 15) )
    return 0;
  v8 = *((unsigned int *)this + 40);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                      (float)((float)(*((float *)this + (((unsigned __int8)v8 - 1) & 3) + 36)
                                    + *((float *)this + v8 + 36))
                            + *((float *)this + (((unsigned __int8)v8 - 2) & 3) + 36))
                    + *((float *)this + (((unsigned __int8)v8 + 1) & 3) + 36)) & _xmm) <= *((float *)this + 34) )
    return 0;
  *((_QWORD *)this + 15) = v7 + 5000;
  return v2;
}
