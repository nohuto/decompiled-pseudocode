/*
 * XREFs of ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180096C24
 * Callers:
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x18001264C (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?GetWidenedBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180096BF0 (-GetWidenedBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 * Callees:
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800977E0 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180097804 (-HasValidValues@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800DBD80 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetWidenedBounds(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v8)(__int64 *, _QWORD, __int64 *); // rbx
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+40h] [rbp-58h] BYREF
  __int128 v16; // [rsp+48h] [rbp-50h] BYREF

  v4 = *a1;
  v15 = 0LL;
  v8 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v4 + 24);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v15);
  v9 = v8(a1, 0LL, &v15);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = 1062;
    goto LABEL_10;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, _QWORD, _DWORD, __int128 *))(*(_QWORD *)v15 + 40LL))(
         v15,
         &v16,
         a4,
         0LL,
         LODWORD(FLOAT_0_25),
         &v16);
  v11 = v9;
  if ( v9 < 0 )
  {
    v14 = 1071;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v14, 0LL);
    goto LABEL_6;
  }
  *(_OWORD *)a2 = v16;
  if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::HasValidValues(a2) )
  {
    if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsWellOrdered(v12) )
    {
      *(_DWORD *)(a2 + 12) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)a2 = 0;
    }
  }
  else
  {
    v11 = -2003304438;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003304438, 0x435u, 0LL);
  }
LABEL_6:
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v15);
  return v11;
}
