/*
 * XREFs of ?GetTransform@CRenderTargetBitmap@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802B1080
 * Callers:
 *     ?GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180122550 (-GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@.c)
 *     ?GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180123210 (-GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180123710 (-GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF.c)
 *     ?GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180123A50 (-GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180074570 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetBitmap::GetTransform(__int64 a1, CMILMatrix *a2, __int64 a3)
{
  __int64 v4; // r8
  void (__fastcall ***v5)(_QWORD, int *); // rcx
  int v6; // eax
  float v7; // xmm1_4
  int v9; // [rsp+40h] [rbp+18h] BYREF
  int v10; // [rsp+44h] [rbp+1Ch]

  CMILMatrix::SetToIdentity(a2);
  if ( a3 )
  {
    v5 = (void (__fastcall ***)(_QWORD, int *))(*(int *)(*(_QWORD *)(v4 - 224) + 20LL) + v4 - 224);
    (**v5)(v5, &v9);
    v6 = v9;
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = 0;
    v7 = (float)v10;
    *(float *)(a3 + 8) = (float)v6;
    *(float *)(a3 + 12) = v7;
  }
  return 0;
}
