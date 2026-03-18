/*
 * XREFs of ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x180230098
 * Callers:
 *     ?EmitParticles@CParticleEmitterVisual@@IEAAJMAEBUD2D_SIZE_F@@@Z @ 0x18022EB9C (-EmitParticles@CParticleEmitterVisual@@IEAAJMAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18022B7F8 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ??$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x18022B8E4 (--$_Emplace_reallocate@AEBUfloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Founda.c)
 *     ??$_Emplace_reallocate@AEBUfloat3@Numerics@Foundation@Windows@@@?$vector@Ufloat3@Numerics@Foundation@Windows@@V?$allocator@Ufloat3@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat3@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x18022B9D8 (--$_Emplace_reallocate@AEBUfloat3@Numerics@Foundation@Windows@@@-$vector@Ufloat3@Numerics@Founda.c)
 *     ??$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat4@Numerics@Foundation@Windows@@QEAU2345@AEBU2345@@Z @ 0x18022BB28 (--$_Emplace_reallocate@AEBUfloat4@Numerics@Foundation@Windows@@@-$vector@Ufloat4@Numerics@Founda.c)
 *     ??$_Emplace_reallocate@M@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z @ 0x18022BD54 (--$_Emplace_reallocate@M@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAM$$QEAM@Z.c)
 *     ??$_Emplace_reallocate@Ufloat2@Numerics@Foundation@Windows@@@?$vector@Ufloat2@Numerics@Foundation@Windows@@V?$allocator@Ufloat2@Numerics@Foundation@Windows@@@std@@@std@@QEAAPEAUfloat2@Numerics@Foundation@Windows@@QEAU2345@$$QEAU2345@@Z @ 0x18022BE40 (--$_Emplace_reallocate@Ufloat2@Numerics@Foundation@Windows@@@-$vector@Ufloat2@Numerics@Foundatio.c)
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x18022CC28 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x18022EC94 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 *     ?GetRandomDirection@CParticleGenerator@@QEBA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180231004 (-GetRandomDirection@CParticleGenerator@@QEBA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenn.c)
 *     ?GetRandomOrientation@CParticleGenerator@@QEBA?AUfloat4@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180231060 (-GetRandomOrientation@CParticleGenerator@@QEBA-AUfloat4@Numerics@Foundation@Windows@@AEAV-$merse.c)
 *     ?GetRandomSize@CParticleGenerator@@QEBA?AUfloat2@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180231178 (-GetRandomSize@CParticleGenerator@@QEBA-AUfloat2@Numerics@Foundation@Windows@@AEAV-$mersenne_twi.c)
 *     ?GetRandomTint@CParticleGenerator@@QEBA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180231254 (-GetRandomTint@CParticleGenerator@@QEBA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenne_twi.c)
 *     ?GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180243110 (-GetRealization@CViewBox@@UEBAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::SpawnParticles(
        const void **this,
        unsigned int a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v5; // r14
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  CViewBox *v10; // rcx
  float m11; // xmm6_4
  float m12; // xmm7_4
  float m21; // xmm8_4
  float m22; // xmm9_4
  float dx; // xmm10_4
  float dy; // xmm11_4
  __int64 v17; // r15
  float v18; // xmm1_4
  float v19; // xmm2_4
  _DWORD *v20; // rdx
  __int64 v21; // xmm1_8
  int v22; // eax
  _DWORD *v23; // rdx
  __int64 v24; // r14
  _BYTE *v25; // rdx
  __int128 v26; // xmm0
  _BYTE *v27; // rdx
  __int64 v28; // r12
  float *v29; // rax
  float v30; // xmm7_4
  float v31; // xmm6_4
  float v32; // xmm0_4
  float *v33; // rdx
  float v34; // xmm8_4
  float *v35; // rdx
  FLOAT *v36; // rdx
  FLOAT v37; // eax
  _DWORD *v38; // rdx
  __int64 v39; // xmm1_8
  int v40; // eax
  _DWORD *v41; // rdx
  __int64 v42; // r15
  __int64 v43; // rdi
  float *v44; // rax
  float v45; // xmm7_4
  float v46; // xmm6_4
  float v47; // xmm0_4
  float *v48; // rdx
  float v49; // xmm0_4
  float *v50; // rdx
  __int64 v51; // r14
  float *v52; // rax
  float v53; // xmm7_4
  float v54; // xmm6_4
  float v55; // xmm0_4
  _BYTE *v56; // rdx
  __int128 v57; // xmm0
  _BYTE *v58; // rdx
  __int64 v59; // r14
  _BYTE *v60; // rdx
  __int64 v61; // xmm0_8
  _BYTE *v62; // rdx
  __int64 v63; // r14
  _BYTE *v64; // rdx
  _BYTE *v65; // rdx
  float *v66; // rax
  float v67; // xmm7_4
  float v68; // xmm6_4
  float v69; // xmm0_4
  _BYTE *v70; // rdx
  float *v71; // rdx
  __int64 v72; // [rsp+38h] [rbp-79h] BYREF
  int v73; // [rsp+40h] [rbp-71h]
  __int128 v74; // [rsp+48h] [rbp-69h] BYREF
  struct D2D_MATRIX_3X2_F v75; // [rsp+58h] [rbp-59h] BYREF
  __int64 v77; // [rsp+130h] [rbp+7Fh] BYREF

  v5 = a2;
  v6 = CParticleEmitterVisual::EnsureSpawner((CParticleEmitterVisual *)this);
  v73 = v6;
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x25Du);
  }
  else
  {
    if ( !this[107] )
      return 0LL;
    v10 = (CViewBox *)this[106];
    if ( v10 )
    {
      CViewBox::GetRealization(v10, a3, &v75);
      m11 = v75.m11;
      m12 = v75.m12;
      m21 = v75.m21;
      m22 = v75.m22;
      dx = v75.dx;
      dy = v75.dy;
    }
    else
    {
      dy = *(float *)&v77;
      dx = *(float *)&v77;
      m22 = *(float *)&v77;
      m21 = *(float *)&v77;
      m12 = *(float *)&v77;
      m11 = *(float *)&v77;
    }
    if ( (int)v5 > 0 )
    {
      v72 = v5;
      v17 = v5;
      do
      {
        (**(void (__fastcall ***)(const void *, __int64 *, char *))this[803])(this[803], &v77, (char *)this + 1412);
        if ( this[106] )
        {
          v18 = (float)((float)(m21 * *((float *)&v77 + 1)) + (float)(m11 * *(float *)&v77)) + dx;
          v19 = (float)((float)(m22 * *((float *)&v77 + 1)) + (float)(m12 * *(float *)&v77)) + dy;
          *(float *)&v77 = v18;
          *((float *)&v77 + 1) = v19;
        }
        else
        {
          v19 = *((float *)&v77 + 1);
          v18 = *(float *)&v77;
        }
        v20 = this[113];
        *(float *)&v74 = v18;
        *(_QWORD *)((char *)&v74 + 4) = LODWORD(v19);
        if ( v20 == this[114] )
        {
          std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
            this + 112,
            v20,
            (__int64)&v74);
          v22 = DWORD2(v74);
          v21 = v74;
        }
        else
        {
          v21 = v74;
          v22 = DWORD2(v74);
          *(_QWORD *)v20 = v74;
          v20[2] = v22;
          this[113] = (char *)this[113] + 12;
        }
        v23 = this[143];
        if ( v23 == this[144] )
        {
          std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
            this + 142,
            v23,
            (__int64)&v74);
        }
        else
        {
          *(_QWORD *)v23 = v21;
          v23[2] = v22;
          this[143] = (char *)this[143] + 12;
        }
        --v5;
      }
      while ( v5 );
      v24 = v17;
      do
      {
        CParticleGenerator::GetRandomOrientation(this[107], &v75, (char *)this + 1412);
        v25 = this[116];
        if ( v25 == this[117] )
        {
          std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
            this + 115,
            v25,
            &v75);
          v26 = *(_OWORD *)&v75.m11;
        }
        else
        {
          v26 = *(_OWORD *)&v75.m11;
          *(_OWORD *)v25 = *(_OWORD *)&v75.m11;
          this[116] = (char *)this[116] + 16;
        }
        v27 = this[146];
        if ( v27 == this[147] )
        {
          std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
            this + 145,
            v27,
            &v75);
        }
        else
        {
          *(_OWORD *)v27 = v26;
          this[146] = (char *)this[146] + 16;
        }
        --v24;
      }
      while ( v24 );
      v28 = v17;
      do
      {
        CParticleGenerator::GetRandomDirection(this[107], &v75, (char *)this + 1412);
        v29 = (float *)this[107];
        v30 = v29[27];
        v31 = v29[28];
        v32 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 1412);
        v33 = (float *)this[125];
        v34 = (float)(v32 * (float)(v31 - v30)) + v30;
        *(float *)&v77 = v34;
        if ( v33 == this[126] )
        {
          std::vector<float>::_Emplace_reallocate<float const &>(this + 124, v33, &v77);
          v34 = *(float *)&v77;
        }
        else
        {
          *v33 = v34;
          this[125] = v33 + 1;
        }
        v35 = (float *)this[149];
        if ( v35 == this[150] )
        {
          std::vector<float>::_Emplace_reallocate<float const &>(this + 148, v35, &v77);
          v34 = *(float *)&v77;
        }
        else
        {
          *v35 = v34;
          this[149] = v35 + 1;
        }
        v36 = (FLOAT *)this[152];
        if ( v36 == this[153] )
        {
          std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
            this + 151,
            v36,
            (__int64)&v75);
        }
        else
        {
          v37 = v75.m21;
          *(_QWORD *)v36 = *(_QWORD *)&v75.m11;
          v36[2] = v37;
          this[152] = (char *)this[152] + 12;
        }
        v38 = this[155];
        *(float *)&v74 = v75.m11 * v34;
        *((float *)&v74 + 1) = v75.m12 * v34;
        *((float *)&v74 + 2) = v75.m21 * v34;
        if ( v38 == this[156] )
        {
          std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
            this + 154,
            v38,
            (__int64)&v74);
          v40 = DWORD2(v74);
          v39 = v74;
        }
        else
        {
          v39 = v74;
          v40 = DWORD2(v74);
          *(_QWORD *)v38 = v74;
          v38[2] = v40;
          this[155] = (char *)this[155] + 12;
        }
        v41 = this[119];
        if ( v41 == this[120] )
        {
          std::vector<Windows::Foundation::Numerics::float3>::_Emplace_reallocate<Windows::Foundation::Numerics::float3 const &>(
            this + 118,
            v41,
            (__int64)&v74);
        }
        else
        {
          *(_QWORD *)v41 = v39;
          v41[2] = v40;
          this[119] = (char *)this[119] + 12;
        }
        --v28;
      }
      while ( v28 );
      v42 = v72;
      v43 = v72;
      do
      {
        v44 = (float *)this[107];
        v45 = v44[29];
        v46 = v44[30];
        v47 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 1412);
        v48 = (float *)this[158];
        v49 = (float)(v47 * (float)(v46 - v45)) + v45;
        *(float *)&v77 = v49;
        if ( v48 == this[159] )
        {
          std::vector<float>::_Emplace_reallocate<float const &>(this + 157, v48, &v77);
          v49 = *(float *)&v77;
        }
        else
        {
          *v48 = v49;
          this[158] = v48 + 1;
        }
        v50 = (float *)this[122];
        if ( v50 == this[123] )
        {
          std::vector<float>::_Emplace_reallocate<float const &>(this + 121, v50, &v77);
        }
        else
        {
          *v50 = v49;
          this[122] = v50 + 1;
        }
        --v43;
      }
      while ( v43 );
      v51 = v42;
      do
      {
        v52 = (float *)this[107];
        v53 = v52[47];
        v54 = v52[48];
        v55 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 1412);
        CParticleGenerator::GetRandomTint(this[107], &v75, (char *)this + 1412);
        v56 = this[161];
        *(_QWORD *)&v74 = *(_QWORD *)&v75.m11;
        DWORD2(v74) = LODWORD(v75.m21);
        *((float *)&v74 + 3) = (float)(v55 * (float)(v54 - v53)) + v53;
        if ( v56 == this[162] )
        {
          std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
            this + 160,
            v56,
            &v74);
          v57 = v74;
        }
        else
        {
          v57 = v74;
          *(_OWORD *)v56 = v74;
          this[161] = (char *)this[161] + 16;
        }
        v58 = this[128];
        if ( v58 == this[129] )
        {
          std::vector<Windows::Foundation::Numerics::float4>::_Emplace_reallocate<Windows::Foundation::Numerics::float4 const &>(
            this + 127,
            v58,
            &v74);
        }
        else
        {
          *(_OWORD *)v58 = v57;
          this[128] = (char *)this[128] + 16;
        }
        --v51;
      }
      while ( v51 );
      v59 = v42;
      do
      {
        CParticleGenerator::GetRandomSize(this[107], &v77, (char *)this + 1412);
        v60 = this[131];
        if ( v60 == this[132] )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
            this + 130,
            v60,
            &v77);
          v61 = v77;
        }
        else
        {
          v61 = v77;
          *(_QWORD *)v60 = v77;
          this[131] = (char *)this[131] + 8;
        }
        v62 = this[164];
        if ( v62 == this[165] )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2 const &>(
            this + 163,
            v62,
            &v77);
        }
        else
        {
          *(_QWORD *)v62 = v61;
          this[164] = (char *)this[164] + 8;
        }
        --v59;
      }
      while ( v59 );
      v63 = v42;
      do
      {
        v64 = this[134];
        v77 = 0x3F8000003F800000LL;
        if ( v64 == this[135] )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2>(
            this + 133,
            v64,
            &v77);
        }
        else
        {
          *(_QWORD *)v64 = v77;
          this[134] = (char *)this[134] + 8;
        }
        v65 = this[167];
        v72 = 0x3F8000003F800000LL;
        if ( v65 == this[168] )
        {
          std::vector<Windows::Foundation::Numerics::float2>::_Emplace_reallocate<Windows::Foundation::Numerics::float2>(
            this + 166,
            v65,
            &v72);
        }
        else
        {
          *(_QWORD *)v65 = v72;
          this[167] = (char *)this[167] + 8;
        }
        --v63;
      }
      while ( v63 );
      do
      {
        v66 = (float *)this[107];
        v67 = v66[56];
        v68 = v66[57];
        v69 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>((__int64)this + 1412);
        LODWORD(v77) = 0;
        v70 = this[137];
        *(float *)&v72 = (float)(v69 * (float)(v68 - v67)) + v67;
        if ( v70 == this[138] )
        {
          std::vector<float>::_Emplace_reallocate<float>(this + 136, v70, &v77);
        }
        else
        {
          *(_DWORD *)v70 = 0;
          this[137] = v70 + 4;
        }
        v71 = (float *)this[140];
        if ( v71 == this[141] )
        {
          std::vector<float>::_Emplace_reallocate<float const &>(this + 139, v71, &v72);
        }
        else
        {
          *v71 = (float)(v69 * (float)(v68 - v67)) + v67;
          this[140] = v71 + 1;
        }
        --v42;
      }
      while ( v42 );
      v8 = v73;
      LODWORD(v5) = a2;
    }
    *((_DWORD *)this + 338) += v5;
  }
  return v8;
}
