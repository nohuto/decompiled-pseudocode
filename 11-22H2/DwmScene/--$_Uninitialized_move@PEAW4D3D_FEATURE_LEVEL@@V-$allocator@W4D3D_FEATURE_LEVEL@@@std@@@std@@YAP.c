/*
 * XREFs of ??$_Uninitialized_move@PEAW4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@YAPEAW4D3D_FEATURE_LEVEL@@QEAW41@0PEAW41@AEAV?$allocator@W4D3D_FEATURE_LEVEL@@@0@@Z @ 0x1800DAF3C
 * Callers:
 *     ??$_Emplace_reallocate@AEBW4D3D_FEATURE_LEVEL@@@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAAPEAW4D3D_FEATURE_LEVEL@@QEAW42@AEBW42@@Z @ 0x1800DAC64 (--$_Emplace_reallocate@AEBW4D3D_FEATURE_LEVEL@@@-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D.c)
 *     ??$_Emplace_reallocate@W4D3D_FEATURE_LEVEL@@@?$vector@W4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@QEAAPEAW4D3D_FEATURE_LEVEL@@QEAW42@$$QEAW42@@Z @ 0x1800DAD54 (--$_Emplace_reallocate@W4D3D_FEATURE_LEVEL@@@-$vector@W4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D_FE.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4D3D_FEATURE_LEVEL@@PEAW41@@std@@YAPEAW4D3D_FEATURE_LEVEL@@PEAW41@00@Z @ 0x1800DAB10 (--$_Copy_memmove@PEAW4D3D_FEATURE_LEVEL@@PEAW41@@std@@YAPEAW4D3D_FEATURE_LEVEL@@PEAW41@00@Z.c)
 */

char *__fastcall std::_Uninitialized_move<enum D3D_FEATURE_LEVEL *>(void *a1, __int64 a2, char *a3)
{
  std::_Copy_memmove<enum D3D_FEATURE_LEVEL *,enum D3D_FEATURE_LEVEL *>(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
