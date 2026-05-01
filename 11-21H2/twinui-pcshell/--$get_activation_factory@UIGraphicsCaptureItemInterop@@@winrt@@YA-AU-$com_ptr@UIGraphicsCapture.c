/*
 * XREFs of ??$get_activation_factory@UIGraphicsCaptureItemInterop@@@winrt@@YA?AU?$com_ptr@UIGraphicsCaptureItemInterop@@@0@AEBUhstring@param@0@@Z @ 0x18053CBE0
 * Callers:
 *     ??$call@AEAV_lambda_2c048fadf96b8b63389f9249f9153b42_@@@?$factory_cache_entry@UGraphicsCaptureItem@Capture@Graphics@Windows@winrt@@UIGraphicsCaptureItemInterop@@@impl@winrt@@QEAA?AU?$com_ptr@UIGraphicsCaptureItemInterop@@@2@AEAV_lambda_2c048fadf96b8b63389f9249f9153b42_@@@Z @ 0x18053CAB4 (--$call@AEAV_lambda_2c048fadf96b8b63389f9249f9153b42_@@@-$factory_cache_entry@UGraphicsCaptureIt.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UIGraphicsCaptureItemInterop@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18053CC24 (--$get_runtime_activation_factory@UIGraphicsCaptureItemInterop@@@impl@winrt@@YA-AUhresult@1@AEBU.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<IGraphicsCaptureItemInterop>(_QWORD *a1, __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<IGraphicsCaptureItemInterop>(&v5, a2, &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
