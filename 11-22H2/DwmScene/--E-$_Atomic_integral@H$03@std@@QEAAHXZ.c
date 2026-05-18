/*
 * XREFs of ??E?$_Atomic_integral@H$03@std@@QEAAHXZ @ 0x18001D354
 * Callers:
 *     ??0RendererResource@Engine@Spectre@@QEAA@W4EType@012@W4Category@PerformanceManager@12@@Z @ 0x18002918C (--0RendererResource@Engine@Spectre@@QEAA@W4EType@012@W4Category@PerformanceManager@12@@Z.c)
 *     ??0ViewerCamera@Engine@Spectre@@QEAA@V?$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z @ 0x180091C94 (--0ViewerCamera@Engine@Spectre@@QEAA@V-$shared_ptr@VSceneNode@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 */

__int64 __fastcall std::_Atomic_integral<int,4>::operator++(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(a1));
}
