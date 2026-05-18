/*
 * XREFs of ??F?$_Atomic_integral@H$03@std@@QEAAHXZ @ 0x18001D3C4
 * Callers:
 *     ?Unregister@ETWTraceProvider@Utils@Spectre@@UEAAXXZ @ 0x180021590 (-Unregister@ETWTraceProvider@Utils@Spectre@@UEAAXXZ.c)
 *     ??1RendererResource@Engine@Spectre@@UEAA@XZ @ 0x1800292E8 (--1RendererResource@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 */

__int64 __fastcall std::_Atomic_integral<int,4>::operator--(__int64 a1)
{
  return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(a1));
}
