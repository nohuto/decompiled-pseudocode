/*
 * XREFs of ?GetTransform@CGDIBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003CE18
 * Callers:
 *     ?GetTransform@CGDIBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010B950 (-GetTransform@CGDIBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CGDIBitmapRealization::GetTransform(__int64 a1, __int64 a2, float *a3)
{
  int v3; // ebx
  int *v4; // rsi
  char v7; // r14
  char v8; // al
  __int64 v9; // rcx
  int v10; // eax
  float v11; // xmm1_4
  float v12; // xmm2_4
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+44h] [rbp+Ch]

  v3 = 0;
  v4 = (int *)(a1 - 72);
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  v7 = 0;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  v8 = *(_BYTE *)(a2 + 65) & 0xD7;
  *(_BYTE *)(a2 + 64) = 85;
  *(_BYTE *)(a2 + 65) = v8 | 0x17;
  if ( *(_DWORD *)(a1 - 80) || *v4 )
  {
    CMILMatrix::Translate(
      (CMILMatrix *)a2,
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*(int *)(a1 - 80)) ^ _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v4) ^ _xmm));
    v7 = 1;
  }
  if ( a3 )
  {
    v9 = *(_QWORD *)(a1 - 120);
    if ( v9 )
    {
      (**(void (__fastcall ***)(__int64, int *))(v9 + 96))(v9 + 96, &v14);
      v10 = v14;
      v3 = v15;
    }
    else
    {
      v10 = 0;
    }
    v11 = (float)*(int *)(a1 - 80);
    *a3 = v11;
    v12 = (float)*v4;
    a3[1] = v12;
    a3[2] = fmaxf(v11, (float)(v10 - *(_DWORD *)(a1 - 76)));
    a3[3] = fmaxf(v12, (float)(v3 - *(_DWORD *)(a1 - 68)));
  }
  return v7;
}
