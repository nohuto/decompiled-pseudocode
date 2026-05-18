/*
 * XREFs of ??$_Copy_memmove@PEAIPEAI@std@@YAPEAIPEAI00@Z @ 0x18001E904
 * Callers:
 *     ??$_Assign_range@PEAI@?$vector@IV?$allocator@I@std@@@std@@AEAAXPEAI0Uforward_iterator_tag@1@@Z @ 0x18001E8A4 (--$_Assign_range@PEAI@-$vector@IV-$allocator@I@std@@@std@@AEAAXPEAI0Uforward_iterator_tag@1@@Z.c)
 *     ??$_Uninitialized_move@PEAIV?$allocator@I@std@@@std@@YAPEAIQEAI0PEAIAEAV?$allocator@I@0@@Z @ 0x18001EE78 (--$_Uninitialized_move@PEAIV-$allocator@I@std@@@std@@YAPEAIQEAI0PEAIAEAV-$allocator@I@0@@Z.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<unsigned int *,unsigned int *>(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
