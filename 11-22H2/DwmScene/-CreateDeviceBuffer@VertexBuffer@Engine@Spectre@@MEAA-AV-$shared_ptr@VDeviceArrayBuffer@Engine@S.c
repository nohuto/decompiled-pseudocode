/*
 * XREFs of ?CreateDeviceBuffer@VertexBuffer@Engine@Spectre@@MEAA?AV?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@AEAVRenderDevice@23@@Z @ 0x1800897F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CreateResource@VDeviceVertexBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA?AV?$shared_ptr@VDeviceVertexBuffer@Engine@Spectre@@@std@@XZ @ 0x180089034 (--$CreateResource@VDeviceVertexBuffer@Engine@Spectre@@@RenderDevice@Engine@Spectre@@QEAA-AV-$sha.c)
 *     ?SetAttribute@DeviceVertexBuffer@Engine@Spectre@@QEAAXW4Attribute@123@@Z @ 0x180089850 (-SetAttribute@DeviceVertexBuffer@Engine@Spectre@@QEAAXW4Attribute@123@@Z.c)
 */

_QWORD *__fastcall Spectre::Engine::VertexBuffer::CreateDeviceBuffer(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v8[4]; // [rsp+28h] [rbp-20h] BYREF

  Spectre::Engine::RenderDevice::CreateResource<Spectre::Engine::DeviceVertexBuffer>(a3, v8);
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
    v6 = *(unsigned int *)(v5 + 32);
  else
    v6 = 0xFFFFFFFFLL;
  Spectre::Engine::DeviceVertexBuffer::SetAttribute(v8[0], v6);
  *a2 = v8[0];
  a2[1] = v8[1];
  return a2;
}
