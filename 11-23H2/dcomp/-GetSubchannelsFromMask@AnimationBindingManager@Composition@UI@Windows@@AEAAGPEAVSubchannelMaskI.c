/*
 * XREFs of ?GetSubchannelsFromMask@AnimationBindingManager@Composition@UI@Windows@@AEAAGPEAVSubchannelMaskInfo@@@Z @ 0x18004D060
 * Callers:
 *     ?TryFindTargetAnimator@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUHSTRING__@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x180006228 (-TryFindTargetAnimator@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@.c)
 *     ?StopAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x18004D5B0 (-StopAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAVExpressionObjectPropertyInfo@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAVCompositionPropertyAnimator@234@@Z @ 0x180050220 (-RegisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@23.c)
 *     ?UnregisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUHSTRING__@@_N@Z @ 0x18016959C (-UnregisterAnimationTarget@AnimationBindingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@.c)
 * Callees:
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 *     ?GetSubchannels@MatrixSubchannelMaskInfo@@QEBAGXZ @ 0x1801B3544 (-GetSubchannels@MatrixSubchannelMaskInfo@@QEBAGXZ.c)
 */

unsigned __int16 __fastcall Windows::UI::Composition::AnimationBindingManager::GetSubchannelsFromMask(
        Windows::UI::Composition::AnimationBindingManager *this,
        struct SubchannelMaskInfo *a2)
{
  __int16 v2; // cx
  int v4; // r9d
  int i; // r10d
  char v6; // al

  v2 = 0;
  if ( !a2 )
    return -1;
  if ( *(_DWORD *)a2 == 1 )
  {
    v4 = *((unsigned __int8 *)a2 + 4);
    if ( !(_BYTE)v4 )
      return -1;
    for ( i = 0; i < v4; ++i )
    {
      v6 = v4 - i;
      v2 |= 1 << ((*((unsigned __int8 *)a2 + 8) >> (2 * v6 - 2)) & 3);
    }
    return v2;
  }
  else
  {
    if ( *(_DWORD *)a2 != 2 )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    return MatrixSubchannelMaskInfo::GetSubchannels(a2);
  }
}
