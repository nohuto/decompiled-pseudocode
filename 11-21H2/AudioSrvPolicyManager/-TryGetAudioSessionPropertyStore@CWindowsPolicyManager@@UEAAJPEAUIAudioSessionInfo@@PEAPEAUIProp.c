/*
 * XREFs of ?TryGetAudioSessionPropertyStore@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x18000D8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x180034ED0 (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 */

unsigned int __fastcall CWindowsPolicyManager::TryGetAudioSessionPropertyStore(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        struct IPropertyStore **a3)
{
  unsigned int result; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = LoadPropertyStore(a2, a3);
  v4 = result;
  if ( (result & 0x80000000) == 0 )
    return 0;
  if ( result != -2147024894 && result != -2147024891 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x37E,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)result);
    return v4;
  }
  return result;
}
