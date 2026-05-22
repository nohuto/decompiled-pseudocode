/*
 * XREFs of ?Rebuild@CTexturedRectanglePrimitive@DirectComposition@@MEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180008690
 * Callers:
 *     <none>
 * Callees:
 *     ?InvertMatrix@DirectComposition@@YA_NPEAUD2D_MATRIX_3X2_F@@@Z @ 0x18003197C (-InvertMatrix@DirectComposition@@YA_NPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOccluder@2@1@Z @ 0x180032EB0 (-AddPrimitiveInternal@CPrimitiveGroup@DirectComposition@@IEAAJPEAVCPrimitive@2@IPEAUBatchedOcclu.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddClippingPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x1800F9A00 (-AddClippingPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2.c)
 */

__int64 __fastcall DirectComposition::CTexturedRectanglePrimitive::Rebuild(
        DirectComposition::CTexturedRectanglePrimitive *this,
        struct DirectComposition::CPrimitiveGroup *a2,
        struct DirectComposition::BatchedOccluder *a3,
        struct DirectComposition::BatchedOccluder *a4)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  int v10; // esi
  struct D2D_MATRIX_3X2_F *v11; // rdx
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int64 v15; // rax
  float v16; // xmm6_4
  float v17; // xmm3_4
  float v18; // xmm5_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  FLOAT v21; // xmm2_4
  unsigned int v22; // xmm6_4
  unsigned int v23; // xmm1_4
  FLOAT v24; // xmm5_4
  struct D2D_RECT_F v25; // [rsp+30h] [rbp-50h] BYREF
  __int128 v26; // [rsp+40h] [rbp-40h] BYREF
  __int64 v27; // [rsp+50h] [rbp-30h]
  struct D2D_MATRIX_3X2_F v28; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v29; // [rsp+B0h] [rbp+30h] BYREF

  v4 = *(_QWORD *)this;
  v5 = -1;
  v29 = -1;
  v10 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(DirectComposition::CTexturedRectanglePrimitive *))(v4 + 152))(this) )
  {
    if ( (*((_BYTE *)this + 288) & 2) == 0 )
    {
      v13 = *((_OWORD *)this + 15);
      v14 = *((_QWORD *)this + 29);
      v25.left = 0.0;
      v25.top = 0.0;
      v26 = v13;
      v15 = *(_QWORD *)(v14 + 44);
      v25.right = (float)(int)v15;
      v25.bottom = (float)SHIDWORD(v15);
      v27 = *((_QWORD *)this + 32);
      if ( DirectComposition::InvertMatrix((DirectComposition *)&v26, v11) )
      {
        v16 = *((float *)this + 20);
        v17 = *((float *)this + 19);
        v18 = *((float *)this + 21);
        v19 = *((float *)this + 18);
        v20 = v19 * *(float *)&v27;
        v28.m11 = (float)(v19 * *(float *)&v26) + (float)(v16 * *((float *)&v26 + 1));
        v21 = (float)(v19 * *((float *)&v26 + 2)) + (float)(v16 * *((float *)&v26 + 3));
        v28.m12 = (float)(v18 * *((float *)&v26 + 1)) + (float)(v17 * *(float *)&v26);
        *(float *)&v22 = (float)((float)(v16 * *((float *)&v27 + 1)) + v20) + *((float *)this + 22);
        v28.m21 = v21;
        *(float *)&v23 = (float)(v18 * *((float *)&v26 + 3)) + (float)(v17 * *((float *)&v26 + 2));
        v24 = (float)((float)(v18 * *((float *)&v27 + 1)) + (float)(v17 * *(float *)&v27)) + *((float *)this + 23);
        *(_QWORD *)&v28.m[1][1] = __PAIR64__(v22, v23);
        v28.dy = v24;
        v10 = DirectComposition::CPrimitiveGroup::AddClippingPrimitive(a2, &v25, &v28, &v29);
        if ( v10 < 0 )
          return (unsigned int)v10;
        v5 = v29;
      }
    }
    DirectComposition::CPrimitiveGroup::AddPrimitiveInternal(a2, this, v5, a3, a4);
  }
  return (unsigned int)v10;
}
