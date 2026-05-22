/*
 * XREFs of ??$?0AEAY0BO@$$CBGM$0A@@?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@QEAA@AEAY0BO@$$CBG$$QEAM@Z @ 0x1801E8AAC
 * Callers:
 *     _lambda_223b683404cbbc2b78f554bf36c4ab0d_::operator() @ 0x1801EA37C (_lambda_223b683404cbbc2b78f554bf36c4ab0d_--operator().c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004885C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
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
