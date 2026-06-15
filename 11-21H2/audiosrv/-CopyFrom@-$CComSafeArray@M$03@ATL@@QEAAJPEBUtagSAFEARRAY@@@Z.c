/*
 * XREFs of ?CopyFrom@?$CComSafeArray@M$03@ATL@@QEAAJPEBUtagSAFEARRAY@@@Z @ 0x1800D6CDC
 * Callers:
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003F0A8 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Destroy@?$CComSafeArray@M$03@ATL@@QEAAJXZ @ 0x1800D6DB0 (-Destroy@-$CComSafeArray@M$03@ATL@@QEAAJXZ.c)
 */

int __fastcall ATL::CComSafeArray<float,4>::CopyFrom(SAFEARRAY **ppsaOut, SAFEARRAY *psa)
{
  HRESULT Vartype; // eax
  VARTYPE v5; // r8
  int v6; // eax
  int result; // eax
  VARTYPE pvt; // [rsp+38h] [rbp+10h] BYREF

  if ( !psa )
    goto LABEL_15;
  Vartype = SafeArrayGetVartype(psa, &pvt);
  if ( Vartype < 0 )
    ATL::AtlThrowImpl(Vartype);
  v5 = pvt;
  if ( pvt == 13 && (psa->fFeatures & 0x440) == 0x440 )
  {
    v5 = 9;
    pvt = 9;
  }
  if ( v5 != 4 )
LABEL_15:
    ATL::AtlThrowImpl(-2147024809);
  v6 = ATL::CComSafeArray<float,4>::Destroy(ppsaOut);
  if ( v6 < 0 )
    ATL::AtlThrowImpl(v6);
  result = SafeArrayCopy(psa, ppsaOut);
  if ( result < 0 )
    ATL::AtlThrowImpl(result);
  if ( *ppsaOut )
    return SafeArrayLock(*ppsaOut);
  return result;
}
