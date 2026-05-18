/*
 * XREFs of ?SetOption@RendererResource@Engine@Spectre@@QEAAXW4EResourceOption@123@_N@Z @ 0x1800297F0
 * Callers:
 *     ?CreateStandardTextures@RenderDevice@Engine@Spectre@@IEAAXXZ @ 0x1800261B8 (-CreateStandardTextures@RenderDevice@Engine@Spectre@@IEAAXXZ.c)
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x180028204 (-Create@FrameBuffer@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@st.c)
 *     ?Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18002836C (-Create@FrameBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033170 (-CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@V-$shared_ptr@VRenderDevice@.c)
 *     ?CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z @ 0x180033200 (-CreateResourceInternal@Engine@1Spectre@@IEAAXPEAVSharedResource@12@W4ResourceDevicePolicy@12@@Z.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_4_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector2_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x1800473DC (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_4_Spectre--Engine--VertexBuffer_Spectr.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_5_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector3_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x180047484 (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_5_Spectre--Engine--VertexBuffer_Spectr.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_6_Spectre::Engine::VertexBuffer_Spectre::Utils::Math::Vector4_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x18004752C (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_6_Spectre--Engine--VertexBuffer_Spectr.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_8_Spectre::Engine::IndexBuffer_unsigned_int_ @ 0x1800475D4 (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_8_Spectre--Engine--IndexBuffer_unsigne.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_17_Spectre::Engine::VertexBuffer_unsigned_int_enum_Spectre::Engine::DeviceVertexBuffer::Attribute_&_ @ 0x180047674 (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_17_Spectre--Engine--VertexBuffer_unsig.c)
 *     Spectre::Engine::_anonymous_namespace_::SetBufferInternal_12_Spectre::Engine::IndexBuffer_unsigned_short_ @ 0x18004771C (Spectre--Engine--_anonymous_namespace_--SetBufferInternal_12_Spectre--Engine--IndexBuffer_unsign.c)
 *     ?ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z @ 0x1800483C0 (-ComputeRequiredData@Mesh@Engine@Spectre@@QEAAXI@Z.c)
 *     ?ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z @ 0x180048E68 (-ReserveDynamic@Mesh@Engine@Spectre@@QEAAXIIW4MeshTopology@23@I@Z.c)
 *     ?CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z @ 0x1800548D0 (-CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z @ 0x180055D68 (-Create@Texture@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VDeviceTexture@Engine@Spectre@@@std@@I@Z.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 *     ?Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z @ 0x18006F640 (-Create@DepthBuffer@Engine@Spectre@@QEAAXIIW4Format@23@IPEAVRenderDevice@23@@Z.c)
 *     ?Create@DepthBuffer@Engine@Spectre@@QEAAXV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@I@Z @ 0x18006F8B0 (-Create@DepthBuffer@Engine@Spectre@@QEAAXV-$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@std@@.c)
 *     ?CreateEmptySampler@Engine@Spectre@@YA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAV112@AEBUSamplerStateDesc@12@@Z @ 0x18006F990 (-CreateEmptySampler@Engine@Spectre@@YA-AV-$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAV112@AEB.c)
 *     ?CreateEmptyTexture@Engine@Spectre@@YA?AV?$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAV112@IIW4Format@12@W4Usage@12@I@Z @ 0x18006FA04 (-CreateEmptyTexture@Engine@Spectre@@YA-AV-$shared_ptr@VTexture@Engine@Spectre@@@std@@PEAV112@IIW.c)
 *     ?AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180086B60 (-AttachDevice@ShaderPipeline@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@s.c)
 *     ?Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z @ 0x180088360 (-Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ??0Shader@Engine@Spectre@@IEAA@W4EShaderType@12@@Z @ 0x18008A82C (--0Shader@Engine@Spectre@@IEAA@W4EShaderType@12@@Z.c)
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800D5E20 (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 *     ?CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D65DC (-CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::RendererResource::SetOption(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 40);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
