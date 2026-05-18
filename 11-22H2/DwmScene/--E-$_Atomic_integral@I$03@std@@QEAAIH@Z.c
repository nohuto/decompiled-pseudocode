/*
 * XREFs of ??E?$_Atomic_integral@I$03@std@@QEAAIH@Z @ 0x180059D1C
 * Callers:
 *     ?DeserializeSampler@BaseShaderExtension@Engine@Spectre@@KA?AV?$shared_ptr@VSampler@Engine@Spectre@@@std@@PEAVRenderDevice@23@PEBUSamplerDefinition@Framework@3@@Z @ 0x18009A1BC (-DeserializeSampler@BaseShaderExtension@Engine@Spectre@@KA-AV-$shared_ptr@VSampler@Engine@Spectr.c)
 * Callees:
 *     ??$_Atomic_address_as@JU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPECJAEAU?$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@0@@Z @ 0x18001C77C (--$_Atomic_address_as@JU-$_Atomic_padded@W4TaskStatus@ThreadPool@Utils@Spectre@@@std@@@std@@YAPE.c)
 */

__int64 __fastcall std::_Atomic_integral<unsigned int,4>::operator++(__int64 a1)
{
  return (unsigned int)_InterlockedExchangeAdd(
                         (volatile signed __int32 *)std::_Atomic_address_as<long,std::_Atomic_padded<enum Spectre::Utils::ThreadPool::TaskStatus>>(a1),
                         1u);
}
