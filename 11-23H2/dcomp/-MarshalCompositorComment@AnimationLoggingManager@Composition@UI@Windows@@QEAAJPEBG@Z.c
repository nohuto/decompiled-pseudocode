/*
 * XREFs of ?MarshalCompositorComment@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEBG@Z @ 0x18001D674
 * Callers:
 *     ?RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@System@4@PEAUIUnknown@@PEAVCompositorController@Core@234@W4CreationFlags@1234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001D170 (-RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@Syste.c)
 *     ?SetComment@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x180095110 (-SetComment@CompositorCommon@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?MaybeHashComment@AnimationLoggingManager@Composition@UI@Windows@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18002293C (-MaybeHashComment@AnimationLoggingManager@Composition@UI@Windows@@AEAA-AV-$basic_string@GU-$char.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180022CC4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationLoggingManager::MarshalCompositorComment(
        Windows::UI::Composition::AnimationLoggingManager *this,
        const unsigned __int16 *a2)
{
  void **v3; // r9
  void *v5[4]; // [rsp+30h] [rbp-38h] BYREF

  Windows::UI::Composition::AnimationLoggingManager::MaybeHashComment(this, v5, a2);
  v3 = v5;
  if ( v5[3] >= (void *)8 )
    v3 = (void **)v5[0];
  DirectComposition::CDevice::ResourceSetBufferProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    3u,
    v3,
    2 * (__int64)v5[2] + 2);
  std::wstring::_Tidy_deallocate(v5);
  return 0LL;
}
