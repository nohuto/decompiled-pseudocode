/*
 * XREFs of _CBtLeAudioResourceManager::RefreshStreamsOnDevice_::_1_::catch$62 @ 0x1800FC9B4
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800D2C74 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CBtLeAudioResourceManager::RefreshStreamsOnDevice_::_1_::catch_62(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 264) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 248),
                            (void *)0xF3,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
                            a4);
  return 0LL;
}
