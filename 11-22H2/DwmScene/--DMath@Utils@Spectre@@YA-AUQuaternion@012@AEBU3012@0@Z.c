/*
 * XREFs of ??DMath@Utils@Spectre@@YA?AUQuaternion@012@AEBU3012@0@Z @ 0x18003B5A8
 * Callers:
 *     ?GetWorldRotation@SceneNode@Engine@Spectre@@QEBA?AUQuaternion@Math@Utils@3@XZ @ 0x18003C440 (-GetWorldRotation@SceneNode@Engine@Spectre@@QEBA-AUQuaternion@Math@Utils@3@XZ.c)
 *     ?SetWorldRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z @ 0x18003DBA8 (-SetWorldRotation@SceneNode@Engine@Spectre@@QEAAXUQuaternion@Math@Utils@3@@Z.c)
 *     ?UpdateProbeConstants@LightGatherer@Engine@Spectre@@CA?AV?$shared_ptr@$$CBVLightProbe@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLightProbe@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@@Z @ 0x1800A4F20 (-UpdateProbeConstants@LightGatherer@Engine@Spectre@@CA-AV-$shared_ptr@$$CBVLightProbe@Engine@Spe.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall Spectre::Utils::Math::operator*(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 *result; // rax
  __m128 v4; // xmm1
  __m128 v5; // xmm4
  __m128 v6; // xmm1

  result = a1;
  v4 = _mm_shuffle_ps(*a2, *a2, 27);
  v5 = _mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 0), v4);
  v6 = _mm_shuffle_ps(v4, v4, 177);
  *a1 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_mul_ps(_mm_shuffle_ps(v6, v6, 27), _mm_shuffle_ps(*a3, *a3, 170)),
              (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlYXWZ),
            _mm_mul_ps(
              _mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 85), v6),
              (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlZWXY)),
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 255), *a2),
            _mm_mul_ps(v5, (__m128)`DirectX::XMMatrixDeterminant'::`2'::Sign)));
  return result;
}
