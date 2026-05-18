/*
 * XREFs of ?Resample@ColorTransform@Engine@Spectre@@QEAAX_K@Z @ 0x180090EDC
 * Callers:
 *     ?Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009003C (-Import@ColorTransform@Engine@Spectre@@QEAAXPEBX_KAEBV-$basic_string@DU-$char_traits@D@std@@V-$a.c)
 * Callees:
 *     std::_Test_callable__lambda_e4386f35b8603616d8ddd0087d6df351___ @ 0x18008F3A4 (std--_Test_callable__lambda_e4386f35b8603616d8ddd0087d6df351___.c)
 *     ?Generate@ColorTransform@Engine@Spectre@@QEAAX_KV?$function@$$A6A?AUColor@Math@Utils@Spectre@@U1234@@Z@std@@@Z @ 0x18008FD48 (-Generate@ColorTransform@Engine@Spectre@@QEAAX_KV-$function@$$A6A-AUColor@Math@Utils@Spectre@@U1.c)
 */

void __fastcall Spectre::Engine::ColorTransform::Resample(Spectre::Engine::ColorTransform *this)
{
  __int64 v1; // rdx
  Spectre::Engine::ColorTransform *v2; // rcx
  _QWORD v3[7]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v4; // [rsp+58h] [rbp-10h]

  if ( *((_QWORD *)this + 17) != 8LL )
  {
    v4 = 0LL;
    if ( std::_Test_callable__lambda_e4386f35b8603616d8ddd0087d6df351___() )
    {
      v3[1] = v2;
      v3[0] = &std::_Func_impl_no_alloc<_lambda_e4386f35b8603616d8ddd0087d6df351_,Spectre::Utils::Math::Color,Spectre::Utils::Math::Color>::`vftable';
      v4 = v3;
    }
    Spectre::Engine::ColorTransform::Generate(v2, v1, (__int64)v3);
  }
}
