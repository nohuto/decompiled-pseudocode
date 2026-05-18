/*
 * XREFs of ?Normalize@Vector3@Math@Utils@Spectre@@QEAAXXZ @ 0x18003CF20
 * Callers:
 *     ?LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z @ 0x18003C918 (-LookAt@SceneNode@Engine@Spectre@@QEAAXUVector3@Math@Utils@3@0@Z.c)
 *     ?UpdateCachedState@LightProbe@Engine@Spectre@@AEAAXXZ @ 0x180051CA0 (-UpdateCachedState@LightProbe@Engine@Spectre@@AEAAXXZ.c)
 *     ?Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180093500 (-Update@ViewerCamera@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     ?Update@Aimer@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z @ 0x180096B80 (-Update@Aimer@Engine@Spectre@@UEAAXAEBVFrameData@23@@Z.c)
 *     ?UpdateLightConstants@LightGatherer@Engine@Spectre@@CA?AV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@std@@AEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@@Z @ 0x1800A4764 (-UpdateLightConstants@LightGatherer@Engine@Spectre@@CA-AV-$array@V-$shared_ptr@$$CBVShadowMapCam.c)
 *     ?ComputeNormals@GeometryUtils@Framework@Spectre@@SAXV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@IV?$shared_ptr@X@5@I_NW4TriangularMeshTopology@123@V?$function@$$A6AXAEBV?$shared_ptr@UVector3@Math@Utils@Spectre@@@std@@PEAX@Z@5@PEAXAEBV?$shared_ptr@VICancellationToken@Utils@Spectre@@@5@@Z @ 0x1800E2070 (-ComputeNormals@GeometryUtils@Framework@Spectre@@SAXV-$shared_ptr@UVector3@Math@Utils@Spectre@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Utils::Math::Vector3::Normalize(Spectre::Utils::Math::Vector3 *this)
{
  __m128 v1; // xmm4
  __m128 v2; // xmm3
  __m128 v3; // xmm1
  __m128 v4; // xmm3
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm4

  v1 = _mm_movelh_ps((__m128)*(unsigned __int64 *)this, (__m128)*((unsigned int *)this + 2));
  v2 = _mm_mul_ps(v1, v1);
  v3 = _mm_shuffle_ps(v2, v2, 153);
  v2.m128_f32[0] = (float)(v2.m128_f32[0] + v3.m128_f32[0]) + _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
  v4 = _mm_shuffle_ps(v2, v2, 0);
  v5 = _mm_sqrt_ps(v4);
  v6 = _mm_cmpneq_ps(DirectX::g_XMInfinity, v4);
  v7 = _mm_or_ps(
         _mm_and_ps(_mm_and_ps(_mm_div_ps(v1, v5), _mm_cmpneq_ps(v5, (__m128)0LL)), v6),
         _mm_andnot_ps(v6, DirectX::g_XMQNaN));
  *(_QWORD *)this = v7.m128_u64[0];
  *((_DWORD *)this + 2) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
}
