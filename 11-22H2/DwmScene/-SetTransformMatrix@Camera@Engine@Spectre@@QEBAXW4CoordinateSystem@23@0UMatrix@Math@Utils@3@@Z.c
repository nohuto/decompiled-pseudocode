/*
 * XREFs of ?SetTransformMatrix@Camera@Engine@Spectre@@QEBAXW4CoordinateSystem@23@0UMatrix@Math@Utils@3@@Z @ 0x18005D494
 * Callers:
 *     ?SetProjectionMatrix@Camera@Engine@Spectre@@QEAAXAEBUMatrix@Math@Utils@3@@Z @ 0x18001AF10 (-SetProjectionMatrix@Camera@Engine@Spectre@@QEAAXAEBUMatrix@Math@Utils@3@@Z.c)
 *     ?Reset@Camera@Engine@Spectre@@UEAAXXZ @ 0x18005CB80 (-Reset@Camera@Engine@Spectre@@UEAAXXZ.c)
 *     ?UpdateMatrixArray@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005D910 (-UpdateMatrixArray@Camera@Engine@Spectre@@IEBAXXZ.c)
 *     ?UpdateProjectionMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005DC38 (-UpdateProjectionMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 *     ?UpdateViewMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005DE70 (-UpdateViewMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 *     ?UpdateViewProjectionMatrixStage@Camera@Engine@Spectre@@IEBAXXZ @ 0x18005DFE8 (-UpdateViewProjectionMatrixStage@Camera@Engine@Spectre@@IEBAXXZ.c)
 *     ?UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ @ 0x18005E0A4 (-UpdateViewportMatrixStage@Camera@Engine@Spectre@@IEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::Camera::SetTransformMatrix(__int64 a1, int a2, int a3, _OWORD *a4)
{
  __int64 result; // rax
  __int128 v5; // xmm1
  __int64 v6; // r8
  __int128 v7; // xmm0
  __int128 v8; // xmm1

  result = a3;
  v5 = a4[1];
  v6 = (a3 + 4LL * a2) << 6;
  *(_OWORD *)(v6 + a1 + 548) = *a4;
  v7 = a4[2];
  *(_OWORD *)(v6 + a1 + 564) = v5;
  v8 = a4[3];
  *(_OWORD *)(v6 + a1 + 580) = v7;
  *(_OWORD *)(v6 + a1 + 596) = v8;
  return result;
}
