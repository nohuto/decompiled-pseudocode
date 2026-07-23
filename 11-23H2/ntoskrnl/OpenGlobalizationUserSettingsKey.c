/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x140371B9C
 * Callers:
 *     ExpSetPendingUILanguage @ 0x1407FC5B8 (ExpSetPendingUILanguage.c)
 *     NtSetDefaultLocale @ 0x1407FCB40 (NtSetDefaultLocale.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060FF90 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x140610230 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlIsMultiSessionSku @ 0x1407ECFF0 (RtlIsMultiSessionSku.c)
 *     RtlOpenCurrentUser @ 0x1407FC480 (RtlOpenCurrentUser.c)
 *     RtlIsMultiUsersInSessionSku @ 0x1409BC480 (RtlIsMultiUsersInSessionSku.c)
 */

NTSTATUS __fastcall OpenGlobalizationUserSettingsKey(int a1, __int64 a2, HANDLE *a3)
{
  int v4; // ecx
  int v5; // ecx
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  if ( !a3 )
    return -1073741811;
  v4 = dword_140C64A18;
  if ( !dword_140C64A18 )
  {
    if ( RtlIsMultiSessionSku() )
      v4 = 1;
    else
      v4 = (RtlIsMultiUsersInSessionSku() != 0) + 2;
    dword_140C64A18 = v4;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return RtlOpenCurrentUser(8u, a3);
  v7 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v7 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(v7, a3);
  if ( (_DWORD)v7 != 1 )
    return -1073741595;
  v8 = 0;
  return OpenGlobalizationUserSettingsKey_ForMua(v7, a2, a3, &v8);
}
