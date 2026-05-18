/*
 * XREFs of ??$_Zero_range@PEAI@std@@YAPEAIQEAI0@Z @ 0x180054F0C
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F13C (--$_Resize@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18008F210 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@IV-$allocator@I@std@@@std@@AEAAX_KAEBU_Val.c)
 * Callees:
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 */

__int64 __fastcall std::_Zero_range<unsigned int *>(void *a1, __int64 a2)
{
  memset_0(a1, 0, a2 - (_QWORD)a1);
  return a2;
}
