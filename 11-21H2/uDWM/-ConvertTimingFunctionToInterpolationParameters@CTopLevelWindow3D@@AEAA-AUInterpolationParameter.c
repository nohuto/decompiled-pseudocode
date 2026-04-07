/*
 * XREFs of ?ConvertTimingFunctionToInterpolationParameters@CTopLevelWindow3D@@AEAA?AUInterpolationParameters@@PEAUTA_TIMINGFUNCTION@@@Z @ 0x1800270E8
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z @ 0x180024CFC (-StartAnimation@CTopLevelWindow3D@@QEAAJW4WindowAnimationType@1@@Z.c)
 * Callees:
 *     ?IsMinimizeRestoreAnimationsUpdateEnabled@CDesktopManager@@SAHXZ @ 0x18000D10C (-IsMinimizeRestoreAnimationsUpdateEnabled@CDesktopManager@@SAHXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_OCAUTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D570 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_OCAUTest@@@details@wil@@QEAAX_NW4Reportin.c)
 *     ?IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ @ 0x18000D5F8 (-IsMaximizeSnapAnimationRejuvenationEnabled@CDesktopManager@@SAHXZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::ConvertTimingFunctionToInterpolationParameters(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  float v6; // xmm8_4
  float v7; // xmm6_4
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  unsigned int v15; // eax
  int v16; // ecx

  *(_OWORD *)(a2 + 8) = 0LL;
  *(_OWORD *)(a2 + 24) = 0LL;
  *(_DWORD *)a2 = 0;
  if ( *(_DWORD *)a3 == 1 )
  {
    v6 = *(float *)(a3 + 4) - *(float *)(a3 + 8);
    v7 = *(float *)(a3 + 12) - *(float *)(a3 + 16);
    if ( COERCE_FLOAT(LODWORD(v6) & _xmm) >= 0.00000011920929 || COERCE_FLOAT(LODWORD(v7) & _xmm) >= 0.00000011920929 )
    {
      if ( v6 >= -0.00000011920929 || v7 >= -0.00000011920929 )
      {
        if ( v6 <= 0.00000011920929 || v7 <= 0.00000011920929 )
        {
          if ( (unsigned int)CDesktopManager::IsMinimizeRestoreAnimationsUpdateEnabled(a1, a2)
            && ((*(_DWORD *)(a1 + 384) - 3) & 0xFFFFFFFD) == 0
            || (wil::details::FeatureImpl<__WilFeatureTraits_Feature_OCAUTest>::ReportUsage(
                  `wil::Feature<__WilFeatureTraits_Feature_OCAUTest>::GetImpl'::`2'::impl,
                  1u,
                  v8,
                  v9),
                v14 = *(_DWORD *)(a1 + 384),
                v14 == 1)
            || v14 == 6
            || (unsigned int)CDesktopManager::IsMaximizeSnapAnimationRejuvenationEnabled(v12, v11, v13)
            && (v15 = *(_DWORD *)(a1 + 384), v15 <= 0xD)
            && (v16 = 12308, _bittest(&v16, v15)) )
          {
            *(_DWORD *)a2 = 5;
            *(double *)(a2 + 8) = *(float *)(a3 + 4);
            *(double *)(a2 + 24) = *(float *)(a3 + 12);
            *(double *)(a2 + 16) = *(float *)(a3 + 8);
            *(double *)(a2 + 32) = *(float *)(a3 + 16);
          }
          else if ( v6 <= 0.00000011920929 || v7 >= -0.00000011920929 )
          {
            *(_DWORD *)a2 = 0;
          }
          else
          {
            *(_DWORD *)a2 = 3;
          }
        }
        else
        {
          *(_DWORD *)a2 = 2;
        }
      }
      else
      {
        *(_DWORD *)a2 = 1;
      }
    }
  }
  return a2;
}
