/*
 * XREFs of ?UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005E0A4
 * Callers:
 *     ?GetActiveRenderTargetSize@Camera@Engine@Spectre@@IEBA?AUVector2@Math@Utils@3@XZ @ 0x18005B994 (-GetActiveRenderTargetSize@Camera@Engine@Spectre@@IEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?GetRenderTargetSize@Camera@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x18005BAB8 (-GetRenderTargetSize@Camera@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?GetViewportActive@Camera@Engine@Spectre@@IEBA?AU?$ViewportBounds@UVector3@Math@Utils@Spectre@@@123@XZ @ 0x18005BBC0 (-GetViewportActive@Camera@Engine@Spectre@@IEBA-AU-$ViewportBounds@UVector3@Math@Utils@Spectre@@@.c)
 *     ?UpdateMatrixStages@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005DBC8 (-UpdateMatrixStages@Camera@Engine@Spectre@@IEBAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?8VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DD0 (--$-8VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??$?9VScene@Engine@Spectre@@@std@@YA_NAEBV?$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z @ 0x180011DE0 (--$-9VScene@Engine@Spectre@@@std@@YA_NAEBV-$shared_ptr@VScene@Engine@Spectre@@@0@$$T@Z.c)
 *     ??DMath@Utils@Spectre@@YA?AUMatrix@012@AEBU3012@0@Z @ 0x180017E58 (--DMath@Utils@Spectre@@YA-AUMatrix@012@AEBU3012@0@Z.c)
 *     ?Invert@Matrix@Math@Utils@Spectre@@QEBA?AU1234@XZ @ 0x1800189F4 (-Invert@Matrix@Math@Utils@Spectre@@QEBA-AU1234@XZ.c)
 *     ?GetActiveSize@FrameBuffer@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x18002648C (-GetActiveSize@FrameBuffer@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?CreateScale@Matrix@Math@Utils@Spectre@@SA?AU1234@AEBUVector3@234@@Z @ 0x18003BD9C (-CreateScale@Matrix@Math@Utils@Spectre@@SA-AU1234@AEBUVector3@234@@Z.c)
 *     ?CreateTranslation@Matrix@Math@Utils@Spectre@@SA?AU1234@AEBUVector3@234@@Z @ 0x18003BE0C (-CreateTranslation@Matrix@Math@Utils@Spectre@@SA-AU1234@AEBUVector3@234@@Z.c)
 *     ?GetSceneNode@Component@Engine@Spectre@@QEBA?AV?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@XZ @ 0x18004328C (-GetSceneNode@Component@Engine@Spectre@@QEBA-AV-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@.c)
 *     ?GetHeight@DepthBuffer@Engine@Spectre@@QEBAIXZ @ 0x18005BA64 (-GetHeight@DepthBuffer@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetWidth@DepthBuffer@Engine@Spectre@@QEBAIXZ @ 0x18005BC50 (-GetWidth@DepthBuffer@Engine@Spectre@@QEBAIXZ.c)
 *     ?IsTransformStateLocked@Camera@Engine@Spectre@@QEBA_NI@Z @ 0x18005BD74 (-IsTransformStateLocked@Camera@Engine@Spectre@@QEBA_NI@Z.c)
 *     ?SetTransformMatrix@Camera@Engine@Spectre@@QEBAXW4CoordinateSystem@23@0UMatrix@Math@Utils@3@@Z @ 0x18005D494 (-SetTransformMatrix@Camera@Engine@Spectre@@QEBAXW4CoordinateSystem@23@0UMatrix@Math@Utils@3@@Z.c)
 */

char __fastcall Spectre::Engine::Camera::UpdateViewportMatrixStage(Spectre::Engine::Camera *this)
{
  _QWORD *SceneNode; // rax
  bool v3; // di
  _QWORD *v4; // r9
  Spectre::Engine::DepthBuffer **v5; // r8
  __int64 *v6; // r9
  float v7; // xmm1_4
  float Height; // xmm0_4
  int Width; // eax
  Spectre::Engine::DepthBuffer **v10; // r8
  Spectre::Engine::DepthBuffer *v11; // rcx
  float v12; // xmm3_4
  float v13; // xmm4_4
  int v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm4_4
  __m128 v19; // xmm3
  float v20; // xmm1_4
  __m128 v21; // xmm5
  __m128 v22; // xmm2
  __m128 v23; // xmm6
  __m128 v24; // xmm2
  __m128 v25; // xmm2
  float v26; // xmm0_4
  __int128 *Scale; // rax
  _OWORD *v28; // r9
  __int64 v29; // rcx
  int v30; // r10d
  int v31; // r11d
  __int32 v33; // [rsp+28h] [rbp-E0h] BYREF
  float v34; // [rsp+2Ch] [rbp-DCh]
  __int64 v35; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v36; // [rsp+38h] [rbp-D0h] BYREF
  std::_Ref_count_base *v37; // [rsp+40h] [rbp-C8h]
  std::_Ref_count_base *v38[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v39; // [rsp+58h] [rbp-B0h]
  __int128 v40; // [rsp+68h] [rbp-A0h]
  __int128 v41; // [rsp+78h] [rbp-90h]
  __int128 v42[4]; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v43[5]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v44; // [rsp+128h] [rbp+20h] BYREF

  if ( (*((_BYTE *)this + 544) & 4) == 0 || Spectre::Engine::Camera::IsTransformStateLocked(this, 4) )
    return 0;
  SceneNode = Spectre::Engine::Component::GetSceneNode((__int64)this, &v36);
  v3 = std::operator!=<Spectre::Engine::Scene>(SceneNode);
  if ( v37 )
    std::_Ref_count_base::_Decref(v37);
  if ( v3 )
  {
    *((_DWORD *)this + 399) = 0;
    *((_DWORD *)this + 400) = 0;
    *((_DWORD *)this + 401) = 0;
    *((_DWORD *)this + 402) = 0;
    if ( !std::operator==<Spectre::Engine::Scene>((_QWORD *)this + 17)
      || !std::operator==<Spectre::Engine::Scene>((_QWORD *)this + 19) )
    {
      if ( std::operator!=<Spectre::Engine::Scene>(v4) )
      {
        Spectre::Engine::FrameBuffer::GetActiveSize(*v6, &v44);
        v7 = *(float *)&v44;
        Height = *((float *)&v44 + 1);
        *((_DWORD *)this + 399) = v44;
      }
      else
      {
        Width = Spectre::Engine::DepthBuffer::GetWidth(*v5);
        v11 = *v10;
        v7 = (float)Width;
        *((float *)this + 399) = (float)Width;
        Height = (float)(int)Spectre::Engine::DepthBuffer::GetHeight(v11);
      }
      *((float *)this + 400) = Height;
      *((float *)this + 402) = Height;
      *((float *)this + 401) = v7;
    }
    if ( *((_DWORD *)this + 90) )
    {
      v12 = FLOAT_1_0;
      v13 = FLOAT_1_0;
    }
    else
    {
      v12 = *((float *)this + 401);
      v13 = *((float *)this + 402);
    }
    v14 = *((_DWORD *)this + 98);
    v34 = 0.0;
    v36 = 0LL;
    v15 = v12 * *((float *)this + 86);
    v16 = v13 * *((float *)this + 87);
    v33 = 0;
    *((float *)this + 393) = v15;
    *((_DWORD *)this + 395) = v14;
    *((float *)this + 394) = v16;
    v17 = v12 * *((float *)this + 88);
    v18 = v13 * *((float *)this + 89);
    *((_DWORD *)this + 398) = *((_DWORD *)this + 99);
    *((float *)this + 396) = v17;
    v19 = 0LL;
    *((float *)this + 397) = v18;
    v20 = *((float *)this + 98);
    v21 = _mm_movelh_ps((__m128)*(unsigned __int64 *)((char *)this + 1572), (__m128)*((unsigned int *)this + 395));
    v22 = _mm_movelh_ps((__m128)*((unsigned __int64 *)this + 198), (__m128)*((unsigned int *)this + 398));
    v23 = _mm_sub_ps(v22, v21);
    v24 = _mm_add_ps(v22, v21);
    LODWORD(v37) = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
    v19.m128_u64[0] = v24.m128_u64[0];
    v25 = 0LL;
    v19.m128_u64[0] = _mm_mul_ps(_mm_movelh_ps(v19, (__m128)(unsigned int)v37), (__m128)_xmm).m128_u64[0];
    v25.m128_u64[0] = v23.m128_u64[0];
    LODWORD(v35) = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
    v25.m128_u64[0] = _mm_mul_ps(_mm_movelh_ps(v25, (__m128)(unsigned int)v35), (__m128)_xmm).m128_u64[0];
    v26 = *((float *)this + 99) - v20;
    *(float *)&v37 = v20;
    v36 = v19.m128_u64[0];
    v33 = v25.m128_i32[0];
    *(float *)&v35 = v26;
    v34 = v25.m128_f32[1] * -1.0;
    Spectre::Utils::Math::Matrix::CreateTranslation((__int64)v43, &v36);
    Scale = (__int128 *)Spectre::Utils::Math::Matrix::CreateScale((__int64)v38, (unsigned int *)&v33);
    Spectre::Utils::Math::operator*((__int64)v42, Scale, v28);
    Spectre::Utils::Math::Matrix::Invert(v42, (__int64)v43);
    *(_OWORD *)v38 = v42[0];
    v39 = v42[1];
    v40 = v42[2];
    v41 = v42[3];
    Spectre::Engine::Camera::SetTransformMatrix((__int64)this, 2, 3, v38);
    *(_OWORD *)v38 = v43[0];
    v39 = v43[1];
    v40 = v43[2];
    v41 = v43[3];
    Spectre::Engine::Camera::SetTransformMatrix(v29, v31, v30, v38);
  }
  *((_DWORD *)this + 136) &= ~4u;
  return 1;
}
