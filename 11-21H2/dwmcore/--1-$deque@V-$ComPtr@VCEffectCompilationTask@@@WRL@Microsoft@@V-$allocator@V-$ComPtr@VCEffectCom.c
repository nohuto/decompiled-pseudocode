/*
 * XREFs of ??1?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180198C80
 * Callers:
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x180198D04 (--1CEffectCompilationService@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?pop_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800DAB54 (-pop_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEf.c)
 */

void __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::~deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>(
        void **a1)
{
  char *v2; // rdi
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  while ( a1[4] )
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_back((__int64)a1);
  v2 = (char *)a1[2];
  while ( v2 )
  {
    v3 = (void *)*((_QWORD *)a1[1] + (_QWORD)--v2);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x10uLL);
  }
  v4 = a1[1];
  if ( v4 )
    std::_Deallocate<16,0>(v4, 8LL * (_QWORD)a1[2]);
  v5 = *a1;
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[1] = 0LL;
  std::_Deallocate<16,0>(v5, 0x10uLL);
}
