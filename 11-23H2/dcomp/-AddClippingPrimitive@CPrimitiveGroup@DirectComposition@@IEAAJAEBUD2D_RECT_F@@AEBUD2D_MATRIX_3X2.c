/*
 * XREFs of ?AddClippingPrimitive@CPrimitiveGroup@DirectComposition@@IEAAJAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x1800F9A00
 * Callers:
 *     ?Rebuild@CTexturedRectanglePrimitive@DirectComposition@@MEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180008690 (-Rebuild@CTexturedRectanglePrimitive@DirectComposition@@MEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOc.c)
 *     ?RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180031A74 (-RealizeAndRebuild@CVirtualSurfacePrimitive@DirectComposition@@AEAAJPEAVCPrimitiveGroup@2@PEAUBa.c)
 *     ?Rebuild@CVirtualSurfacePrimitive@DirectComposition@@EEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOccluder@2@1@Z @ 0x180085760 (-Rebuild@CVirtualSurfacePrimitive@DirectComposition@@EEAAJPEAVCPrimitiveGroup@2@PEAUBatchedOcclu.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroup::AddClippingPrimitive(
        DirectComposition::CPrimitiveGroup *this,
        const __m128i *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        unsigned int *a4)
{
  __int128 v4; // xmm0
  __int64 v7; // xmm1_8
  char *v8; // r8
  __int64 v9; // rax
  __m128i v10; // xmm2
  unsigned int v11; // edx
  unsigned int v12; // ebx
  unsigned int v13; // edx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __m128i v19; // [rsp+20h] [rbp-48h] BYREF
  __int128 v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+40h] [rbp-28h]

  v4 = *(_OWORD *)&a3->m11;
  v7 = *(_QWORD *)&a3->m[2][0];
  v8 = (char *)this + 216;
  v9 = *((unsigned int *)this + 60);
  v10 = _mm_loadu_si128(a2);
  v20 = v4;
  v11 = v9 + 1;
  v21 = v7;
  v19 = v10;
  if ( (int)v9 + 1 < (unsigned int)v9 )
  {
    v12 = -2147024362;
    v13 = 181;
    v14 = -2147024362;
LABEL_8:
    DoStackCaptureDirect(v14, v13);
    return v12;
  }
  v12 = 0;
  if ( v11 > *((_DWORD *)this + 59) )
  {
    v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 216, 0x28u, (__int64)v8, &v19);
    v12 = v17;
    if ( v17 < 0 )
    {
      v13 = 192;
      v14 = v17;
      goto LABEL_8;
    }
  }
  else
  {
    v15 = 5 * v9;
    v16 = *(_QWORD *)v8;
    *(__m128i *)(v16 + 8 * v15) = v10;
    *(_OWORD *)(v16 + 8 * v15 + 16) = v20;
    *(_QWORD *)(v16 + 8 * v15 + 32) = v21;
    *((_DWORD *)v8 + 6) = v11;
  }
  *a4 = *((_DWORD *)this + 60) - 1;
  return v12;
}
