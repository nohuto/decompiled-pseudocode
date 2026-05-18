/*
 * XREFs of ??$_Copy_memmove@PEAGPEAG@std@@YAPEAGPEAG00@Z @ 0x18008C8A0
 * Callers:
 *     ??$_Uninitialized_move@PEAGV?$allocator@G@std@@@std@@YAPEAGQEAG0PEAGAEAV?$allocator@G@0@@Z @ 0x18008CCE8 (--$_Uninitialized_move@PEAGV-$allocator@G@std@@@std@@YAPEAGQEAG0PEAGAEAV-$allocator@G@0@@Z.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<unsigned short *,unsigned short *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
