/*
 * XREFs of ?store@?$_Atomic_storage@I$03@std@@QEAAXI@Z @ 0x18005E878
 * Callers:
 *     ??4?$atomic@I@std@@QEAAII@Z @ 0x180059BFC (--4-$atomic@I@std@@QEAAII@Z.c)
 * Callees:
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 *     ??$_Atomic_reinterpret_as@JI@std@@YAJAEBI@Z @ 0x1800587F8 (--$_Atomic_reinterpret_as@JI@std@@YAJAEBI@Z.c)
 */

volatile __int32 *std::_Atomic_storage<unsigned int,4>::store()
{
  __int64 v0; // r8
  volatile __int32 *result; // rax
  __int32 v2; // edx
  unsigned int v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = 0;
  std::_Atomic_reinterpret_as<long,unsigned int>(v3);
  result = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(v0);
  _InterlockedExchange(result, v2);
  return result;
}
