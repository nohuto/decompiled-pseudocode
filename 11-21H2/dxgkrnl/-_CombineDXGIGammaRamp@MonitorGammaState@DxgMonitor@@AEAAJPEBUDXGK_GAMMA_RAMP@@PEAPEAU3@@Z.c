/*
 * XREFs of ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1C01B4978
 * Callers:
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x1C01B4B34 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1C01C4724 (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0012C4C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x1C0012D9C (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0012DD8 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ColorSpaceTransformConvert @ 0x1C0012F1C (ColorSpaceTransformConvert.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ColorSpaceTransformCombine @ 0x1C0073F04 (ColorSpaceTransformCombine.c)
 *     ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C01B4AD4 (-_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TY.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::_CombineDXGIGammaRamp(
        DxgMonitor::MonitorGammaState *this,
        const struct DXGK_GAMMA_RAMP *a2,
        struct DXGK_GAMMA_RAMP **a3)
{
  __int64 (__fastcall ***v6)(_QWORD, ReferenceCounted **); // rcx
  int v7; // eax
  __int64 v8; // r9
  int MostCapableColorSpaceTransform; // ebx
  __int64 v10; // rax
  DXGK_GAMMA_RAMP *v11; // rsi
  ReferenceCounted *v12; // rcx
  bool v13; // al
  struct _D3DKMDT_GAMMA_RAMP *v14; // r14
  _D3DDDI_GAMMARAMP_TYPE v16; // [rsp+50h] [rbp+30h] BYREF
  ReferenceCounted *v17; // [rsp+60h] [rbp+40h] BYREF
  DXGK_GAMMA_RAMP *v18; // [rsp+68h] [rbp+48h] BYREF

  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *a3 = 0LL;
  v6 = (__int64 (__fastcall ***)(_QWORD, ReferenceCounted **))*((_QWORD *)this + 1);
  v17 = 0LL;
  v18 = 0LL;
  v7 = (**v6)(v6, &v17);
  MostCapableColorSpaceTransform = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(3LL, v7);
  }
  else
  {
    v10 = operator new[](0x30uLL, 0x4D677844u, 256LL, v8);
    if ( v10 )
    {
      *(_WORD *)(v10 + 40) = 0;
      *(_QWORD *)(v10 + 24) = 0LL;
      *(_QWORD *)(v10 + 32) = 0LL;
      *(_QWORD *)v10 = &ReferenceCounted::`vftable';
      *(_QWORD *)v10 = &DXGK_GAMMA_RAMP::`vftable';
      *(_DWORD *)(v10 + 8) = 1;
      *(_DWORD *)(v10 + 16) = 1;
    }
    auto_rc<DXGK_GAMMA_RAMP>::reset(&v18, (ReferenceCounted *)v10);
    v11 = v18;
    if ( v18 )
    {
      v16 = D3DDDI_GAMMARAMP_UNINITIALIZED;
      MostCapableColorSpaceTransform = DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(this, &v16);
      if ( MostCapableColorSpaceTransform < 0 )
      {
        WdLogSingleEntry0(2LL);
      }
      else
      {
        v12 = v17;
        v13 = v16 >= D3DDDI_GAMMARAMP_MATRIX_3x4 && v17 && *((_DWORD *)v17 + 4) == 3;
        if ( a2 )
        {
          v14 = (struct _D3DKMDT_GAMMA_RAMP *)((char *)a2 + 16);
          if ( v17 )
          {
            if ( (unsigned int)(v14->Type - 4) <= 1 )
            {
              MostCapableColorSpaceTransform = DXGK_GAMMA_RAMP::Initialize(v11, v14);
              if ( MostCapableColorSpaceTransform >= 0 )
              {
                MostCapableColorSpaceTransform = ColorSpaceTransformCombine(
                                                   (const void **)v14,
                                                   (int *)v17 + 4,
                                                   (__int64)v11 + 16);
                if ( MostCapableColorSpaceTransform >= 0 )
                  goto LABEL_13;
              }
            }
            else
            {
              MostCapableColorSpaceTransform = DXGK_GAMMA_RAMP::Initialize(
                                                 v11,
                                                 (const struct _D3DKMDT_GAMMA_RAMP *)((char *)v17 + 16));
              if ( MostCapableColorSpaceTransform >= 0 )
                goto LABEL_13;
            }
          }
          else
          {
            MostCapableColorSpaceTransform = DXGK_GAMMA_RAMP::Initialize(v11, v14);
            if ( MostCapableColorSpaceTransform >= 0 )
            {
LABEL_13:
              v12 = v17;
LABEL_14:
              v18 = 0LL;
              *a3 = v11;
              goto LABEL_15;
            }
          }
        }
        else
        {
          if ( !v17 )
            goto LABEL_14;
          if ( v13 )
          {
            MostCapableColorSpaceTransform = DXGK_GAMMA_RAMP::Initialize(v11, v16, 0LL);
            if ( MostCapableColorSpaceTransform >= 0 )
            {
              MostCapableColorSpaceTransform = ColorSpaceTransformConvert(
                                                 (const struct _D3DKMDT_GAMMA_RAMP *)(((unsigned __int64)v17 + 16) & -(__int64)(v17 != 0LL)),
                                                 (struct _D3DKMDT_GAMMA_RAMP *)((char *)v11 + 16));
              if ( MostCapableColorSpaceTransform >= 0 )
                goto LABEL_13;
            }
          }
          else
          {
            MostCapableColorSpaceTransform = DXGK_GAMMA_RAMP::Initialize(
                                               v11,
                                               (const struct _D3DKMDT_GAMMA_RAMP *)((char *)v17 + 16));
            if ( MostCapableColorSpaceTransform >= 0 )
              goto LABEL_13;
          }
        }
        WdLogSingleEntry0(3LL);
      }
    }
    else
    {
      WdLogSingleEntry0(6LL);
      MostCapableColorSpaceTransform = -1073741801;
    }
  }
  v12 = v17;
LABEL_15:
  if ( v12 )
    ReferenceCounted::Release(v12);
  v17 = 0LL;
  auto_rc<DXGK_GAMMA_RAMP>::reset(&v18, 0LL);
  return (unsigned int)MostCapableColorSpaceTransform;
}
