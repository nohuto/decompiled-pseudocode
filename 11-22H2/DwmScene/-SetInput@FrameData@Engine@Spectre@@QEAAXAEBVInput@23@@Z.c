/*
 * XREFs of ?SetInput@FrameData@Engine@Spectre@@QEAAXAEBVInput@23@@Z @ 0x1800743D8
 * Callers:
 *     ?UpdateScenes@Engine@1Spectre@@MEAAXXZ @ 0x180037A80 (-UpdateScenes@Engine@1Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?store@?$_Atomic_storage@J$03@std@@QEAAXJ@Z @ 0x180038E68 (-store@-$_Atomic_storage@J$03@std@@QEAAXJ@Z.c)
 *     ??$_Assign_range@PEAUMessageEvent@Engine@Spectre@@@?$vector@UMessageEvent@Engine@Spectre@@V?$allocator@UMessageEvent@Engine@Spectre@@@std@@@std@@AEAAXPEAUMessageEvent@Engine@Spectre@@0Uforward_iterator_tag@1@@Z @ 0x1800742D8 (--$_Assign_range@PEAUMessageEvent@Engine@Spectre@@@-$vector@UMessageEvent@Engine@Spectre@@V-$all.c)
 */

void __fastcall Spectre::Engine::FrameData::SetInput(
        Spectre::Engine::FrameData *this,
        const struct Spectre::Engine::Input *a2)
{
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 24) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 40) = *((_OWORD *)a2 + 2);
  std::_Atomic_storage<long,4>::store((__int64)this + 56, 0);
  if ( (char *)this + 64 != (char *)a2 + 56 )
    std::vector<Spectre::Engine::MessageEvent>::_Assign_range<Spectre::Engine::MessageEvent *>(
      (_QWORD *)this + 8,
      *((void **)a2 + 7),
      *((_QWORD *)a2 + 8));
  *((_QWORD *)this + 11) = *((_QWORD *)a2 + 10);
}
