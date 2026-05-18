/*
 * XREFs of ?UpdateMatrixStages@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005DBC8
 * Callers:
 *     ?GetTransformMatrix@Camera@Engine@Spectre@@QEBAAEBUMatrix@Math@Utils@3@W4CoordinateSystem@23@0@Z @ 0x18005BB34 (-GetTransformMatrix@Camera@Engine@Spectre@@QEBAAEBUMatrix@Math@Utils@3@W4CoordinateSystem@23@0@Z.c)
 * Callees:
 *     ?UpdateMatrixArray@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005D910 (-UpdateMatrixArray@Camera@Engine@Spectre@@IEBAXXZ.c)
 *     ?UpdateProjectionMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005DC38 (-UpdateProjectionMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 *     ?UpdateViewMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005DE70 (-UpdateViewMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 *     ?UpdateViewProjectionMatrixStage@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005DFE8 (-UpdateViewProjectionMatrixStage@Camera@Engine@Spectre@@IEBAXXZ.c)
 *     ?UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005E0A4 (-UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 */

void __fastcall Spectre::Engine::Camera::UpdateMatrixStages(Spectre::Engine::Camera *this)
{
  bool updated; // si
  bool v3; // di
  bool v4; // al
  bool v5; // r11

  updated = Spectre::Engine::Camera::UpdateViewportMatrixStage(this);
  v3 = Spectre::Engine::Camera::UpdateViewMatrixStage(this);
  v4 = Spectre::Engine::Camera::UpdateProjectionMatrixStage(this);
  v5 = v4;
  if ( v3 || v4 )
    Spectre::Engine::Camera::UpdateViewProjectionMatrixStage(this);
  if ( updated || v3 || v5 )
    Spectre::Engine::Camera::UpdateMatrixArray(this);
}
