/*
 * XREFs of ??$_Copy_memmove@PEAUMessageEvent@Engine@Spectre@@PEAU123@@std@@YAPEAUMessageEvent@Engine@Spectre@@PEAU123@00@Z @ 0x180074338
 * Callers:
 *     ??$_Assign_range@PEAUMessageEvent@Engine@Spectre@@@?$vector@UMessageEvent@Engine@Spectre@@V?$allocator@UMessageEvent@Engine@Spectre@@@std@@@std@@AEAAXPEAUMessageEvent@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x1800742D8 (--$_Assign_range@PEAUMessageEvent@Engine@Spectre@@@-$vector@UMessageEvent@Engine@Spectre@@V-$all.c)
 * Callees:
 *     memmove_0 @ 0x18000CA85 (memmove_0.c)
 */

__int64 __fastcall std::_Copy_memmove<Spectre::Engine::MessageEvent *,Spectre::Engine::MessageEvent *>(
        void *Src,
        __int64 a2,
        void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove_0(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
