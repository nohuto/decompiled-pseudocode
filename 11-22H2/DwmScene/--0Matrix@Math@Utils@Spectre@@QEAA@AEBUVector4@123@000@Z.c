/*
 * XREFs of ??0Matrix@Math@Utils@Spectre@@QEAA@AEBUVector4@123@000@Z @ 0x18003AF6C
 * Callers:
 *     Spectre::Engine::MatrixDecompose @ 0x18003CBE0 (Spectre--Engine--MatrixDecompose.c)
 *     ?UpdateLightConstants@LightGatherer@Engine@Spectre@@CA?AV?$array@V?$shared_ptr@$$CBVShadowMapCamera@Engine@Spectre@@@std@@$02@std@@AEBV?$vector@V?$shared_ptr@VLight@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VLight@Engine@Spectre@@@std@@@2@@5@AEBV?$unique_ptr@ULightConstants@Engine@Spectre@@V?$function@$$A6AXPEAULightConstants@Engine@Spectre@@@Z@std@@@5@@Z @ 0x1800A4764 (-UpdateLightConstants@LightGatherer@Engine@Spectre@@CA-AV-$array@V-$shared_ptr@$$CBVShadowMapCam.c)
 * Callees:
 *     <none>
 */

Spectre::Utils::Math::Matrix *__fastcall Spectre::Utils::Math::Matrix::Matrix(
        Spectre::Utils::Math::Matrix *this,
        const struct Spectre::Utils::Math::Vector4 *a2,
        const struct Spectre::Utils::Math::Vector4 *a3,
        const struct Spectre::Utils::Math::Vector4 *a4,
        const struct Spectre::Utils::Math::Vector4 *a5)
{
  __int128 v5; // xmm3
  int v6; // xmm2_4
  int v7; // xmm1_4
  int v8; // xmm0_4
  __int128 v9; // xmm7
  int v10; // eax
  Spectre::Utils::Math::Matrix *result; // rax

  v5 = *(_OWORD *)a3;
  v6 = *((_DWORD *)a2 + 3);
  v7 = *((_DWORD *)a2 + 2);
  v8 = *((_DWORD *)a2 + 1);
  v9 = *(_OWORD *)a4;
  v10 = *(_DWORD *)a2;
  *((_OWORD *)this + 3) = *(_OWORD *)a5;
  *(_DWORD *)this = v10;
  result = this;
  *((_OWORD *)this + 2) = v9;
  *((_DWORD *)this + 1) = v8;
  *((_DWORD *)this + 2) = v7;
  *((_DWORD *)this + 3) = v6;
  *((_OWORD *)this + 1) = v5;
  return result;
}
