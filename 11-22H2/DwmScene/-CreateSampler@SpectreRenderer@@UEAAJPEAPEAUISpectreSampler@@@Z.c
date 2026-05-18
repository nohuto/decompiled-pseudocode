/*
 * XREFs of ?CreateSampler@SpectreRenderer@@UEAAJPEAPEAUISpectreSampler@@@Z @ 0x180018570
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@XZ @ 0x1800161AC (--$CreateResource@VSampler@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ptr_ea_1800161AC.c)
 *     ??$MakeAndInitialize@VSpectreSampler@@V1@AEAV?$shared_ptr@VSampler@Engine@Spectre@@@std@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreSampler@@@WRL@Microsoft@@@012@AEAV?$shared_ptr@VSampler@Engine@Spectre@@@std@@@Z @ 0x18001690C (--$MakeAndInitialize@VSpectreSampler@@V1@AEAV-$shared_ptr@VSampler@Engine@Spectre@@_ea_18001690C.c)
 */

__int64 __fastcall SpectreRenderer::CreateSampler(SpectreRenderer *this, struct ISpectreSampler **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct ISpectreSampler *v6; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct ISpectreSampler *v10; // [rsp+40h] [rbp+8h] BYREF

  Spectre::Engine::Engine::CreateResource<Spectre::Engine::Sampler,>(*((_QWORD *)this + 7), &v7);
  v10 = 0LL;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<SpectreSampler,SpectreSampler,std::shared_ptr<Spectre::Engine::Sampler> &>(
         (__int64 *)&v10,
         (__int64)&v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = v10;
    v10 = 0LL;
    *a2 = v6;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x169,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (const char *)(unsigned int)v3);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    return v4;
  }
}
