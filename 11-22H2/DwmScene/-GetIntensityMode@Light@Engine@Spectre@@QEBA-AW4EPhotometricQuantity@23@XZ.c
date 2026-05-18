/*
 * XREFs of ?GetIntensityMode@Light@Engine@Spectre@@QEBA?AW4EPhotometricQuantity@23@XZ @ 0x180043270
 * Callers:
 *     ?UpdateLightConstants@LightGatherer@Engine@Spectre@@CA?AV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@std@@AEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@@Z @ 0x1800A4764 (-UpdateLightConstants@LightGatherer@Engine@Spectre@@CA-AV-$array@V-$shared_ptr@$$CBVShadowMapCam.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Light::GetIntensityMode(__int64 a1)
{
  return *(unsigned int *)(a1 + 108);
}
