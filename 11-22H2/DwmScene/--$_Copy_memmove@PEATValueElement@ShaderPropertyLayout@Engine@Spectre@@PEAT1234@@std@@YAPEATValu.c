/*
 * XREFs of ??$_Copy_memmove@PEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@@std@@YAPEATValueElement@ShaderPropertyLayout@Engine@Spectre@@PEAT1234@00@Z @ 0x180081560
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180081A04 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@TValueElement@ShaderPropertyLayout@Engine@.c)
 *     ??$_Assign_range@PEATValueElement@ShaderPropertyLayout@Engine@Spectre@@@?$vector@TValueElement@ShaderPropertyLayout@Engine@Spectre@@V?$allocator@TValueElement@ShaderPropertyLayout@Engine@Spectre@@@std@@@std@@AEAAXPEATValueElement@ShaderPropertyLayout@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x180083F98 (--$_Assign_range@PEATValueElement@ShaderPropertyLayout@Engine@Spectre@@@-$vector@TValueElement@S.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<Spectre::Engine::ShaderPropertyLayout::ValueElement *,Spectre::Engine::ShaderPropertyLayout::ValueElement *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
