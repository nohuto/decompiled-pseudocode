/*
 * XREFs of ??0?$unordered_map@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180014F48
 * Callers:
 *     _dynamic_initializer_for__TsSessionList__ @ 0x180002240 (_dynamic_initializer_for__TsSessionList__.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AC20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18000CCF0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
int *std::unordered_map<unsigned long,std::unique_ptr<TSSession>>::unordered_map<unsigned long,std::unique_ptr<TSSession>>()
{
  _QWORD *v0; // rbx
  _QWORD *v1; // rax
  _QWORD *v2; // rcx

  dword_180063760 = 0;
  qword_180063768 = 0LL;
  qword_180063770 = 0LL;
  v0 = operator new(0x20uLL);
  *v0 = v0;
  v0[1] = v0;
  qword_180063768 = (__int64)v0;
  qword_180063778 = 0LL;
  xmmword_180063780 = 0LL;
  qword_180063790 = 7LL;
  qword_180063798 = 8LL;
  dword_180063760 = LODWORD(FLOAT_1_0);
  v1 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x80uLL);
  qword_180063778 = (__int64)v1;
  v2 = v1 + 16;
  *(_QWORD *)&xmmword_180063780 = v1 + 16;
  *((_QWORD *)&xmmword_180063780 + 1) = v1 + 16;
  while ( v1 != v2 )
    *v1++ = v0;
  return &dword_180063760;
}
