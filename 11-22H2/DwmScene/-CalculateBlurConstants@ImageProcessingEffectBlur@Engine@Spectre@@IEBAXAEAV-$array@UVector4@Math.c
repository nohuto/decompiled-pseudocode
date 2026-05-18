/*
 * XREFs of ?CalculateBlurConstants@ImageProcessingEffectBlur@Engine@Spectre@@IEBAXAEAV?$array@UVector4@Math@Utils@Spectre@@$0BA@@std@@0MM@Z @ 0x18009C688
 * Callers:
 *     ?Render@ImageProcessingEffectBlur@Engine@Spectre@@UEAA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAVRenderDevice@23@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV45@@Z @ 0x18009CCA0 (-Render@ImageProcessingEffectBlur@Engine@Spectre@@UEAA-AV-$shared_ptr@VTexture@Engine@Spectre@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ?Clamp@Math@Utils@Spectre@@YAMMMM@Z @ 0x18001112C (-Clamp@Math@Utils@Spectre@@YAMMMM@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002945C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??$?4P6AMM@Z$0A@@?$function@$$A6AMM@Z@std@@QEAAAEAV01@$$QEAP6AMM@Z@Z @ 0x18009BCA8 (--$-4P6AMM@Z$0A@@-$function@$$A6AMM@Z@std@@QEAAAEAV01@$$QEAP6AMM@Z@Z.c)
 *     ??$fill@V?$_Array_iterator@M$0CA@@std@@M@std@@YAXV?$_Array_iterator@M$0CA@@0@0AEBM@Z @ 0x18009BD98 (--$fill@V-$_Array_iterator@M$0CA@@std@@M@std@@YAXV-$_Array_iterator@M$0CA@@0@0AEBM@Z.c)
 *     ??4?$array@UVector4@Math@Utils@Spectre@@$0BA@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009C0C4 (--4-$array@UVector4@Math@Utils@Spectre@@$0BA@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::ImageProcessingEffectBlur::CalculateBlurConstants(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        float a4,
        float a5)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r14
  int v11; // ecx
  int v12; // ecx
  Spectre::Utils::Math *v13; // rcx
  float (__fastcall *v14)(float); // rax
  int v15; // esi
  __int64 v16; // rdi
  float v17; // xmm6_4
  float v18; // xmm2_4
  float v19; // xmm1_4
  float *v20; // rax
  __int64 v21; // r10
  __int64 v22; // rcx
  float *v23; // rax
  float v24; // xmm1_4
  float v25; // xmm0_4
  __int64 v26; // r10
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v30[2]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v31[56]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-98h]
  _DWORD v33[32]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v34[64]; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v35[64]; // [rsp+1F8h] [rbp+F0h] BYREF
  char v36[4]; // [rsp+2F8h] [rbp+1F0h] BYREF
  char v37; // [rsp+2FCh] [rbp+1F4h] BYREF

  v8 = *(int *)(a1 + 372);
  v9 = *(_DWORD *)(a1 + 372) / 2;
  v10 = 16LL;
  `vector constructor iterator'(
    (char *)v34,
    16LL,
    16LL,
    (void (__fastcall *)(char *))Spectre::Utils::Math::Vector4::Vector4);
  `vector constructor iterator'(
    (char *)v35,
    16LL,
    16LL,
    (void (__fastcall *)(char *))Spectre::Utils::Math::Vector4::Vector4);
  memset_0(v33, 0, sizeof(v33));
  v32 = 0LL;
  v11 = *(_DWORD *)(a1 + 368);
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = (Spectre::Utils::Math *)(unsigned int)(v12 - 1);
      if ( (_DWORD)v13 )
      {
        if ( (_DWORD)v13 != 1 )
          goto LABEL_10;
        v14 = Spectre::Engine::ImageProcessingEffectBlur::CalculateKernel_CosineWeight;
      }
      else
      {
        v14 = Spectre::Engine::ImageProcessingEffectBlur::CalculateKernel_GaussianWeight;
      }
    }
    else
    {
      v14 = Spectre::Engine::ImageProcessingEffectBlur::CalculateKernel_UniformWeight;
    }
  }
  else
  {
    v14 = Spectre::Engine::ImageProcessingEffectBlur::CalculateKernel_IdentityWeight;
  }
  v30[0] = (__int64)v14;
  std::function<float (float)>::operator=<float (*)(float),0>((__int64)v31, v30);
LABEL_10:
  if ( *(_DWORD *)(a1 + 368) )
  {
    v15 = 0;
    if ( (int)v8 > 0 )
    {
      v10 = v8;
      v16 = 0LL;
      v17 = FLOAT_1_0;
      do
      {
        v18 = FLOAT_1_0;
        v19 = FLOAT_N1_0;
        LODWORD(v30[0]) = Spectre::Utils::Math::Clamp(v13, -1.0, 1.0, a4);
        if ( !v32 )
        {
          std::_Xbad_function_call();
          __debugbreak();
          goto LABEL_24;
        }
        *(float *)&v33[v16] = (*(float (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 16LL))(v32, v30);
        ++v15;
        ++v16;
      }
      while ( v16 < v10 );
      v10 = 16LL;
    }
  }
  else
  {
    LODWORD(v30[0]) = 0;
    std::fill<std::_Array_iterator<float,32>,float>((__int64)v33, (__int64)v34, v30);
    v33[v9] = 1065353216;
  }
  v17 = 0.0;
  v20 = (float *)v33;
  do
    v17 = v17 + *v20++;
  while ( v20 != (float *)v34 );
  `vector constructor iterator'(v36, 16LL, 16LL, (void (__fastcall *)(char *))Spectre::Utils::Math::Vector4::Vector4);
  v21 = v9;
  if ( (int)v9 > 0 )
  {
    v22 = 0LL;
    v23 = (float *)&v37;
    LODWORD(v9) = -(int)v9;
    do
    {
      v19 = *(float *)&v33[2 * v22 + 1];
      v18 = v19 + *(float *)&v33[2 * v22];
      if ( v18 == 0.0 )
        v24 = FLOAT_0_5;
      else
LABEL_24:
        v24 = v19 / v18;
      v25 = (float)(int)v9 + v24;
      *(v23 - 1) = v25;
      *v23 = v25;
      v23[2] = v18;
      LODWORD(v9) = v9 + 2;
      ++v22;
      v23 = (float *)((char *)v23 + v10);
    }
    while ( v22 < v21 );
  }
  std::array<Spectre::Utils::Math::Vector4,16>::operator=((__int64)v34, (__int64)v36);
  std::array<Spectre::Utils::Math::Vector4,16>::operator=((__int64)v35, (__int64)v36);
  if ( v26 > 0 )
  {
    v27 = 0LL;
    do
    {
      *(float *)((char *)v34 + v27) = *(float *)((char *)v34 + v27) / a4;
      *(_DWORD *)((char *)&v34[1] + v27) = 0;
      *(float *)((char *)&v34[3] + v27) = *(float *)((char *)&v34[3] + v27) / v17;
      *(_DWORD *)((char *)v35 + v27) = 0;
      *(float *)((char *)&v35[1] + v27) = *(float *)((char *)&v35[1] + v27) / a5;
      *(float *)((char *)&v35[3] + v27) = *(float *)((char *)&v35[3] + v27) / v17;
      v27 += v10;
      --v26;
    }
    while ( v26 );
  }
  std::array<Spectre::Utils::Math::Vector4,16>::operator=(a2, (__int64)v34);
  std::array<Spectre::Utils::Math::Vector4,16>::operator=(a3, (__int64)v35);
  return std::_Func_class<void,>::_Tidy((__int64)v31, v28);
}
