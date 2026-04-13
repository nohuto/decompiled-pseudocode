/*
 * XREFs of ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00@Z @ 0x1800CC174
 * Callers:
 *     ?IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800CA27C (-IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 *     ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x1800CC0AC (-SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0.c)
 * Callees:
 *     ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18003F2D0 (-Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ.c)
 */

__int64 __fastcall CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(
        const WCHAR *this,
        LPCWSTR lpValueName,
        _WORD *lpData,
        const wchar_t *a4)
{
  __int64 v4; // rax
  unsigned int v6; // ebx
  unsigned int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = -1LL;
  v6 = 0;
  do
    ++v4;
  while ( lpData[v4] );
  v8 = RegSetKeyValueW(HKEY_CURRENT_USER, this, lpValueName, 1u, lpData, 2 * v4 + 2);
  if ( v8 )
    return (unsigned int)wil::details::in1diag3::Return_Win32Msg(
                           retaddr,
                           (void *)0xCC,
                           (__int64)"OneCoreUap\\Internal\\Shell\\inc\\ContentDeliveryManagerSettings.h",
                           (const char *)v8,
                           (unsigned __int64)"RegKey: %ws %ws",
                           (const char *)this,
                           lpValueName);
  return v6;
}
