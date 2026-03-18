/*
 * XREFs of ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x180191B34
 * Callers:
 *     ?GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z @ 0x1802A00F4 (-GetLength@CPathLengthOperation@@QEAAMPEBVCPathData@@@Z.c)
 *     ?InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z @ 0x1802A06CC (-InterpolateBezier@CTrimPathOperation@@AEAA_NMM_N@Z.c)
 * Callees:
 *     ?TryDoubleTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAA_NXZ @ 0x1800B67D4 (-TryDoubleTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAA_NXZ.c)
 *     ?Step@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x1800B684C (-Step@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 *     ?HalveTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x1800B723C (-HalveTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 */

char __fastcall CBezierFlattener<float,CMilPoint2F>::Flatten(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        char a7)
{
  int v9; // r11d
  __int64 v10; // r10
  __int64 v11; // r10
  char result; // al

  v9 = 1;
  v10 = 0LL;
  while ( *(_DWORD *)(a1 + 80) > v9 )
  {
    if ( (unsigned int)v10 >= a5 )
      goto LABEL_16;
    CBezierFlattener<float,CMilPoint2F>::Step(a1);
    *(_QWORD *)(a2 + 8 * v11) = *(_QWORD *)(a1 + 48);
    if ( a4 )
      *(_DWORD *)(a4 + 4 * v11) = *(_DWORD *)(a1 + 84);
    if ( fmaxf(COERCE_FLOAT(*(_DWORD *)(a1 + 64) & _xmm), COERCE_FLOAT(*(_DWORD *)(a1 + 68) & _xmm)) <= *(float *)(a1 + 32)
      || *(float *)(a1 + 88) <= 0.001 )
    {
      while ( CBezierFlattener<float,CMilPoint2F>::TryDoubleTheStep(a1) )
        ;
    }
    else
    {
      CBezierFlattener<float,CMilPoint2F>::HalveTheStep(a1);
    }
  }
  if ( (unsigned int)v10 < a5 )
  {
    if ( a7 )
    {
      *(_QWORD *)(a2 + 8 * v10) = *(_QWORD *)(a1 + 24);
      if ( a4 )
        *(_DWORD *)(a4 + 4 * v10) = 1065353216;
      LODWORD(v10) = v9 + v10;
    }
    LOBYTE(v9) = 0;
  }
LABEL_16:
  result = v9;
  *a6 = v10;
  return result;
}
