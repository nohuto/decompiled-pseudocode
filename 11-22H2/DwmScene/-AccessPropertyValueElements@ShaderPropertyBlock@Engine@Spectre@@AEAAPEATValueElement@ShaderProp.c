/*
 * XREFs of ?AccessPropertyValueElements@ShaderPropertyBlock@Engine@Spectre@@AEAAPEATValueElement@ShaderPropertyLayout@23@W4ShaderProperty@23@W4ShaderPropertyType@23@I@Z @ 0x1800846AC
 * Callers:
 *     ??$SetProperty@UColor@Math@Utils@Spectre@@@ShaderPropertyBlock@Engine@Spectre@@AEAAXW4ShaderProperty@12@AEBUColor@Math@Utils@2@@Z @ 0x180083DB0 (--$SetProperty@UColor@Math@Utils@Spectre@@@ShaderPropertyBlock@Engine@Spectre@@AEAAXW4ShaderProp.c)
 *     ??$SetProperty@UMatrix@Math@Utils@Spectre@@@ShaderPropertyBlock@Engine@Spectre@@AEAAXW4ShaderProperty@12@AEBUMatrix@Math@Utils@2@@Z @ 0x180083DFC (--$SetProperty@UMatrix@Math@Utils@Spectre@@@ShaderPropertyBlock@Engine@Spectre@@AEAAXW4ShaderPro.c)
 *     ??$SetProperty@UVector4@Math@Utils@Spectre@@@ShaderPropertyBlock@Engine@Spectre@@AEAAXW4ShaderProperty@12@AEBUVector4@Math@Utils@2@@Z @ 0x180083E6C (--$SetProperty@UVector4@Math@Utils@Spectre@@@ShaderPropertyBlock@Engine@Spectre@@AEAAXW4ShaderPr.c)
 *     ??$SetPropertyArray@UMatrix@Math@Utils@Spectre@@@ShaderPropertyBlock@Engine@Spectre@@AEAAXW4ShaderProperty@12@QEBUMatrix@Math@Utils@2@I@Z @ 0x180083EB8 (--$SetPropertyArray@UMatrix@Math@Utils@Spectre@@@ShaderPropertyBlock@Engine@Spectre@@AEAAXW4Shad.c)
 *     ??$SetPropertyArray@UVector4@Math@Utils@Spectre@@@ShaderPropertyBlock@Engine@Spectre@@AEAAXW4ShaderProperty@12@QEBUVector4@Math@Utils@2@I@Z @ 0x180083F28 (--$SetPropertyArray@UVector4@Math@Utils@Spectre@@@ShaderPropertyBlock@Engine@Spectre@@AEAAXW4Sha.c)
 *     ?SetBoolean@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@_N@Z @ 0x1800853A0 (-SetBoolean@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@_N@Z.c)
 *     ?SetInteger@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@H@Z @ 0x1800854AC (-SetInteger@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@H@Z.c)
 *     ?SetScalar@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@M@Z @ 0x1800855C0 (-SetScalar@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@M@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Spectre::Engine::ShaderPropertyBlock::AccessPropertyValueElements(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return Spectre::Engine::ShaderPropertyBlock::ReadPropertyValueElements(a1, a2, a3);
}
