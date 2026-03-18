/*
 * XREFs of ?AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUPTPInput@@PEBUCContactState@@1@Z @ 0x1C01FEF1C
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z @ 0x1C02013F4 (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAHPEBUPTPInput@@@Z.c)
 * Callees:
 *     ?ndotprod@@YA_NHHHHPEAN@Z @ 0x1C0204E74 (-ndotprod@@YA_NHHHHPEAN@Z.c)
 */

__int64 __fastcall CPTPEngine::AreTheseTwoContactsAZoom(
        CPTPEngine *this,
        const struct PTPInput *a2,
        const struct CContactState *a3,
        const struct CContactState *a4)
{
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // r8d
  int v9; // edx
  double v11; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 12) != 2 )
    return 0LL;
  if ( *((_DWORD *)this + 911) != 1 )
    return 0LL;
  v5 = 0;
  v6 = *((_QWORD *)a3 + 1) - *((_DWORD *)a3 + 12);
  v7 = HIDWORD(*((_QWORD *)a3 + 1)) - *((_DWORD *)a3 + 13);
  v8 = *((_QWORD *)a4 + 1) - *((_DWORD *)a4 + 12);
  v9 = HIDWORD(*((_QWORD *)a4 + 1)) - *((_DWORD *)a4 + 13);
  if ( !v6 && !v7 )
    return 0LL;
  if ( !v8 && !v9 )
    return 0LL;
  v11 = 0.0;
  if ( ndotprod(v6, v7, v8, v9, &v11) && *((double *)this + 476) >= v11 )
    return 1;
  return v5;
}
