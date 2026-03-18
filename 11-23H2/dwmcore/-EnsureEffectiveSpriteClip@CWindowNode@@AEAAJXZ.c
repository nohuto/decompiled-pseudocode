/*
 * XREFs of ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800540C0
 * Callers:
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F040 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180051460 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180057090 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 * Callees:
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x18002F3BC (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18002FA00 (--1CRegionShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180039EFC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18005B280 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z @ 0x18008E274 (--$SAFE_DELETE@VCShape@@@@YAXAEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C3A4C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D089C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@QEAA?AVCShapePtr@@_N@Z @ 0x1800E4C84 (-GetAccumShape@CGdiSpriteBitmap@@QEAA-AVCShapePtr@@_N@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800EA3B0 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowNode::EnsureEffectiveSpriteClip(CWindowNode *this)
{
  struct CShape **v1; // r14
  int v3; // edi
  CShape *v5; // rcx
  int v6; // esi
  int v7; // eax
  struct CShape *v8; // rax
  __int64 v9; // rax
  __int64 *AccumShape; // rax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  int WindowClipShape; // eax
  unsigned int v14; // ecx
  struct CShape *v15; // [rsp+38h] [rbp-69h] BYREF
  CShape *v16; // [rsp+40h] [rbp-61h] BYREF
  char v17; // [rsp+48h] [rbp-59h]
  _BYTE v18[16]; // [rsp+50h] [rbp-51h] BYREF
  struct CShape *v19; // [rsp+60h] [rbp-41h] BYREF
  int v20; // [rsp+68h] [rbp-39h]
  int v21; // [rsp+6Ch] [rbp-35h]
  _QWORD v22[3]; // [rsp+78h] [rbp-29h] BYREF
  int v23; // [rsp+90h] [rbp-11h] BYREF
  __int64 v24; // [rsp+D0h] [rbp+2Fh]

  v1 = (struct CShape **)((char *)this + 880);
  v3 = 0;
  v15 = 0LL;
  if ( !*((_BYTE *)this + 888) )
    SAFE_DELETE<CShape>((char *)this + 880);
  if ( !*v1 )
  {
    v16 = 0LL;
    v22[0] = &CRegionShape::`vftable';
    v22[2] = &v23;
    v17 = 0;
    v22[1] = 0LL;
    v23 = 0;
    v24 = 0LL;
    if ( *((_QWORD *)this + 99) )
    {
      WindowClipShape = CWindowNode::GetWindowClipShape(this, (struct CShapePtr *)&v16);
      v3 = WindowClipShape;
      if ( WindowClipShape < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, WindowClipShape, 0x70Bu, 0LL);
        goto LABEL_15;
      }
      v5 = v16;
    }
    else
    {
      v20 = *((_DWORD *)this + 192) - *((_DWORD *)this + 190);
      v21 = *((_DWORD *)this + 193) - *((_DWORD *)this + 191);
      v19 = 0LL;
      CRegionShape::BuildFromRects(v22, &v19, 1LL);
      CShapePtr::Release((CShapePtr *)&v16);
      v5 = (CShape *)v22;
      v17 = 0;
      v16 = (CShape *)v22;
    }
    v6 = -2003292412;
    if ( v5 && (v7 = CShape::CopyShape(v5, 0LL, &v15), v6 = v7, v3 = v7, v7 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v7, 0x15Eu, 0LL);
    }
    else
    {
      v3 = v6;
      if ( v6 >= 0 )
      {
        if ( *((_BYTE *)this + 889) )
        {
          v19 = 0LL;
          v9 = CPtrArrayBase::operator[]((char *)this + 776, 0LL);
          AccumShape = (__int64 *)CGdiSpriteBitmap::GetAccumShape(v9, v18, 0LL);
          v3 = CShape::Combine((__int64)v15, v11, *AccumShape, 0LL, 1, &v19);
          CShapePtr::Release((CShapePtr *)v18);
          if ( v3 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v3, 0x725u, 0LL);
            goto LABEL_15;
          }
          if ( v15 )
            (**(void (__fastcall ***)(struct CShape *, __int64))v15)(v15, 1LL);
          v8 = v19;
        }
        else
        {
          v8 = v15;
        }
        *v1 = v8;
        v15 = 0LL;
        *((_BYTE *)this + 888) = 1;
LABEL_15:
        CRegionShape::~CRegionShape((CRegionShape *)v22);
        CShapePtr::Release((CShapePtr *)&v16);
        goto LABEL_4;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v6, 0x71Au, 0LL);
    goto LABEL_15;
  }
LABEL_4:
  if ( v15 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v15)(v15, 1LL);
  return (unsigned int)v3;
}
