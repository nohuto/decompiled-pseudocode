/*
 * XREFs of ?store@?$_Atomic_storage@W4TaskStatus@ThreadPool@Utils@Spectre@@$03@std@@QEAAXW4TaskStatus@ThreadPool@Utils@Spectre@@@Z @ 0x1800A560C
 * Callers:
 *     ??4?$atomic@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@QEAA?AW4TaskStatus@ThreadPool@Utils@Spectre@@W42345@@Z @ 0x1800A5554 (--4-$atomic@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@QEAA-AW4TaskStatus@ThreadPool@Utils@Spe.c)
 * Callees:
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 *     ??$_Atomic_reinterpret_as@JW4TaskStatus@ThreadPool@Utils@Spectre@@@std@@YAJAEBW4TaskStatus@ThreadPool@Utils@Spectre@@@Z @ 0x1800A53C4 (--$_Atomic_reinterpret_as@JW4TaskStatus@ThreadPool@Utils@Spectre@@@std@@YAJAEBW4TaskStatus@Threa.c)
 */

volatile __int32 *__fastcall std::_Atomic_storage<enum Spectre::Utils::ThreadPool::TaskStatus,4>::store(
        __int64 a1,
        unsigned int a2)
{
  __int64 v2; // r8
  volatile __int32 *result; // rax
  __int32 v4; // edx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  std::_Atomic_reinterpret_as<long,enum Spectre::Utils::ThreadPool::TaskStatus>(&v5);
  result = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(v2);
  _InterlockedExchange(result, v4);
  return result;
}
