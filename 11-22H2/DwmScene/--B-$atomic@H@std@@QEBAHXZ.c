/*
 * XREFs of ??B?$atomic@H@std@@QEBAHXZ @ 0x18001D348
 * Callers:
 *     ?Output@LevelSettings@Trace@@QEAAXW4Level@2@PEBDPEAD@Z @ 0x18001D938 (-Output@LevelSettings@Trace@@QEAAXW4Level@2@PEBDPEAD@Z.c)
 *     ??0FrameBuffer@Engine@Spectre@@QEAA@XZ @ 0x180027E0C (--0FrameBuffer@Engine@Spectre@@QEAA@XZ.c)
 *     ?GetUpdateVersion@Scene@Engine@Spectre@@QEBAHXZ @ 0x180057A5C (-GetUpdateVersion@Scene@Engine@Spectre@@QEBAHXZ.c)
 *     ??0DepthBuffer@Engine@Spectre@@QEAA@XZ @ 0x18006EF84 (--0DepthBuffer@Engine@Spectre@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::atomic<int>::operator int()
{
  return std::_Atomic_storage<int,4>::load();
}
