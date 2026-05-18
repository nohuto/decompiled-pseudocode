/*
 * XREFs of ?UpdateProjectionMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005DC38
 * Callers:
 *     ?UpdateMatrixStages@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005DBC8 (-UpdateMatrixStages@Camera@Engine@Spectre@@IEBAXXZ.c)
 * Callees:
 *     ?Invert@Matrix@Math@Utils@Spectre@@QEBA?AU1234@XZ @ 0x1800189F4 (-Invert@Matrix@Math@Utils@Spectre@@QEBA-AU1234@XZ.c)
 *     ?XMMatrixOrthographicRH@DirectX@@YQ?AUXMMATRIX@1@MMMM@Z @ 0x18001B478 (-XMMatrixOrthographicRH@DirectX@@YQ-AUXMMATRIX@1@MMMM@Z.c)
 *     ?CreatePerspectiveFieldOfView@Matrix@Math@Utils@Spectre@@SA?AU1234@MMMM@Z @ 0x18005B7EC (-CreatePerspectiveFieldOfView@Matrix@Math@Utils@Spectre@@SA-AU1234@MMMM@Z.c)
 *     ?IsTransformStateLocked@Camera@Engine@Spectre@@QEBA_NI@Z @ 0x18005BD74 (-IsTransformStateLocked@Camera@Engine@Spectre@@QEBA_NI@Z.c)
 *     ?SetTransformMatrix@Camera@Engine@Spectre@@QEBAXW4CoordinateSystem@23@0UMatrix@Math@Utils@3@@Z @ 0x18005D494 (-SetTransformMatrix@Camera@Engine@Spectre@@QEBAXW4CoordinateSystem@23@0UMatrix@Math@Utils@3@@Z.c)
 *     ?UpdateAspectRatioAutomatic@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005D88C (-UpdateAspectRatioAutomatic@Camera@Engine@Spectre@@IEBAXXZ.c)
 */

char __fastcall Spectre::Engine::Camera::UpdateProjectionMatrixStage(Spectre::Engine::Camera *this)
{
  double v2; // xmm2_8
  int v3; // eax
  float v4; // xmm0_4
  double v5; // xmm3_8
  double v6; // xmm1_8
  double v7; // xmm1_8
  __int128 *PerspectiveFieldOfView; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __m128i v12; // xmm0
  bool v13; // zf
  __int128 v15; // [rsp+30h] [rbp-29h] BYREF
  __int128 v16; // [rsp+40h] [rbp-19h]
  __int128 v17; // [rsp+50h] [rbp-9h]
  __int128 v18; // [rsp+60h] [rbp+7h]
  __int128 v19; // [rsp+70h] [rbp+17h] BYREF
  __int128 v20; // [rsp+80h] [rbp+27h]
  __int128 v21; // [rsp+90h] [rbp+37h]
  __int128 v22; // [rsp+A0h] [rbp+47h]

  if ( Spectre::Engine::Camera::IsTransformStateLocked(this, 2) )
    return 0;
  Spectre::Engine::Camera::UpdateAspectRatioAutomatic(this);
  *(_QWORD *)&v2 = *((unsigned int *)this + 83);
  if ( (*((_BYTE *)this + 544) & 2) == 0 )
    return 0;
  v3 = *((_DWORD *)this + 79);
  switch ( v3 )
  {
    case 1:
      v4 = *((float *)this + 81);
      *(_QWORD *)&v5 = LODWORD(FLOAT_0_001);
      if ( v4 < 0.001 )
        v4 = FLOAT_0_001;
      *(_QWORD *)&v6 = *((unsigned int *)this + 80);
LABEL_7:
      if ( *(float *)&v5 <= *(float *)&v6 )
        v5 = v6;
      *(_QWORD *)&v7 = *((unsigned int *)this + 82);
      *(float *)&v7 = *(float *)&v7 * 0.017453292;
      PerspectiveFieldOfView = Spectre::Utils::Math::Matrix::CreatePerspectiveFieldOfView(
                                 (__int64)&v19,
                                 v7,
                                 v2,
                                 v5,
                                 LODWORD(v4));
      v9 = PerspectiveFieldOfView[1];
      v10 = PerspectiveFieldOfView[2];
      v11 = PerspectiveFieldOfView[3];
      v15 = *PerspectiveFieldOfView;
      break;
    case 2:
      v4 = *((float *)this + 80);
      *(_QWORD *)&v5 = LODWORD(FLOAT_0_001);
      if ( v4 < 0.001 )
        v4 = FLOAT_0_001;
      *(_QWORD *)&v6 = *((unsigned int *)this + 81);
      goto LABEL_7;
    case 3:
      v9 = *((unsigned int *)this + 85);
      v11 = *((unsigned int *)this + 81);
      v12 = (__m128i)v9;
      *(float *)v12.m128i_i32 = *(float *)&v9 * *(float *)&v2;
      v10 = *((unsigned int *)this + 80);
LABEL_16:
      *(float *)v12.m128i_i32 = DirectX::XMMatrixOrthographicRH(*(float *)v12.m128i_i32);
      *(_QWORD *)&v15 = v12.m128i_i64[0];
      *((_QWORD *)&v15 + 1) = _mm_srli_si128(v12, 8).m128i_u64[0];
      v20 = v9;
      v21 = v10;
      v22 = v11;
      break;
    case 4:
      v9 = *((unsigned int *)this + 85);
      v11 = *((unsigned int *)this + 80);
      v12 = (__m128i)v9;
      *(float *)v12.m128i_i32 = *(float *)&v9 * *(float *)&v2;
      v10 = *((unsigned int *)this + 81);
      goto LABEL_16;
    case 5:
      v9 = *(_OWORD *)((char *)this + 948);
      v10 = *(_OWORD *)((char *)this + 964);
      v11 = *(_OWORD *)((char *)this + 980);
      v15 = *(_OWORD *)((char *)this + 932);
      break;
    default:
      v9 = xmmword_180106A40;
      v10 = xmmword_180106A50;
      v11 = xmmword_180106A60;
      v15 = Spectre::Utils::Math::Matrix::Identity;
      break;
  }
  v13 = *((_DWORD *)this + 79) == 5;
  v18 = v11;
  v17 = v10;
  v16 = v9;
  if ( !v13 )
  {
    v19 = v15;
    v20 = v9;
    v21 = v10;
    v22 = v11;
    Spectre::Engine::Camera::SetTransformMatrix((__int64)this, 1, 2, &v19);
  }
  Spectre::Utils::Math::Matrix::Invert(&v15, (__int64)&v19);
  v15 = v19;
  v16 = v20;
  v17 = v21;
  v18 = v22;
  Spectre::Engine::Camera::SetTransformMatrix((__int64)this, 2, 1, &v15);
  *((_DWORD *)this + 136) &= ~2u;
  return 1;
}
