/*
 * XREFs of ??E?$_Atomic_integral@I$03@std@@QEAAIXZ @ 0x180070118
 * Callers:
 *     ?GetUniqueID@ResourceManager@Engine@Spectre@@QEBA_KII@Z @ 0x1800702C8 (-GetUniqueID@ResourceManager@Engine@Spectre@@QEBA_KII@Z.c)
 *     ??0TaskHandler@ThreadPool@Utils@Spectre@@QEAA@XZ @ 0x1800DF608 (--0TaskHandler@ThreadPool@Utils@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 */

__int64 __fastcall std::_Atomic_integral<unsigned int,4>::operator++(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(a1));
}
