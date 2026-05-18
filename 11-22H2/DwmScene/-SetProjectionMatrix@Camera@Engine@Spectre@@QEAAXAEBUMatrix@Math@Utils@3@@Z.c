/*
 * XREFs of ?SetProjectionMatrix@Camera@Engine@Spectre@@QEAAXAEBUMatrix@Math@Utils@3@@Z @ 0x18001AF10
 * Callers:
 *     ?Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z @ 0x180018F90 (-Render@SpectreRenderer@@EEAAJPEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@_N2@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??9Matrix@Math@Utils@Spectre@@QEBA_NAEBU0123@@Z @ 0x180017DB8 (--9Matrix@Math@Utils@Spectre@@QEBA_NAEBU0123@@Z.c)
 *     ??0SpectreException@Utils@Spectre@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z @ 0x18001C33C (--0SpectreException@Utils@Spectre@@QEAA@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ?GetTransformMatrix@Camera@Engine@Spectre@@QEBAAEBUMatrix@Math@Utils@3@W4CoordinateSystem@23@0@Z @ 0x18005BB34 (-GetTransformMatrix@Camera@Engine@Spectre@@QEBAAEBUMatrix@Math@Utils@3@W4CoordinateSystem@23@0@Z.c)
 *     ?SetMatrixStagesChanged@Camera@Engine@Spectre@@IEBAXI@Z @ 0x18005D24C (-SetMatrixStagesChanged@Camera@Engine@Spectre@@IEBAXI@Z.c)
 *     ?SetTransformMatrix@Camera@Engine@Spectre@@QEBAXW4CoordinateSystem@23@0UMatrix@Math@Utils@3@@Z @ 0x18005D494 (-SetTransformMatrix@Camera@Engine@Spectre@@QEBAXW4CoordinateSystem@23@0UMatrix@Math@Utils@3@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::Camera::SetProjectionMatrix(
        Spectre::Engine::Camera *this,
        const struct Spectre::Utils::Math::Matrix *a2)
{
  __m128 *TransformMatrix; // rax
  Spectre::Engine::Camera *v5; // rcx
  _OWORD pExceptionObject[4]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v7[4]; // [rsp+60h] [rbp-38h] BYREF

  if ( *((_DWORD *)this + 79) != 5 )
  {
    std::string::string(
      v7,
      (__int64)"Camera::SetProjectionMatrix() -- ProjectionType must be Custom for this to take effect");
    Spectre::Utils::SpectreException::SpectreException(pExceptionObject, v7, 0LL);
    throw (Spectre::Utils::SpectreException *)pExceptionObject;
  }
  TransformMatrix = (__m128 *)Spectre::Engine::Camera::GetTransformMatrix(this, 1LL, 2LL);
  if ( Spectre::Utils::Math::Matrix::operator!=((__m128 *)a2, TransformMatrix) )
  {
    pExceptionObject[0] = *(_OWORD *)a2;
    pExceptionObject[1] = *((_OWORD *)a2 + 1);
    pExceptionObject[2] = *((_OWORD *)a2 + 2);
    pExceptionObject[3] = *((_OWORD *)a2 + 3);
    ((void (__fastcall *)(Spectre::Engine::Camera *, __int64, __int64, _OWORD *))Spectre::Engine::Camera::SetTransformMatrix)(
      this,
      1LL,
      2LL,
      pExceptionObject);
    Spectre::Engine::Camera::SetMatrixStagesChanged(v5, 2u);
  }
}
