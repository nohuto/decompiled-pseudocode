/*
 * XREFs of Spectre::Engine::_anonymous_namespace_::SetBufferInternal_4_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector2_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x1800473DC
 * Callers:
 *     Spectre::Engine::_anonymous_namespace_::SetVertexBufferInternal_4_std::shared_ptr_Spectre::Engine::VertexBuffer__Spectre::Utils::Math::Vector2_ @ 0x1800477D4 (Spectre--Engine--_anonymous_namespace_--SetVertexBufferInternal_4_std--shared_ptr_Spectre--Engin.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ??$CreateResource@VVertexBuffer@Engine@Spectre@@AEAW4Attribute@DeviceVertexBuffer@23@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VVertexBuffer@Engine@Spectre@@@std@@AEAW4Attribute@DeviceVertexBuffer@01@@Z @ 0x180047268 (--$CreateResource@VVertexBuffer@Engine@Spectre@@AEAW4Attribute@DeviceVertexBuffer@23@@Engine@0Sp.c)
 *     Spectre::Engine::GetFormatPitch @ 0x180048848 (Spectre--Engine--GetFormatPitch.c)
 */

__int64 __fastcall Spectre::Engine::_anonymous_namespace_::SetBufferInternal_4_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector2_enum_Spectre::Engine::DeviceVertexBuffer::Attribute___(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 *v11; // rax
  int FormatPitch; // eax
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-10h]

  if ( !*a1 )
  {
    v11 = (__int64 *)Spectre::Engine::Engine::CreateResource<Spectre::Engine::VertexBuffer,enum Spectre::Engine::DeviceVertexBuffer::Attribute &>(
                       a6,
                       (__int64)&v14,
                       a7);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1, v11);
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    Spectre::Engine::RendererResource::SetOption(*a1, 8, 0);
  }
  FormatPitch = Spectre::Engine::GetFormatPitch(4LL);
  return Spectre::Engine::ArrayBuffer::Create(*a1, a2, a3, (unsigned int)(a4 * FormatPitch), a5);
}
