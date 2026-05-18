/*
 * XREFs of ?SetMatrixArray@ShaderPropertyBlock@Engine@Spectre@@QEAAXW4ShaderProperty@23@AEBV?$vector@UMatrix@Math@Utils@Spectre@@V?$allocator@UMatrix@Math@Utils@Spectre@@@std@@@std@@@Z @ 0x180085560
 * Callers:
 *     ?SetMatrixArray@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@UMatrix@Math@Utils@Spectre@@V?$allocator@UMatrix@Math@Utils@Spectre@@@std@@@5@@Z @ 0x180085528 (-SetMatrixArray@ShaderPropertyBlock@Engine@Spectre@@QEAAXAEBV-$basic_string@DU-$char_traits@D@st.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::ShaderPropertyBlock::SetMatrixArray(__int64 a1, __int64 a2, _QWORD *a3)
{
  return Spectre::Engine::ShaderPropertyBlock::SetMatrixArray(a1, a2, *a3, (__int64)(a3[1] - *a3) >> 6);
}
