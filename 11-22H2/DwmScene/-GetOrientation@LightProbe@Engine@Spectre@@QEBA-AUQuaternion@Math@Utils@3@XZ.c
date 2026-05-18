/*
 * XREFs of ?GetOrientation@LightProbe@Engine@Spectre@@QEBA?AUQuaternion@Math@Utils@3@XZ @ 0x180051B44
 * Callers:
 *     ?UpdateProbeConstants@LightGatherer@Engine@Spectre@@CA?AV?$shared_ptr@$$CBVLightProbe@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@@Z @ 0x1800A4F20 (-UpdateProbeConstants@LightGatherer@Engine@Spectre@@CA-AV-$shared_ptr@$$CBVLightProbe@Engine@Spe.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall Spectre::Engine::LightProbe::GetOrientation(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax

  result = a2;
  *a2 = *(_OWORD *)(a1 + 92);
  return result;
}
