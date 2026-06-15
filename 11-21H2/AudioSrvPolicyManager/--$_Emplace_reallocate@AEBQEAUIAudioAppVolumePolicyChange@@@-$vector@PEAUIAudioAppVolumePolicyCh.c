/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAUIAudioAppVolumePolicyChange@@@?$vector@PEAUIAudioAppVolumePolicyChange@@V?$allocator@PEAUIAudioAppVolumePolicyChange@@@std@@@std@@QEAAPEAPEAUIAudioAppVolumePolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x180014080
 * Callers:
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180019068 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800081EC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18000E460 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlength@?$vector@PEAVCApplication@@V?$allocator@PEAVCApplication@@@std@@@std@@CAXXZ @ 0x180013530 (-_Xlength@-$vector@PEAVCApplication@@V-$allocator@PEAVCApplication@@@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x18004444F (memmove_0.c)
 */

_QWORD *__fastcall std::vector<IAudioAppVolumePolicyChange *>::_Emplace_reallocate<IAudioAppVolumePolicyChange * const &>(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // r14
  _QWORD *v14; // rdi
  _QWORD *v15; // rsi
  _BYTE *v16; // r8
  _BYTE *v17; // rdx
  void *v18; // rcx
  size_t v19; // r8

  v6 = (__int64)&a2[-*(_QWORD *)a1] >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<CApplication *>::_Xlength();
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v11 = (v10 >> 1) + v10;
    v12 = v9;
    if ( v11 >= v9 )
      v12 = v11;
    if ( v12 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v8 = v12;
  }
  v13 = v8;
  v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v8);
  v15 = &v14[v6];
  *v15 = *a3;
  v16 = *(_BYTE **)(a1 + 8);
  v17 = *(_BYTE **)a1;
  v18 = v14;
  if ( a2 == v16 )
  {
    v19 = v16 - v17;
  }
  else
  {
    memmove_0(v14, v17, (size_t)&a2[-*(_QWORD *)a1]);
    v18 = v15 + 1;
    v19 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v17 = a2;
  }
  memmove_0(v18, v17, v19);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = v14;
  *(_QWORD *)(a1 + 8) = &v14[v9];
  *(_QWORD *)(a1 + 16) = &v14[v13];
  return v15;
}
