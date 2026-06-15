/*
 * XREFs of _CBtAudioResourceManager::CreateSaDeviceOnRenderEndpoint_::_1_::catch$47 @ 0x180114E45
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C76BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CBtAudioResourceManager::CreateSaDeviceOnRenderEndpoint_::_1_::catch_47(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 176) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 168),
                            (void *)0x390,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
                            a4);
  return 0LL;
}
