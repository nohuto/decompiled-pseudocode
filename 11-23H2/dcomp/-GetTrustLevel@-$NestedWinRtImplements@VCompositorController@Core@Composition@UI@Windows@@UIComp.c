/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositorController@Core@Composition@UI@Windows@@UICompositorControllerPrivate@Private@2345@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x180090020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Core::CompositorController,Windows::UI::Composition::Core::Private::ICompositorControllerPrivate>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 48) + 32LL);
  return result;
}
