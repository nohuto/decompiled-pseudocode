/*
 * XREFs of ??$_Emplace_back_internal@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAX$$QEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@Z @ 0x1800DAA80
 * Callers:
 *     ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x1800DA0EC (-TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x1800DABD0 (-_Growmap@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEf.c)
 */

__int64 __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Emplace_back_internal<Microsoft::WRL::ComPtr<CEffectCompilationTask>>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // si
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 result; // rax
  __int64 *v13; // rcx

  v4 = a1[4];
  v5 = v4;
  v6 = a1[3];
  if ( (((_BYTE)v4 + (_BYTE)v6) & 1) == 0 && a1[2] <= (unsigned __int64)(v4 + 2) >> 1 )
  {
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Growmap(a1, v4);
    v6 = a1[3];
    v5 = a1[4];
  }
  v7 = a1[2];
  v8 = v6 & (2 * v7 - 1);
  a1[3] = v8;
  v9 = v8 + v5;
  v10 = ((unsigned __int64)(v8 + v5) >> 1) & (v7 - 1);
  v11 = a1[1];
  if ( !*(_QWORD *)(v11 + 8 * v10) )
  {
    *(_QWORD *)(a1[1] + 8 * v10) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v11 = a1[1];
  }
  result = *(_QWORD *)(v11 + 8 * v10);
  v13 = (__int64 *)(result + 8LL * (v9 & 1));
  *v13 = 0LL;
  if ( v13 != a2 )
  {
    result = *a2;
    *v13 = *a2;
    *a2 = 0LL;
  }
  ++a1[4];
  return result;
}
