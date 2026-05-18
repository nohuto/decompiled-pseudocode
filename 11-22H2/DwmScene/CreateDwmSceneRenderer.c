/*
 * XREFs of CreateDwmSceneRenderer @ 0x1800105F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VSpectreRenderer@@V1@AEBUDwmSceneRendererDesc@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSpectreRenderer@@@WRL@Microsoft@@@012@AEBUDwmSceneRendererDesc@@@Z @ 0x1800100B8 (--$MakeAndInitialize@VSpectreRenderer@@V1@AEBUDwmSceneRendererDesc@@@Details@WRL@Microsoft@@YAJV.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateDwmSceneRenderer(const struct DwmSceneRendererDesc *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v11)(_QWORD, __int64, __int64); // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    if ( !*(_QWORD *)a1 )
    {
      v5 = -2147024809;
      v6 = 21LL;
      goto LABEL_3;
    }
    if ( SpectreRenderer::s_pInstance )
    {
      v5 = -2147418113;
      v6 = 24LL;
      goto LABEL_3;
    }
    v11 = 0LL;
    v7 = Microsoft::WRL::Details::MakeAndInitialize<SpectreRenderer,SpectreRenderer,DwmSceneRendererDesc const &>(
           (__int64 *)&v11,
           a1);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v7 = (**v11)(v11, a2, a3);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v5 = 0;
        goto LABEL_14;
      }
      v8 = 31LL;
    }
    else
    {
      v8 = 29LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\dwmsceneapi.cpp",
      (const char *)(unsigned int)v7);
LABEL_14:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v11);
    return v5;
  }
  v5 = -2147467261;
  v6 = 20LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\dwmsceneapi.cpp",
    (const char *)v5);
  return v5;
}
