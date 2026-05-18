/*
 * XREFs of ??$dynamic_pointer_cast@VDeviceVertexBuffer@Engine@Spectre@@VRendererResource@23@@std@@YA?AV?$shared_ptr@VDeviceVertexBuffer@Engine@Spectre@@@0@AEBV?$shared_ptr@VRendererResource@Engine@Spectre@@@0@@Z @ 0x180089174
 * Callers:
 *     ??$CreateResource@VDeviceVertexBuffer@Engine@Spectre@@@ResourceFactory@Engine@Spectre@@QEBA?AV?$shared_ptr@VDeviceVertexBuffer@Engine@Spectre@@@std@@XZ @ 0x1800890AC (--$CreateResource@VDeviceVertexBuffer@Engine@Spectre@@@ResourceFactory@Engine@Spectre@@QEBA-AV-$.c)
 * Callees:
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

__int64 *__fastcall std::dynamic_pointer_cast<Spectre::Engine::DeviceVertexBuffer,Spectre::Engine::RendererResource>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast_0(
         *a2,
         0LL,
         &Spectre::Engine::RendererResource `RTTI Type Descriptor',
         &Spectre::Engine::DeviceVertexBuffer `RTTI Type Descriptor',
         0);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 )
  {
    v5 = a2[1];
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    *a1 = v4;
    a1[1] = a2[1];
  }
  return a1;
}
