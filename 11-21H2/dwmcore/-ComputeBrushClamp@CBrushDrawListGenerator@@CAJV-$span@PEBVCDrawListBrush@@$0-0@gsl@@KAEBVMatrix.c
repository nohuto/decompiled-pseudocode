/*
 * XREFs of ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1801E5378
 * Callers:
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801E56E8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x180056568 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180057724 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$?4U?$default_delete@VCShape@@@std@@$0A@@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180062834 (--$-4U-$default_delete@VCShape@@@std@@$0A@@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18006286C (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD884 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800D324C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800D32D4 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??0CRectanglesShape@@QEAA@XZ @ 0x1800D33F8 (--0CRectanglesShape@@QEAA@XZ.c)
 *     ??A?$span@PEBVCDrawListBrush@@$0?0@gsl@@QEBAAEAPEBVCDrawListBrush@@_K@Z @ 0x1800EAF50 (--A-$span@PEBVCDrawListBrush@@$0-0@gsl@@QEBAAEAPEBVCDrawListBrush@@_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CBrushDrawListGenerator::ComputeBrushClamp(gsl::details *a1, int a2, float *a3, __int64 *a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v10; // rbx
  const struct D2D_MATRIX_3X2_F *v11; // rdx
  unsigned int v12; // xmm1_4
  __int32 v13; // xmm0_4
  unsigned int v14; // xmm1_4
  unsigned int v15; // xmm0_4
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 (__fastcall ***v19)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v20)(_QWORD, __int64); // rdx
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, __int64); // rdx
  __int64 v23; // rcx
  __int64 v25; // rcx
  __int64 (__fastcall ***v26)(_QWORD, __int64); // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, __int64); // [rsp+38h] [rbp-C8h] BYREF
  __m256i v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+60h] [rbp-A0h]
  __int128 v30; // [rsp+70h] [rbp-90h]
  __m256i v31; // [rsp+88h] [rbp-78h] BYREF
  __int128 v32; // [rsp+A8h] [rbp-58h]
  __int128 v33; // [rsp+B8h] [rbp-48h]
  int v34; // [rsp+C8h] [rbp-38h]
  __m256i v35; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v36; // [rsp+F0h] [rbp-10h]
  __int128 v37; // [rsp+100h] [rbp+0h]
  int v38; // [rsp+110h] [rbp+10h]
  __int128 v39; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v40[80]; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v26 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    do
    {
      v10 = *(_QWORD *)gsl::span<CDrawListBrush const *,-1>::operator[](a1, v5);
      if ( v10 && *(_BYTE *)(v10 + 52) )
      {
        CRectanglesShape::CRectanglesShape((CRectanglesShape *)v40);
        v39 = *(_OWORD *)(v10 + 32);
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v40, (const struct MilRectF *)&v39);
        v38 = 0;
        v11 = (const struct D2D_MATRIX_3X2_F *)(v10 + 8);
        if ( ((1 << v5) & a2) != 0 )
        {
          v12 = *(_DWORD *)(v10 + 12);
          v28.m256i_i32[0] = LODWORD(v11->m11);
          v13 = *(_DWORD *)(v10 + 16);
          *(__int64 *)((char *)v28.m256i_i64 + 4) = v12;
          v14 = *(_DWORD *)(v10 + 20);
          v28.m256i_i32[3] = v13;
          v15 = *(_DWORD *)(v10 + 24);
          v28.m256i_i64[2] = v14;
          v28.m256i_i64[3] = __PAIR64__(*(_DWORD *)(v10 + 28), v15);
          v29 = 1065353216;
          Matrix3x3::operator*((float *)v28.m256i_i32, (float *)v31.m256i_i32, a3);
          v28.m256i_i32[2] = 0;
          v38 = 0;
          *(__int64 *)((char *)&v28.m256i_i64[1] + 4) = v31.m256i_i64[1];
          v28.m256i_i64[0] = v31.m256i_i64[0];
          *(__int64 *)((char *)&v28.m256i_i64[2] + 4) = v31.m256i_u32[4];
          LODWORD(v30) = v31.m256i_i32[6];
          v28.m256i_i32[7] = v31.m256i_i32[5];
          HIDWORD(v30) = v32;
          *(_QWORD *)((char *)&v30 + 4) = v31.m256i_u32[7];
          v35 = v28;
          v37 = v30;
          v36 = _xmm;
        }
        else
        {
          CMILMatrix::CMILMatrix((CMILMatrix *)&v31, v11);
          v38 = v34;
          v35 = v31;
          v36 = v32;
          v37 = v33;
        }
        v28.m256i_i64[1] = 0LL;
        v28.m256i_i8[16] = 1;
        if ( v26 )
        {
          v27 = 0LL;
          v28.m256i_i64[0] = (__int64)&v27;
          v18 = CShape::Combine((__int64)v26, v16, (__int64)v40, (__int64)&v35, 1, &v28.m256i_i64[1]);
          if ( v28.m256i_i8[16] )
          {
            v21 = v28.m256i_i64[0];
            v22 = *(__int64 (__fastcall ****)(_QWORD, __int64))v28.m256i_i64[0];
            *(_QWORD *)v28.m256i_i64[0] = v28.m256i_i64[1];
            if ( v22 )
              std::default_delete<CShape>::operator()(v21, v22);
          }
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v18, 0x6Au);
            if ( v27 )
              std::default_delete<CShape>::operator()(v25, v27);
            goto LABEL_13;
          }
          std::unique_ptr<CShape>::operator=<std::default_delete<CShape>,0>((__int64 *)&v26, (__int64 *)&v27);
          if ( v27 )
            std::default_delete<CShape>::operator()(v23, v27);
        }
        else
        {
          v28.m256i_i64[0] = (__int64)&v26;
          v18 = CShape::CopyShape((CShape *)v40, (const struct CMILMatrix *)&v35, (struct CShape **)&v28.m256i_i64[1]);
          if ( v28.m256i_i8[16] )
          {
            v17 = v28.m256i_i64[1];
            v19 = *(__int64 (__fastcall ****)(_QWORD, __int64))v28.m256i_i64[0];
            *(_QWORD *)v28.m256i_i64[0] = v28.m256i_i64[1];
            if ( v19 )
              std::default_delete<CShape>::operator()(v17, v19);
          }
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v18, 0x5Fu);
LABEL_13:
            CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v40);
            v20 = v26;
            goto LABEL_24;
          }
        }
        CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v40);
      }
      ++v5;
    }
    while ( v5 < *(_QWORD *)a1 );
    v4 = (__int64)v26;
  }
  v20 = 0LL;
  *a4 = v4;
  v26 = 0LL;
  v18 = 0;
LABEL_24:
  if ( v20 )
    std::default_delete<CShape>::operator()((__int64)a1, v20);
  return (unsigned int)v18;
}
