/*
 * XREFs of ?Create@DeviceConstantBuffer@Engine@Spectre@@UEAA_NPEBXIW4Usage@23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x18009BC90
 * Callers:
 *     ?Create@ConstantBufferD3D11@D3D11@Engine@Spectre@@UEAA_NPEBXIW4Usage@34@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800D7170 (-Create@ConstantBufferD3D11@D3D11@Engine@Spectre@@UEAA_NPEBXIW4Usage@34@AEBV-$basic_string@DU-$c.c)
 * Callees:
 *     <none>
 */

char __fastcall Spectre::Engine::DeviceConstantBuffer::Create(__int64 a1, __int64 a2, int a3)
{
  if ( !a3 )
    return 0;
  *(_DWORD *)(a1 + 96) = a3;
  return 1;
}
