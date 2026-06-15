/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAUIMixedRealitySpatialAudioFormatPolicyChange@@@?$vector@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@V?$allocator@PEAUIMixedRealitySpatialAudioFormatPolicyChange@@@std@@@std@@QEAAPEAPEAUIMixedRealitySpatialAudioFormatPolicyChange@@QEAPEAU2@AEBQEAU2@@Z @ 0x180024680
 * Callers:
 *     ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CProcess@@QEAAJPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x1800289C8 (-RegisterMixedRealitySpatialAudioFormatPolicyChange@CProcess@@QEAAJPEAUIMixedRealitySpatialAudio.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000AC20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F520 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180016150 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     memmove_0 @ 0x180048B28 (memmove_0.c)
 */

_QWORD *__fastcall std::vector<IMixedRealitySpatialAudioFormatPolicyChange *>::_Emplace_reallocate<IMixedRealitySpatialAudioFormatPolicyChange * const &>(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  _QWORD *v13; // rsi
  _QWORD *v14; // r14
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  void *v17; // rcx
  size_t v18; // r8

  v6 = (__int64)&a2[-*(_QWORD *)a1] >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[v6];
  *v14 = *a3;
  v15 = *(_BYTE **)(a1 + 8);
  v16 = *(_BYTE **)a1;
  v17 = v13;
  if ( a2 == v15 )
  {
    v18 = v15 - v16;
  }
  else
  {
    memmove_0(v13, v16, (size_t)&a2[-*(_QWORD *)a1]);
    v17 = v14 + 1;
    v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
    v16 = a2;
  }
  memmove_0(v17, v16, v18);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)a1 = v13;
  *(_QWORD *)(a1 + 8) = &v13[v9];
  *(_QWORD *)(a1 + 16) = &v13[v8];
  return v14;
}
