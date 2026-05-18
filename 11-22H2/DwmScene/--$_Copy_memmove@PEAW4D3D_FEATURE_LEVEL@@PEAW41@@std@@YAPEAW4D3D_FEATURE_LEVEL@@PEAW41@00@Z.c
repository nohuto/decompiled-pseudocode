/*
 * XREFs of ??$_Copy_memmove@PEAW4D3D_FEATURE_LEVEL@@PEAW41@@std@@YAPEAW4D3D_FEATURE_LEVEL@@PEAW41@00@Z @ 0x1800DAB10
 * Callers:
 *     ??$_Uninitialized_move@PEAW4D3D_FEATURE_LEVEL@@V?$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@YAPEAW4D3D_FEATURE_LEVEL@@QEAW41@0PEAW41@AEAV?$allocator@W4D3D_FEATURE_LEVEL@@@0@@Z @ 0x1800DAF3C (--$_Uninitialized_move@PEAW4D3D_FEATURE_LEVEL@@V-$allocator@W4D3D_FEATURE_LEVEL@@@std@@@std@@YAP.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<enum D3D_FEATURE_LEVEL *,enum D3D_FEATURE_LEVEL *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
