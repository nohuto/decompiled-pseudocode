/*
 * XREFs of ??E?$_Atomic_integral@_K$07@std@@QEAA_KXZ @ 0x180012548
 * Callers:
 *     ?NotifyTransformChanged@SceneNode@Engine@Spectre@@AEAAXXZ @ 0x180012728 (-NotifyTransformChanged@SceneNode@Engine@Spectre@@AEAAXXZ.c)
 *     ??0Material@Engine@Spectre@@QEAA@XZ @ 0x18004391C (--0Material@Engine@Spectre@@QEAA@XZ.c)
 *     ??0Texture@Engine@Spectre@@QEAA@XZ @ 0x180055258 (--0Texture@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     ??$_Atomic_address_as@_JU?$_Atomic_padded@_K@std@@@std@@YAPEC_JAEAU?$_Atomic_padded@_K@0@@Z @ 0x180012030 (--$_Atomic_address_as@_JU-$_Atomic_padded@_K@std@@@std@@YAPEC_JAEAU-$_Atomic_padded@_K@0@@Z.c)
 */

signed __int64 __fastcall std::_Atomic_integral<unsigned __int64,8>::operator++(__int64 a1)
{
  return _InterlockedIncrement64((volatile signed __int64 *)std::_Atomic_address_as<__int64,std::_Atomic_padded<unsigned __int64>>(a1));
}
