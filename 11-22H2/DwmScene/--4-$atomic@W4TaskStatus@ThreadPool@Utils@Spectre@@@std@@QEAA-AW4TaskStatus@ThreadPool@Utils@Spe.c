/*
 * XREFs of ??4?$atomic@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@QEAA?AW4TaskStatus@ThreadPool@Utils@Spectre@@W42345@@Z @ 0x1800A5554
 * Callers:
 *     ?GetCompletedTaskHandler@Utils@Spectre@@YA?AV?$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@@@std@@XZ @ 0x1800DF714 (-GetCompletedTaskHandler@Utils@Spectre@@YA-AV-$shared_ptr@VTaskHandler@ThreadPool@Utils@Spectre@.c)
 * Callees:
 *     ?store@?$_Atomic_storage@W4TaskStatus@ThreadPool@Utils@Spectre@@$03@std@@QEAAXW4TaskStatus@ThreadPool@Utils@Spectre@@@Z @ 0x1800A560C (-store@-$_Atomic_storage@W4TaskStatus@ThreadPool@Utils@Spectre@@$03@std@@QEAAXW4TaskStatus@Threa.c)
 */

__int64 __fastcall std::atomic<enum Spectre::Utils::ThreadPool::TaskStatus>::operator=(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // r9d

  std::_Atomic_storage<enum Spectre::Utils::ThreadPool::TaskStatus,4>::store(a1, a2, a3, (unsigned int)a2);
  return v3;
}
