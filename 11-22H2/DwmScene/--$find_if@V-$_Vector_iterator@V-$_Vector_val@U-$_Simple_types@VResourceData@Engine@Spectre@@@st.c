/*
 * XREFs of ??$find_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VResourceData@Engine@Spectre@@@std@@@std@@@std@@VFindResourceWithID@ResourceManager@Engine@Spectre@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VResourceData@Engine@Spectre@@@std@@@std@@@0@V10@V10@VFindResourceWithID@ResourceManager@Engine@Spectre@@@Z @ 0x18006FF90
 * Callers:
 *     ?Add@ResourceManager@Engine@Spectre@@QEAAXV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@_K@Z @ 0x180070160 (-Add@ResourceManager@Engine@Spectre@@QEAAXV-$shared_ptr@VRendererResource@Engine@Spectre@@@std@@.c)
 *     ?Request@ResourceManager@Engine@Spectre@@QEAA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@_KV?$shared_ptr@VResourceLoadedFnc@Engine@Spectre@@@5@@Z @ 0x18007040C (-Request@ResourceManager@Engine@Spectre@@QEAA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spect.c)
 * Callees:
 *     ??RFindResourceWithID@ResourceManager@Engine@Spectre@@QEBA_NAEBVResourceData@23@@Z @ 0x18007013C (--RFindResourceWithID@ResourceManager@Engine@Spectre@@QEBA_NAEBVResourceData@23@@Z.c)
 */

_QWORD *std::find_if<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Spectre::Engine::ResourceData>>>,Spectre::Engine::ResourceManager::FindResourceWithID>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  __int64 i; // rdi
  _QWORD *result; // rax
  va_list va; // [rsp+48h] [rbp+20h] BYREF

  va_start(va, a3);
  for ( i = a2; i != a3; i += 128LL )
  {
    if ( (unsigned __int8)Spectre::Engine::ResourceManager::FindResourceWithID::operator()((__int64 *)va, i) )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
