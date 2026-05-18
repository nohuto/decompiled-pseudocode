/*
 * XREFs of ?GetEngine@SharedResource@Engine@Spectre@@UEBAPEAV223@XZ @ 0x1800295B0
 * Callers:
 *     ?AttachDevice@Mesh@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180047E90 (-AttachDevice@Mesh@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?SetColoursInternal@Mesh@Engine@Spectre@@IEAAXQEBII@Z @ 0x180049188 (-SetColoursInternal@Mesh@Engine@Spectre@@IEAAXQEBII@Z.c)
 *     ?SetIndicesInternal@Mesh@Engine@Spectre@@IEAAXQEBGI@Z @ 0x1800493B8 (-SetIndicesInternal@Mesh@Engine@Spectre@@IEAAXQEBGI@Z.c)
 *     ?SetIndicesInternal@Mesh@Engine@Spectre@@IEAAXQEBII@Z @ 0x18004942C (-SetIndicesInternal@Mesh@Engine@Spectre@@IEAAXQEBII@Z.c)
 *     ?SetJointDataInternal@Mesh@Engine@Spectre@@IEAAXQEBI0I@Z @ 0x18004957C (-SetJointDataInternal@Mesh@Engine@Spectre@@IEAAXQEBI0I@Z.c)
 *     ?SetNormalsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector3@Math@Utils@3@I_N@Z @ 0x180049704 (-SetNormalsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector3@Math@Utils@3@I_N@Z.c)
 *     ?SetPositionsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector3@Math@Utils@3@I@Z @ 0x180049850 (-SetPositionsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector3@Math@Utils@3@I@Z.c)
 *     ?SetTangentsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector4@Math@Utils@3@I_N@Z @ 0x180049994 (-SetTangentsInternal@Mesh@Engine@Spectre@@IEAAXQEBUVector4@Math@Utils@3@I_N@Z.c)
 *     ?SetUV0Internal@Mesh@Engine@Spectre@@IEAAXQEBUVector2@Math@Utils@3@I@Z @ 0x180049B6C (-SetUV0Internal@Mesh@Engine@Spectre@@IEAAXQEBUVector2@Math@Utils@3@I@Z.c)
 *     ?SetUV1Internal@Mesh@Engine@Spectre@@IEAAXQEBUVector2@Math@Utils@3@I@Z @ 0x180049CAC (-SetUV1Internal@Mesh@Engine@Spectre@@IEAAXQEBUVector2@Math@Utils@3@I@Z.c)
 *     ?CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z @ 0x1800548D0 (-CreateSampler@Sampler@Engine@Spectre@@UEAAXAEBUSamplerStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ?Load@Sampler@Engine@Spectre@@UEAAXPEBUSamplerDefinition@Framework@3@I@Z @ 0x180054AF0 (-Load@Sampler@Engine@Spectre@@UEAAXPEBUSamplerDefinition@Framework@3@I@Z.c)
 *     ?AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180055980 (-AttachDevice@Texture@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 *     ?Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z @ 0x180088360 (-Create@RenderState@Engine@Spectre@@UEAAXAEBURenderStateDesc@23@PEAVRenderDevice@23@@Z.c)
 *     ?Create@VertexLayout@Engine@Spectre@@UEAAXVVertexLayoutDesc@VertexLayoutBase@23@AEBV?$shared_ptr@VShaderProgram@Engine@Spectre@@@std@@@Z @ 0x18008C1B0 (-Create@VertexLayout@Engine@Spectre@@UEAAXVVertexLayoutDesc@VertexLayoutBase@23@AEBV-$shared_ptr.c)
 * Callees:
 *     <none>
 */

struct Spectre::Engine::Engine *__fastcall Spectre::Engine::SharedResource::GetEngine(
        Spectre::Engine::SharedResource *this)
{
  return (struct Spectre::Engine::Engine *)*((_QWORD *)this + 9);
}
