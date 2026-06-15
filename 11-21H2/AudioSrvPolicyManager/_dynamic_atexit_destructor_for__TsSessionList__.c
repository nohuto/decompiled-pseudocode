/*
 * XREFs of _dynamic_atexit_destructor_for__TsSessionList__ @ 0x180046BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void dynamic_atexit_destructor_for__TsSessionList__()
{
  std::_Deallocate<16,0>((char *)qword_18005C6C8, (xmmword_18005C6D0 - qword_18005C6C8) & 0xFFFFFFFFFFFFFFF8uLL);
  qword_18005C6C8 = 0LL;
  xmmword_18005C6D0 = 0LL;
  std::list<std::pair<unsigned long const,std::unique_ptr<TSSession>>>::~list<std::pair<unsigned long const,std::unique_ptr<TSSession>>>((char **)&qword_18005C6B8);
}
