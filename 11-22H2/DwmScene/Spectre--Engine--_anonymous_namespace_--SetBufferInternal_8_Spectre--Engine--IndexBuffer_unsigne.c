/*
 * XREFs of Spectre::Engine::_anonymous_namespace_::SetBufferInternal_8_Spectre::Engine::IndexBuffer_unsigned_int_ @ 0x1800475D4
 * Callers:
 *     Spectre::Engine::_anonymous_namespace_::SetIndexBufferInternal_8_std::shared_ptr_Spectre::Engine::IndexBuffer__unsigned_int_ @ 0x1800477BC (Spectre--Engine--_anonymous_namespace_--SetIndexBufferInternal_8_std--shared_ptr_Spectre--Engine.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0 (-SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z.c)
 *     ??$CreateResource@VIndexBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA?AV?$shared_ptr@VIndexBuffer@Engine@Spectre@@@std@@XZ @ 0x180047248 (--$CreateResource@VIndexBuffer@Engine@Spectre@@$$V@Engine@0Spectre@@QEAA-AV-$shared_ea_180047248.c)
 *     Spectre::Engine::GetFormatPitch @ 0x180048848 (Spectre--Engine--GetFormatPitch.c)
 */

__int64 __fastcall Spectre::Engine::_anonymous_namespace_::SetBufferInternal_8_Spectre::Engine::IndexBuffer_unsigned_int_(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 *v10; // rax
  int FormatPitch; // eax
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-10h]

  if ( !*a1 )
  {
    v10 = (__int64 *)Spectre::Engine::Engine::CreateResource<Spectre::Engine::IndexBuffer,>(a6, (__int64)&v13);
    std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(a1, v10);
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
    Spectre::Engine::RendererResource::SetOption(*a1, 8, 0);
  }
  FormatPitch = Spectre::Engine::GetFormatPitch(8LL);
  return Spectre::Engine::ArrayBuffer::Create(*a1, a2, a3, (unsigned int)(a4 * FormatPitch), a5);
}
