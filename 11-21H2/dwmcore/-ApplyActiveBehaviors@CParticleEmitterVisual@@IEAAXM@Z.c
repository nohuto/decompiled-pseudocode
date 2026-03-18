/*
 * XREFs of ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x18022DD78
 * Callers:
 *     ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x1802309CC (-UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?NormalizeFrames@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAXXZ @ 0x18022AC24 (-NormalizeFrames@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAA.c)
 *     ?Update@BulkAnimator@Particles@@SAXPEBVISingleInputAnimator@2@MUParticleStreamInfo@2@1I@Z @ 0x18022ACF0 (-Update@BulkAnimator@Particles@@SAXPEBVISingleInputAnimator@2@MUParticleStreamInfo@2@1I@Z.c)
 *     ?Update@BulkAnimator@Particles@@SAXPEBVIThreeInputAnimator@2@UParticleStreamInfo@2@111I@Z @ 0x18022AE4C (-Update@BulkAnimator@Particles@@SAXPEBVIThreeInputAnimator@2@UParticleStreamInfo@2@111I@Z.c)
 *     ?Update@BulkAnimator@Particles@@SAXPEBVITwoInputAnimator@2@UParticleStreamInfo@2@11I@Z @ 0x18022B038 (-Update@BulkAnimator@Particles@@SAXPEBVITwoInputAnimator@2@UParticleStreamInfo@2@11I@Z.c)
 *     ?InputToInfo@ParticleCollection@CParticleEmitterVisual@@QEAA?AUParticleStreamInfo@Particles@@W4ParticleInputSource@4Composition@UI@Windows@@@Z @ 0x18022FA6C (-InputToInfo@ParticleCollection@CParticleEmitterVisual@@QEAA-AUParticleStreamInfo@Particles@@W4P.c)
 */

void __fastcall CParticleEmitterVisual::ApplyActiveBehaviors(CParticleEmitterVisual *this, float a2)
{
  __int64 v2; // rdx
  _QWORD *v4; // rcx
  char v5; // r14
  char v6; // si
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r11
  unsigned int i; // r9d
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  float v24; // xmm0_4
  __m128 v25; // xmm1
  __m128 v26; // xmm3
  __m128 v27; // xmm0
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 *v54; // rsi
  __int64 *v55; // rbx
  __int64 v56; // rcx
  unsigned int v57; // [rsp+30h] [rbp-21h]
  __int128 v58; // [rsp+38h] [rbp-19h] BYREF
  __int128 v59; // [rsp+48h] [rbp-9h] BYREF
  __int128 v60; // [rsp+58h] [rbp+7h] BYREF
  __int128 v61; // [rsp+68h] [rbp+17h] BYREF
  __int64 v62[4]; // [rsp+78h] [rbp+27h] BYREF

  v4 = (_QWORD *)*((_QWORD *)this + 108);
  v5 = 0;
  v6 = 0;
  if ( v4 )
  {
    v7 = v4[10];
    if ( v7 && *(_QWORD *)(v7 + 128) != *(_QWORD *)(v7 + 120) )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 896, &v61, *(unsigned int *)(v7 + 80));
      *(_QWORD *)&v59 = *((_QWORD *)this + 112);
      *(_QWORD *)&v58 = *((_QWORD *)this + 142);
      v8 = *((_QWORD *)this + 108);
      *((_QWORD *)&v59 + 1) = 0x300000000LL;
      v9 = *(_QWORD *)(v8 + 80);
      v60 = v59;
      *((_QWORD *)&v58 + 1) = 0x300000000LL;
      v59 = v58;
      Particles::BulkAnimator::Update(
        (v9 + 112) & -(__int64)(v9 != 0),
        (__int64)&v61,
        (__int64 *)&v59,
        (__int64 *)&v60,
        *((_DWORD *)this + 338));
      v4 = (_QWORD *)*((_QWORD *)this + 108);
    }
    v10 = v4[12];
    if ( v10 && (__int64)(*(_QWORD *)(v10 + 128) - *(_QWORD *)(v10 + 120)) >> 4 )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 896, &v61, *(unsigned int *)(v10 + 80));
      *(_QWORD *)&v59 = *((_QWORD *)this + 124);
      *(_QWORD *)&v58 = *((_QWORD *)this + 148);
      v11 = *((_QWORD *)this + 108);
      *((_QWORD *)&v59 + 1) = 0x100000000LL;
      v12 = *(_QWORD *)(v11 + 96);
      v60 = v59;
      *((_QWORD *)&v58 + 1) = 0x100000000LL;
      v59 = v58;
      Particles::BulkAnimator::Update(
        (v12 + 112) & -(__int64)(v12 != 0),
        (__int64)&v61,
        (__int64 *)&v59,
        (__int64 *)&v60,
        *((_DWORD *)this + 338));
      v4 = (_QWORD *)*((_QWORD *)this + 108);
      v6 = 1;
    }
    v13 = v4[11];
    if ( v13 && *(_QWORD *)(v13 + 128) != *(_QWORD *)(v13 + 120) )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 896, v62, *(unsigned int *)(v13 + 80));
      v14 = (*(_QWORD *)(*((_QWORD *)this + 108) + 88LL) + 112LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 108) + 88LL) != 0LL);
      *(_QWORD *)&v61 = &Particles::DirectionAnimator::`vftable';
      *((_QWORD *)&v61 + 1) = v14;
      Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::NormalizeFrames(v14);
      v15 = *((_QWORD *)this + 118);
      *(_QWORD *)&v58 = *((_QWORD *)this + 124);
      *(_QWORD *)&v60 = *((_QWORD *)this + 151);
      v57 = *((_DWORD *)this + 338);
      *(_QWORD *)&v59 = v15;
      *((_QWORD *)&v59 + 1) = 0x300000000LL;
      *((_QWORD *)&v58 + 1) = 0x100000000LL;
      *((_QWORD *)&v60 + 1) = 0x300000000LL;
      Particles::BulkAnimator::Update(
        (__int64)&v61,
        (__int64)v62,
        (__int64 *)&v60,
        (__int64 *)&v58,
        (__int64 *)&v59,
        v57);
      v5 = 1;
    }
    if ( v6 )
    {
      if ( !v5 )
      {
        for ( i = 0; i < *((_DWORD *)this + 338); *(_DWORD *)(v17 + 4 * v20 + 8) = v26.m128_i32[0] )
        {
          v17 = *((_QWORD *)this + 118);
          v18 = *((_QWORD *)this + 124);
          v19 = i++;
          v20 = 3 * v19;
          v21 = _mm_movelh_ps(
                  (__m128)*(unsigned __int64 *)(v17 + 12 * v19),
                  (__m128)*(unsigned int *)(v17 + 12 * v19 + 8));
          v22 = _mm_mul_ps(v21, v21);
          v23 = _mm_shuffle_ps(v22, v22, 102);
          v22.m128_f32[0] = v22.m128_f32[0] + v23.m128_f32[0];
          v24 = _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
          v25 = (__m128)*(unsigned int *)(v18 + 4 * v19);
          v22.m128_f32[0] = v22.m128_f32[0] + v24;
          v26 = _mm_div_ps(v21, _mm_sqrt_ps(_mm_shuffle_ps(v22, v22, 0)));
          v27 = v25;
          *(_QWORD *)&v58 = v26.m128_u64[0];
          v27.m128_f32[0] = v25.m128_f32[0] * v26.m128_f32[0];
          v25.m128_f32[0] = v25.m128_f32[0] * v26.m128_f32[1];
          v26.m128_f32[0] = _mm_shuffle_ps(v26, v26, 170).m128_f32[0] * *(float *)(v18 + 4 * v19);
          *(_QWORD *)(v17 + 4 * v20) = _mm_unpacklo_ps(v27, v25).m128_u64[0];
          DWORD2(v59) = v26.m128_i32[0];
        }
      }
    }
    v28 = (_QWORD *)*((_QWORD *)this + 108);
    v29 = v28[14];
    if ( v29 && *(_QWORD *)(v29 + 128) != *(_QWORD *)(v29 + 120) )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 896, v62, *(unsigned int *)(v29 + 80));
      *(_QWORD *)&v60 = *((_QWORD *)this + 115);
      *(_QWORD *)&v59 = *((_QWORD *)this + 145);
      v30 = *((_QWORD *)this + 108);
      *((_QWORD *)&v60 + 1) = 0x400000000LL;
      v31 = *(_QWORD *)(v30 + 112);
      v61 = v60;
      *((_QWORD *)&v59 + 1) = 0x400000000LL;
      v60 = v59;
      Particles::BulkAnimator::Update(
        (v31 + 112) & -(__int64)(v31 != 0),
        (__int64)v62,
        (__int64 *)&v60,
        (__int64 *)&v61,
        *((_DWORD *)this + 338));
      v28 = (_QWORD *)*((_QWORD *)this + 108);
    }
    v32 = v28[13];
    if ( v32 && (__int64)(*(_QWORD *)(v32 + 128) - *(_QWORD *)(v32 + 120)) >> 4 )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 896, v62, *(unsigned int *)(v32 + 80));
      *(_QWORD *)&v60 = *((_QWORD *)this + 121);
      *(_QWORD *)&v59 = *((_QWORD *)this + 157);
      v33 = *((_QWORD *)this + 108);
      *((_QWORD *)&v60 + 1) = 0x100000000LL;
      v34 = *(_QWORD *)(v33 + 104);
      v61 = v60;
      *((_QWORD *)&v59 + 1) = 0x100000000LL;
      v60 = v59;
      Particles::BulkAnimator::Update(
        (v34 + 112) & -(__int64)(v34 != 0),
        (__int64)v62,
        (__int64 *)&v60,
        (__int64 *)&v61,
        *((_DWORD *)this + 338));
      v28 = (_QWORD *)*((_QWORD *)this + 108);
    }
    v35 = v28[15];
    if ( v35 && *(_QWORD *)(v35 + 128) != *(_QWORD *)(v35 + 120) )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 896, v62, *(unsigned int *)(v35 + 80));
      *(_QWORD *)&v60 = *((_QWORD *)this + 127);
      *(_QWORD *)&v59 = *((_QWORD *)this + 160);
      v36 = *((_QWORD *)this + 108);
      *((_QWORD *)&v60 + 1) = 0x400000000LL;
      v37 = *(_QWORD *)(v36 + 120);
      v61 = v60;
      *((_QWORD *)&v59 + 1) = 0x400000000LL;
      v60 = v59;
      Particles::BulkAnimator::Update(
        (v37 + 112) & -(__int64)(v37 != 0),
        (__int64)v62,
        (__int64 *)&v60,
        (__int64 *)&v61,
        *((_DWORD *)this + 338));
      v28 = (_QWORD *)*((_QWORD *)this + 108);
    }
    v38 = v28[16];
    if ( v38 && (__int64)(*(_QWORD *)(v38 + 128) - *(_QWORD *)(v38 + 120)) >> 4 )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 896, v62, *(unsigned int *)(v38 + 80));
      *(_QWORD *)&v60 = *((_QWORD *)this + 127);
      *(_QWORD *)&v59 = *((_QWORD *)this + 160);
      v39 = *((_QWORD *)this + 108);
      *((_QWORD *)&v60 + 1) = 0x400000003LL;
      v40 = *(_QWORD *)(v39 + 128);
      v61 = v60;
      *((_QWORD *)&v59 + 1) = 0x400000003LL;
      v60 = v59;
      Particles::BulkAnimator::Update(
        (v40 + 112) & -(__int64)(v40 != 0),
        (__int64)v62,
        (__int64 *)&v60,
        (__int64 *)&v61,
        *((_DWORD *)this + 338));
      v28 = (_QWORD *)*((_QWORD *)this + 108);
    }
    v41 = v28[18];
    if ( v41 && *(_QWORD *)(v41 + 128) != *(_QWORD *)(v41 + 120) )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 896, v62, *(unsigned int *)(v41 + 80));
      *(_QWORD *)&v60 = *((_QWORD *)this + 133);
      *(_QWORD *)&v59 = *((_QWORD *)this + 166);
      v42 = *((_QWORD *)this + 108);
      *((_QWORD *)&v60 + 1) = 0x200000000LL;
      v43 = *(_QWORD *)(v42 + 144);
      v61 = v60;
      *((_QWORD *)&v59 + 1) = 0x200000000LL;
      v60 = v59;
      Particles::BulkAnimator::Update(
        (v43 + 112) & -(__int64)(v43 != 0),
        (__int64)v62,
        (__int64 *)&v60,
        (__int64 *)&v61,
        *((_DWORD *)this + 338));
      v28 = (_QWORD *)*((_QWORD *)this + 108);
    }
    v44 = v28[19];
    if ( v44 && *(_QWORD *)(v44 + 128) != *(_QWORD *)(v44 + 120) )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 896, v62, *(unsigned int *)(v44 + 80));
      *(_QWORD *)&v60 = *((_QWORD *)this + 130);
      *(_QWORD *)&v59 = *((_QWORD *)this + 163);
      v45 = *((_QWORD *)this + 108);
      *((_QWORD *)&v60 + 1) = 0x200000000LL;
      v46 = *(_QWORD *)(v45 + 152);
      v61 = v60;
      *((_QWORD *)&v59 + 1) = 0x200000000LL;
      v60 = v59;
      Particles::BulkAnimator::Update(
        (v46 + 112) & -(__int64)(v46 != 0),
        (__int64)v62,
        (__int64 *)&v60,
        (__int64 *)&v61,
        *((_DWORD *)this + 338));
      v28 = (_QWORD *)*((_QWORD *)this + 108);
    }
    v47 = v28[20];
    if ( v47 && (__int64)(*(_QWORD *)(v47 + 128) - *(_QWORD *)(v47 + 120)) >> 4 )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 896, v62, *(unsigned int *)(v47 + 80));
      *(_QWORD *)&v60 = *((_QWORD *)this + 136);
      *(_QWORD *)&v59 = *((_QWORD *)this + 139);
      v48 = *((_QWORD *)this + 108);
      *((_QWORD *)&v60 + 1) = 0x100000000LL;
      v49 = *(_QWORD *)(v48 + 160);
      v61 = v60;
      *((_QWORD *)&v59 + 1) = 0x100000000LL;
      v60 = v59;
      Particles::BulkAnimator::Update(
        (v49 + 112) & -(__int64)(v49 != 0),
        (__int64)v62,
        (__int64 *)&v60,
        (__int64 *)&v61,
        *((_DWORD *)this + 338));
      v28 = (_QWORD *)*((_QWORD *)this + 108);
    }
    v2 = v28[17];
    if ( v2 && *(_QWORD *)(v2 + 128) != *(_QWORD *)(v2 + 120) )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 896, v62, *(unsigned int *)(v2 + 80));
      v50 = *((_QWORD *)this + 108);
      *((_QWORD *)&v60 + 1) = 0x300000000LL;
      v51 = *(_QWORD *)(v50 + 136);
      *(_QWORD *)&v61 = &Particles::ForceAnimator::`vftable';
      v52 = v51 + 112;
      v53 = -v51;
      *((_QWORD *)&v61 + 1) = v52 & -(__int64)(v53 != 0);
      *(_QWORD *)&v60 = *((_QWORD *)this + 118);
      Particles::BulkAnimator::Update((__int64)&v61, v53, (__int64)v62, (__int64 *)&v60, *((_DWORD *)this + 338));
    }
  }
  v54 = (__int64 *)*((_QWORD *)this + 110);
  v55 = (__int64 *)*((_QWORD *)this + 109);
  if ( v55 != v54 )
  {
    *((_QWORD *)&v60 + 1) = 0x300000000LL;
    *((_QWORD *)&v59 + 1) = 0x300000000LL;
    do
    {
      v56 = *v55;
      *(_QWORD *)&v60 = *((_QWORD *)this + 118);
      *(_QWORD *)&v59 = *((_QWORD *)this + 112);
      v61 = v59;
      *(_OWORD *)v62 = v60;
      Particles::BulkAnimator::Update(
        (v56 + 88) & -(__int64)(v56 != 0),
        v2,
        (__int64)&v61,
        v62,
        *((_DWORD *)this + 338));
      ++v55;
    }
    while ( v55 != v54 );
  }
}
