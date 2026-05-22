/*
 * XREFs of ??$?0AEAY0BP@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BP@$$CBG$$QEAM@Z @ 0x180048058
 * Callers:
 *     _lambda_f42f6b7dc2f8f00e06af073ba952cab2_::operator() @ 0x180047AE8 (_lambda_f42f6b7dc2f8f00e06af073ba952cab2_--operator().c)
 *     _lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator() @ 0x1801DCE98 (_lambda_223b683404cbbc2b78f554bf36c4ab0d_--operator().c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180047EFC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 */

__int64 __fastcall std::pair<std::wstring const,std::variant<unsigned long,bool,float>>::pair<std::wstring const,std::variant<unsigned long,bool,float>>(
        __int64 a1,
        _WORD *a2,
        _DWORD *a3)
{
  __int64 result; // rax

  std::wstring::wstring((_QWORD *)a1, a2);
  *(_DWORD *)(a1 + 32) = *a3;
  result = a1;
  *(_BYTE *)(a1 + 36) = 2;
  return result;
}
