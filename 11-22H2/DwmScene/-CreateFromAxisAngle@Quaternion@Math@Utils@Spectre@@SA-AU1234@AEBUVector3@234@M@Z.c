/*
 * XREFs of ?CreateFromAxisAngle@Quaternion@Math@Utils@Spectre@@SA?AU1234@AEBUVector3@234@M@Z @ 0x18003BD60
 * Callers:
 *     ?LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z @ 0x18003C918 (-LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z.c)
 *     ?UpdateModelFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@_N@Z @ 0x18006BA5C (-UpdateModelFromConfiguration@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VScene@Engine@S.c)
 *     ?UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@AEBV?$shared_ptr@VScene@Engine@Spectre@@@5@@Z @ 0x18006BE30 (-UpdatePipelineConstants@ViewerEngine@Engine@Spectre@@AEAAXAEBV-$shared_ptr@VRenderDevice@Engine.c)
 * Callees:
 *     ?XMQuaternionRotationAxis@DirectX@@YQ?AT__m128@@T2@M@Z @ 0x18003EA50 (-XMQuaternionRotationAxis@DirectX@@YQ-AT__m128@@T2@M@Z.c)
 */

void __fastcall Spectre::Utils::Math::Quaternion::CreateFromAxisAngle(__int64 a1, union __m128 *a2, float a3)
{
  union __m128 v3; // xmm0
  union __m128 *v4; // rax

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 1065353216;
  v3 = DirectX::XMQuaternionRotationAxis(0LL, a2, a3);
  *v4 = v3;
}
