/*
 * XREFs of ??1?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@XZ @ 0x180547E50
 * Callers:
 *     _GenerateCandidateListForTelemetry_::_1_::dtor$23 @ 0x18076C90A (_GenerateCandidateListForTelemetry_--_1_--dtor$23.c)
 *     _XamlSnapAssistViewHost::Show_::_1_::dtor$4 @ 0x18076E39C (_XamlSnapAssistViewHost--Show_--_1_--dtor$4.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 8 )
    std::_Deallocate<16,0>(*(void **)a1, 2 * v1 + 2);
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
