/*
 * XREFs of ??$_Copy_memmove@PEAPEAVSpectreWorld@@PEAPEAV1@@std@@YAPEAPEAVSpectreWorld@@PEAPEAV1@00@Z @ 0x180016D8C
 * Callers:
 *     ??$_Uninitialized_move@PEAPEAVSpectreWorld@@V?$allocator@PEAVSpectreWorld@@@std@@@std@@YAPEAPEAVSpectreWorld@@QEAPEAV1@0PEAPEAV1@AEAV?$allocator@PEAVSpectreWorld@@@0@@Z @ 0x1800170D4 (--$_Uninitialized_move@PEAPEAVSpectreWorld@@V-$allocator@PEAVSpectreWorld@@@std@@@std@@YAPEAPEAV.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<SpectreWorld * *,SpectreWorld * *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
