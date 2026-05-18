/*
 * XREFs of ??E?$_Atomic_integral@H$03@std@@QEAAHH@Z @ 0x18002116C
 * Callers:
 *     ?Register@ETWTraceProvider@Utils@Spectre@@UEAAXXZ @ 0x180021280 (-Register@ETWTraceProvider@Utils@Spectre@@UEAAXXZ.c)
 *     ??0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@std@@@Z @ 0x180025518 (--0RenderDevice@Engine@Spectre@@IEAA@PEAV112@V-$shared_ptr@VPerformanceLogger@Utils@Spectre@@@st.c)
 *     ??0FrameBuffer@Engine@Spectre@@QEAA@XZ @ 0x180027E0C (--0FrameBuffer@Engine@Spectre@@QEAA@XZ.c)
 *     ?Update@Scene@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z @ 0x18004226C (-Update@Scene@Engine@Spectre@@QEAAXAEBVFrameData@23@@Z.c)
 *     ??0DepthBuffer@Engine@Spectre@@QEAA@XZ @ 0x18006EF84 (--0DepthBuffer@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 */

__int64 __fastcall std::_Atomic_integral<int,4>::operator++(__int64 a1)
{
  return (unsigned int)_InterlockedExchangeAdd(
                         (volatile signed __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(a1),
                         1u);
}
