/*
 * XREFs of ?store@?$_Atomic_storage@Vid@thread@std@@$03@std@@QEAAXVid@thread@2@@Z @ 0x18002A508
 * Callers:
 *     ??4?$atomic@Vid@thread@std@@@std@@QEAA?AVid@thread@1@V231@@Z @ 0x180029F40 (--4-$atomic@Vid@thread@std@@@std@@QEAA-AVid@thread@1@V231@@Z.c)
 * Callees:
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 *     ??$_Atomic_reinterpret_as@JVid@thread@std@@@std@@YAJAEBVid@thread@0@@Z @ 0x18002994C (--$_Atomic_reinterpret_as@JVid@thread@std@@@std@@YAJAEBVid@thread@0@@Z.c)
 */

volatile __int32 *__fastcall std::_Atomic_storage<std::thread::id,4>::store(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  volatile __int32 *result; // rax
  __int32 v4; // edx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  std::_Atomic_reinterpret_as<long,std::thread::id>(&v5);
  result = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(v2);
  _InterlockedExchange(result, v4);
  return result;
}
