/*
 * XREFs of ??$emplace_back@U?$pair@II@std@@@?$vector@U?$pair@II@std@@V?$allocator@U?$pair@II@std@@@2@@std@@QEAA?A_T$$QEAU?$pair@II@1@@Z @ 0x180081CB4
 * Callers:
 *     ?SetImportLayout@ShaderPropertyLayout@Engine@Spectre@@QEAAXV?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@@Z @ 0x1800831BC (-SetImportLayout@ShaderPropertyLayout@Engine@Spectre@@QEAAXV-$shared_ptr@VShaderPropertyLayout@E.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<std::pair<unsigned int,unsigned int>>(
        char **a1,
        _QWORD *a2)
{
  char *v3; // rdx
  char *result; // rax

  v3 = a1[1];
  if ( v3 == a1[2] )
    return std::vector<std::pair<unsigned int,unsigned int>>::_Emplace_reallocate<std::pair<unsigned int,unsigned int>>(
             a1,
             v3,
             a2);
  *(_QWORD *)v3 = *a2;
  result = a1[1];
  a1[1] = result + 8;
  return result;
}
