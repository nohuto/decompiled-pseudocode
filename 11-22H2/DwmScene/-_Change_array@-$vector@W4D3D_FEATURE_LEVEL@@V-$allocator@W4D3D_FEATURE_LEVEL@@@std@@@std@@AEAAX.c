/*
 * XREFs of ?_Change_array@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@AEAAXQEAW4D3D_FEATURE_LEVEL@@_K1@Z @ 0x1800DBAEC
 * Callers:
 *     ??$_Emplace_reallocate@AEBW4D3D_FEATURE_LEVEL@@@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAAPEAW4D3D_FEATURE_LEVEL@@QEAW42@AEBW42@@Z @ 0x1800DAC64 (--$_Emplace_reallocate@AEBW4D3D_FEATURE_LEVEL@@@-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D.c)
 *     ??$_Emplace_reallocate@W4D3D_FEATURE_LEVEL@@@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAAPEAW4D3D_FEATURE_LEVEL@@QEAW42@$$QEAW42@@Z @ 0x1800DAD54 (--$_Emplace_reallocate@W4D3D_FEATURE_LEVEL@@@-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D_FE.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800100E8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<enum D3D_FEATURE_LEVEL>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 4 * a3;
  result = a2 + 4 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
