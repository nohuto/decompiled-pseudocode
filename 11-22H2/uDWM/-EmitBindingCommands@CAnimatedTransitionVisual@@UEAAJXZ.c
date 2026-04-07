/*
 * XREFs of ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800A6BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x1800513E8 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4Enum@DwmResourceProperty@@@Z @ 0x1800A825C (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@PEAVCResourceProxy@@W4.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A84D4 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     McTemplateU0ddqqqqqqp_EtwEventWriteTransfer @ 0x1800A926C (McTemplateU0ddqqqqqqp_EtwEventWriteTransfer.c)
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x1800BFF48 (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x1800D68D8 (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 *     ?Update@CTransformGroupProxy@@QEAAJPEAPEAVCBaseTransformProxy@@I@Z @ 0x1800E9D88 (-Update@CTransformGroupProxy@@QEAAJPEAPEAVCBaseTransformProxy@@I@Z.c)
 *     ?Update@CTranslateTransformProxy@@QEAAJNN@Z @ 0x1800ECB34 (-Update@CTranslateTransformProxy@@QEAAJNN@Z.c)
 *     ?SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z @ 0x180106038 (-SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::EmitBindingCommands(CEffectGroupProxy **this)
{
  int v2; // eax
  unsigned int v3; // esi
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // r8d
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  struct CBaseTransformProxy *v23[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v24; // [rsp+70h] [rbp-28h]

  v2 = CAnimatedTransitionVisual::_EnsureDCompResources((CAnimatedTransitionVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x73Du);
    return v3;
  }
  v4 = 0;
  v24 = 0LL;
  *(_OWORD *)v23 = 0LL;
  if ( this[77] || this[78] )
  {
    v5 = CTranslateTransformProxy::Update(this[86], 0.0, 0.0);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x74Bu);
      return v3;
    }
    v4 = 1;
    v23[0] = this[86];
  }
  if ( this[79] || this[80] )
  {
    v6 = CScaleTransformProxy::Update(this[85], 1.0, 1.0, 0.0, 0.0);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x753u);
      return v3;
    }
    v7 = v4++;
    v23[v7] = this[85];
  }
  if ( this[81] || this[82] )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this[87] + 2) + 16LL) + 904LL))(
           *(_QWORD *)(*((_QWORD *)this[87] + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this[87] + 2) + 24LL));
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x75Bu);
      return v3;
    }
    v9 = v4++;
    v23[v9] = this[87];
  }
  v10 = CTransformGroupProxy::Update(this[88], v23, v4);
  v3 = v10;
  if ( v10 >= 0 )
  {
    v12 = CEffectGroupProxy::Update(this[84], *((float *)this + 232), v11, 0LL);
    v3 = v12;
    if ( v12 >= 0 )
    {
      v13 = CVisualProxy::SetEffect(*((CVisualProxy **)this[91] + 2), this[84]);
      v3 = v13;
      if ( v13 >= 0 )
      {
        v14 = CVisualProxy::SetTransform(*((CVisualProxy **)this[91] + 2), this[88]);
        v3 = v14;
        if ( v14 >= 0 )
        {
          v15 = CAnimatedTransitionVisual::_BindIfPresent(this, 0LL, this[86], 5LL);
          v3 = v15;
          if ( v15 >= 0 )
          {
            v16 = CAnimatedTransitionVisual::_BindIfPresent(this, 1LL, this[86], 6LL);
            v3 = v16;
            if ( v16 >= 0 )
            {
              v17 = CAnimatedTransitionVisual::_BindIfPresent(this, 2LL, this[85], 3LL);
              v3 = v17;
              if ( v17 >= 0 )
              {
                v18 = CAnimatedTransitionVisual::_BindIfPresent(this, 3LL, this[85], 4LL);
                v3 = v18;
                if ( v18 >= 0 )
                {
                  v19 = CAnimatedTransitionVisual::_BindIfPresent(this, 4LL, this[87], 1LL);
                  v3 = v19;
                  if ( v19 >= 0 )
                  {
                    v20 = CAnimatedTransitionVisual::_BindIfPresent(this, 5LL, this[87], 2LL);
                    v3 = v20;
                    if ( v20 >= 0 )
                    {
                      v21 = CAnimatedTransitionVisual::_BindIfPresent(this, 6LL, this[84], 0LL);
                      v3 = v21;
                      if ( v21 >= 0 )
                      {
                        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                          McTemplateU0ddqqqqqqp_EtwEventWriteTransfer(
                            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
                            *((_QWORD *)this[87] + 2),
                            *((_DWORD *)this + 184),
                            *((_DWORD *)this + 185),
                            *(_DWORD *)(*((_QWORD *)this[3] + 2) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this[84] + 2) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this[88] + 2) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this[86] + 2) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this[85] + 2) + 24LL),
                            *(_DWORD *)(*((_QWORD *)this[87] + 2) + 24LL),
                            *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 24LL));
                      }
                      else
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x76Eu);
                      }
                    }
                    else
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x76Du);
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x76Cu);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x76Bu);
                }
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x76Au);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x769u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x768u);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x766u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x764u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x762u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x760u);
  }
  return v3;
}
