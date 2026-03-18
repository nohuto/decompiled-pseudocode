/*
 * XREFs of ??$move@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@0@0V12@@Z @ 0x1800C8AEC
 * Callers:
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800C8ED0 (-clear_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@.c)
 * Callees:
 *     ??$?4U?$default_delete@VCOcclusionInfo@@@std@@$0A@@?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C8E98 (--$-4U-$default_delete@VCOcclusionInfo@@@std@@$0A@@-$unique_ptr@VCOcclusionInfo@@U-$default_dele.c)
 */

__int64 __fastcall std::move<std::move_iterator<std::unique_ptr<COcclusionInfo> *>,stdext::checked_array_iterator<std::unique_ptr<COcclusionInfo> *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdx
  bool v9; // cf
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 result; // rax
  __int64 v13; // xmm1_8

  v4 = a2;
  v8 = (a3 - a2) >> 3;
  if ( v8 < 0 )
  {
    v9 = a4[2] < (unsigned __int64)-v8;
  }
  else
  {
    if ( v8 <= 0 )
      goto LABEL_5;
    v9 = a4[1] - a4[2] < (unsigned __int64)v8;
  }
  if ( v9 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
    JUMPOUT(0x1801672FDLL);
  }
LABEL_5:
  v10 = *a4;
  v11 = *a4 + 8 * a4[2];
  while ( v4 != a3 )
  {
    std::unique_ptr<COcclusionInfo>::operator=<std::default_delete<COcclusionInfo>,0>(v11, v4);
    v11 += 8LL;
    v4 += 8LL;
  }
  result = a1;
  a4[2] = (v11 - v10) >> 3;
  v13 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v13;
  return result;
}
