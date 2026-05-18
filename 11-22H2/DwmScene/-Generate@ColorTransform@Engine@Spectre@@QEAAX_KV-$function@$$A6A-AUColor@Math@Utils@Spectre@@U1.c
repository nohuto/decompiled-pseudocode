/*
 * XREFs of ?Generate@ColorTransform@Engine@Spectre@@QEAAX_KV?$function@$$A6A?AUColor@Math@Utils@Spectre@@U1234@@Z@std@@@Z @ 0x18008FD48
 * Callers:
 *     ?Resample@ColorTransform@Engine@Spectre@@QEAAX_K@Z @ 0x180090EDC (-Resample@ColorTransform@Engine@Spectre@@QEAAX_K@Z.c)
 *     ?ResetToSize@ColorTransform@Engine@Spectre@@QEAAX_K@Z @ 0x180090F2C (-ResetToSize@ColorTransform@Engine@Spectre@@QEAAX_K@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@V?$allocator@U?$pair@PEBVMutex@Engine@Spectre@@_N@std@@@2@@std@@AEAAXXZ @ 0x18002A47C (-_Tidy@-$vector@U-$pair@PEBVMutex@Engine@Spectre@@_N@std@@V-$allocator@U-$pair@PEBVMutex@Engine@.c)
 *     ??$_Construct_n@$$V@?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@AEAAX_K@Z @ 0x18008EFD8 (--$_Construct_n@$$V@-$vector@UColor@Math@Utils@Spectre@@V-$allocator@UColor@Math@Utils@Spectre@@.c)
 *     ?CreateTexture@ColorTransform@Engine@Spectre@@AEAAXXZ @ 0x18008F910 (-CreateTexture@ColorTransform@Engine@Spectre@@AEAAXXZ.c)
 *     ?SetVolumeData@ColorTransform@Engine@Spectre@@AEAAX_KAEBV?$vector@UColor@Math@Utils@Spectre@@V?$allocator@UColor@Math@Utils@Spectre@@@std@@@std@@W4NormalizationMode@123@@Z @ 0x180090F94 (-SetVolumeData@ColorTransform@Engine@Spectre@@AEAAX_KAEBV-$vector@UColor@Math@Utils@Spectre@@V-$.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::ColorTransform::Generate(
        Spectre::Engine::ColorTransform *this,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __m128 v13; // [rsp+20h] [rbp-50h] BYREF
  __int128 v14; // [rsp+30h] [rbp-40h]
  __int128 v15; // [rsp+40h] [rbp-30h] BYREF
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+60h] [rbp-10h]

  v16 = 0LL;
  v17 = 0LL;
  std::vector<Spectre::Utils::Math::Color>::_Construct_n<>(&v16, a2);
  v5 = 0LL;
  *((float *)&v14 + 3) = FLOAT_1_0;
  do
  {
    v6 = 0LL;
    *((float *)&v14 + 2) = (float)(int)v5 * 0.14285715;
    v7 = v5 << 10;
    do
    {
      v8 = 0LL;
      *((float *)&v14 + 1) = (float)(int)v6 * 0.14285715;
      v9 = v7;
      do
      {
        *(float *)&v14 = (float)(int)v8 * 0.14285715;
        v15 = v14;
        v10 = *(_QWORD *)(a3 + 56);
        if ( !v10 )
        {
          std::_Xbad_function_call();
          JUMPOUT(0x18008FF65LL);
        }
        (*(void (__fastcall **)(__int64, __m128 *, __int128 *))(*(_QWORD *)v10 + 16LL))(v10, &v13, &v15);
        v13 = _mm_min_ps(_mm_max_ps(v13, DirectX::g_XMZero), DirectX::g_XMOne);
        *(__m128 *)(v16 + v9) = v13;
        ++v8;
        v9 += 16LL;
      }
      while ( v8 < 8 );
      ++v6;
      v7 += 128LL;
    }
    while ( v6 < 8 );
    ++v5;
  }
  while ( v5 < 8 );
  Spectre::Engine::ColorTransform::SetVolumeData(this, 8LL, &v16);
  Spectre::Engine::ColorTransform::CreateTexture(this);
  std::vector<std::pair<Spectre::Engine::Mutex const *,bool>>::_Tidy((__int64)&v16);
  v12 = *(_QWORD *)(a3 + 56);
  if ( v12 )
  {
    LOBYTE(v11) = v12 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v11);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
}
