/*
 * XREFs of ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x1801F3B6C
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000DCF0 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 * Callees:
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800BEE50 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18011133C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CTreeEffectLayer::PopLayerTransformFromExplicitSurfaceInput(CTreeEffectLayer *this)
{
  CLayerVisual *v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  const char *v5; // r9
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (CLayerVisual *)*((_QWORD *)this + 32);
  if ( v2 )
  {
    if ( CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(v2) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 96LL) + 80LL) + 48LL);
      v4 = 0;
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
      if ( v6 )
      {
        v7 = 0LL;
        do
        {
          v8 = *((_QWORD *)this + 31);
          if ( v4 >= *(_DWORD *)(v8 + 144) )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x213,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectbrush.cpp",
              v5);
          v9 = *(_QWORD *)(v7 + *(_QWORD *)(v8 + 120));
          if ( v9 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 56LL))(v9, 181LL) )
            {
              *(_OWORD *)(v9 + 128) = *(_OWORD *)&_xmm;
              *(_QWORD *)(v9 + 144) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
            }
          }
          ++v4;
          v7 += 8LL;
        }
        while ( v4 < v6 );
      }
    }
  }
}
