/*
 * XREFs of ??$UpdateAnimatedPropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x18013EED0
 * Callers:
 *     ?put_TopInsetScale@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x1800495B0 (-put_TopInsetScale@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Wind.c)
 *     ?put_RightInsetScale@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x180049A80 (-put_RightInsetScale@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Wi.c)
 *     ?put_LeftInsetScale@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x180049F50 (-put_LeftInsetScale@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Win.c)
 *     ?put_BottomInsetScale@Api@?$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJM@Z @ 0x18004A420 (-put_BottomInsetScale@Api@-$CompositionNineGridBrushT@VCompositionNineGridBrush@Composition@UI@W.c)
 * Callees:
 *     <none>
 */

void __fastcall Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  float *v5; // r9
  int v6; // r8d
  char v7; // cl
  int v8; // edx
  bool v9; // zf
  DirectComposition::CDevice *v10; // rcx

  v3 = *a3;
  v5 = *(float **)(a2 + 8);
  if ( *(_BYTE *)(*a3 + 21) )
    v6 = *(_DWORD *)(v3 + 12);
  else
    v6 = *(_DWORD *)(v3 + 8);
  v7 = *(_BYTE *)(v3 + 20);
  v8 = *(_DWORD *)(a1 + 128);
  if ( v7 )
  {
    v9 = v7 == 1;
    v10 = *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL);
    if ( v9 )
      DirectComposition::CDevice::ResourceSetBufferProperty(v10, v8, v6, v5, 4uLL);
    else
      DirectComposition::CDevice::ResourceSetIntegerProperty(v10, v8, v6, *(int *)v5);
  }
  else
  {
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
      v8,
      v6,
      *v5);
  }
}
