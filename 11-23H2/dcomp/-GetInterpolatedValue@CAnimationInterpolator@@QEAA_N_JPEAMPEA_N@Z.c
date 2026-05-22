/*
 * XREFs of ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1801B282C
 * Callers:
 *     ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x1801B24F0 (-EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1801B2760 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z @ 0x1801B25D4 (-FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z.c)
 *     ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x1801B296C (-GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?InterpolateCubic@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1801B29CC (-InterpolateCubic@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x1801B2A84 (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x1801B2B2C (-TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z.c)
 */

bool __fastcall CAnimationInterpolator::GetInterpolatedValue(
        CAnimationInterpolator *this,
        __int64 a2,
        float *a3,
        bool *a4)
{
  const struct DwmAnimationPrimitive *PrimitiveAtIndex; // rbp
  int v8; // eax
  bool CurrentPrimitive; // di
  const struct DwmAnimationPrimitive *v10; // rbx
  __int64 v11; // rax
  float v13; // xmm6_4
  float v14; // xmm0_4

  PrimitiveAtIndex = CAnimationInterpolator::GetPrimitiveAtIndex(this, 0);
  v8 = (***(__int64 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this);
  CAnimationInterpolator::GetPrimitiveAtIndex(this, v8 - 1);
  if ( !PrimitiveAtIndex )
    return 0;
  CurrentPrimitive = CAnimationInterpolator::FindCurrentPrimitive(this, a2);
  if ( CurrentPrimitive )
  {
    v10 = (const struct DwmAnimationPrimitive *)((char *)PrimitiveAtIndex + 32 * *((unsigned int *)this + 2));
    while ( ((*(_DWORD *)v10 - 3) & 0xFFFFFFFC) == 0 && *(_DWORD *)v10 != 4 )
    {
      if ( PrimitiveAtIndex == v10 )
        return 0;
      v11 = CAnimationInterpolator::TransformTime(this, v10, a2);
      a2 = v11;
      if ( *((_QWORD *)v10 + 1) < v11 )
        return 0;
      while ( 1 )
      {
        v10 = (const struct DwmAnimationPrimitive *)((char *)v10 - 32);
        if ( *((_QWORD *)v10 + 1) <= v11 )
          break;
        if ( v10 == PrimitiveAtIndex )
          return 0;
      }
    }
    switch ( *(_DWORD *)v10 )
    {
      case 1:
        v14 = CAnimationInterpolator::InterpolateCubic(this, v10, a2);
        break;
      case 2:
        v14 = CAnimationInterpolator::InterpolateSinusoidal(this, v10, a2);
        break;
      case 4:
        v13 = *((float *)v10 + 4);
        goto LABEL_20;
      default:
        return 0;
    }
    v13 = v14;
LABEL_20:
    if ( _finite(v13) )
    {
      *a3 = v13;
      return CurrentPrimitive;
    }
    return 0;
  }
  return CurrentPrimitive;
}
