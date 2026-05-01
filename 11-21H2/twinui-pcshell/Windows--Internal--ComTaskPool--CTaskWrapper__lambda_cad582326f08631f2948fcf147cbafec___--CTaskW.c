/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___::CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec_____lambda_cad582326f08631f2948fcf147cbafec___ @ 0x180198BA8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_cad582326f08631f2948fcf147cbafec___ @ 0x180199DF4 (Windows--Internal--ComTaskPool--QueueTask__lambda_cad582326f08631f2948fcf147cbafec___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180087160 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec___::CTaskWrapper__lambda_cad582326f08631f2948fcf147cbafec_____lambda_cad582326f08631f2948fcf147cbafec___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)a2;
  winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
    (winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)(a1 + 24),
    (const struct winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)(a2 + 8));
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = (_QWORD *)(a2 + 16);
  if ( a1 + 32 != a2 + 16 )
  {
    *(_QWORD *)(a1 + 32) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)a1 = off_180642C68;
  return a1;
}
