/*
 * XREFs of ?EmitUpdateCommands@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021C350
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetBaseColorFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02168AC (-EmitSetBaseColorFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_.c)
 *     ?EmitSetBaseColorInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0216928 (-EmitSetBaseColorInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_N.c)
 *     ?EmitSetMetallicFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0218840 (-EmitSetMetallicFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_N.c)
 *     ?EmitSetMetallicRoughnessInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C02188B4 (-EmitSetMetallicRoughnessInputCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition.c)
 *     ?EmitSetRoughnessFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0219EE4 (-EmitSetRoughnessFactorCommand@CSceneMetallicRoughnessMaterialMarshaler@DirectComposition@@AEAA_.c)
 *     ?EmitUpdateCommands@CScenePbrMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C021C4A8 (-EmitUpdateCommands@CScenePbrMaterialMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitUpdateCommands(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CScenePbrMaterialMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetBaseColorInputCommand(this, a2)
    && DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetBaseColorFactorCommand(this, a2)
    && DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetMetallicFactorCommand(this, a2)
    && DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetMetallicRoughnessInputCommand(this, a2) )
  {
    return DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::EmitSetRoughnessFactorCommand(this, a2) != 0;
  }
  return v4;
}
