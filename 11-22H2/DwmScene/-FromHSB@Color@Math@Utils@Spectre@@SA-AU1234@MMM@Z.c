/*
 * XREFs of ?FromHSB@Color@Math@Utils@Spectre@@SA?AU1234@MMM@Z @ 0x18001C1C0
 * Callers:
 *     Spectre::Engine::GetColorGradingData @ 0x180066AC0 (Spectre--Engine--GetColorGradingData.c)
 *     ?UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z @ 0x180069CB0 (-UpdateDebugConstants@ViewerEngine@Engine@Spectre@@AEAAXAEAVIRenderOutput@23@H@Z.c)
 * Callees:
 *     floorf @ 0x18000C02C (floorf.c)
 *     ?Clamp@Math@Utils@Spectre@@YAMMMM@Z @ 0x18001112C (-Clamp@Math@Utils@Spectre@@YAMMMM@Z.c)
 */

__int64 __fastcall Spectre::Utils::Math::Color::FromHSB(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  float v5; // xmm10_4
  Spectre::Utils::Math *v6; // rcx
  float v7; // xmm7_4
  Spectre::Utils::Math *v8; // rcx
  float v9; // xmm0_4
  float v10; // xmm6_4
  float v11; // xmm1_4
  float v12; // xmm10_4
  int v13; // ecx
  float v14; // xmm10_4
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  __int64 result; // rax

  v5 = Spectre::Utils::Math::Clamp((Spectre::Utils::Math *)a1, 0.0, 360.0, a4);
  v7 = Spectre::Utils::Math::Clamp(v6, 0.0, 1.0, a4);
  v9 = Spectre::Utils::Math::Clamp(v8, 0.0, 1.0, a4);
  v10 = v9;
  if ( v7 == 0.0 )
  {
    v11 = v9;
    goto LABEL_15;
  }
  v12 = v5 / 60.0;
  v13 = (int)floorf(v12);
  v14 = v12 - (float)v13;
  if ( !v13 )
  {
    v9 = v10;
    v11 = (float)(1.0 - (float)((float)(1.0 - v14) * v7)) * v10;
    goto LABEL_14;
  }
  v15 = v13 - 1;
  if ( !v15 )
  {
    v9 = (float)(1.0 - (float)(v14 * v7)) * v10;
    v11 = v10;
LABEL_14:
    v10 = (float)(1.0 - v7) * v10;
    goto LABEL_15;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v11 = (float)(1.0 - v7) * v10;
      if ( v17 == 1 )
      {
        v9 = (float)(1.0 - (float)((float)(1.0 - v14) * v7)) * v10;
      }
      else
      {
        v9 = v10;
        v10 = (float)(1.0 - (float)(v14 * v7)) * v10;
      }
    }
    else
    {
      v9 = (float)(1.0 - v7) * v10;
      v11 = (float)(1.0 - (float)(v14 * v7)) * v10;
    }
  }
  else
  {
    v11 = v10;
    v9 = (float)(1.0 - v7) * v10;
    v10 = (float)(1.0 - (float)((float)(1.0 - v14) * v7)) * v10;
  }
LABEL_15:
  result = a1;
  *(float *)(a1 + 8) = v10;
  *(float *)a1 = v9;
  *(float *)(a1 + 4) = v11;
  *(_DWORD *)(a1 + 12) = 1065353216;
  return result;
}
