/*
 * XREFs of ?store@?$_Atomic_storage@J$03@std@@QEAAXJ@Z @ 0x180038E68
 * Callers:
 *     ??0SpinLock@Engine@Spectre@@QEAA@XZ @ 0x1800315CC (--0SpinLock@Engine@Spectre@@QEAA@XZ.c)
 *     ?SetInput@FrameData@Engine@Spectre@@QEAAXAEBVInput@23@@Z @ 0x1800743D8 (-SetInput@FrameData@Engine@Spectre@@QEAAXAEBVInput@23@@Z.c)
 *     ScopeWarden__lambda_3aa3fb67584ff5ca5917bc97905e2675___::_ScopeWarden__lambda_3aa3fb67584ff5ca5917bc97905e2675___ @ 0x1800DE030 (ScopeWarden__lambda_3aa3fb67584ff5ca5917bc97905e2675___--_ScopeWarden__lambda_3aa3fb67584ff5ca59.c)
 * Callees:
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 *     ??$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z @ 0x18002E0A0 (--$_Atomic_reinterpret_as@JJ@std@@YAJAEBJ@Z.c)
 */

volatile __int32 *__fastcall std::_Atomic_storage<long,4>::store(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  volatile __int32 *result; // rax
  __int32 v4; // edx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  std::_Atomic_reinterpret_as<long,long>(&v5);
  result = (volatile __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(v2);
  _InterlockedExchange(result, v4);
  return result;
}
