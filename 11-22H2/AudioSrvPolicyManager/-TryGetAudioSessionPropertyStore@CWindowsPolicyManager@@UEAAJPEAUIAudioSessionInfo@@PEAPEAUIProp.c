/*
 * XREFs of ?TryGetAudioSessionPropertyStore@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x18001ECB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x18003E678 (-LoadPropertyStore@@YAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::TryGetAudioSessionPropertyStore(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        struct IPropertyStore **a3)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = LoadPropertyStore(a2, a3);
  v4 = result;
  if ( (int)result >= 0 )
    return 0LL;
  if ( (_DWORD)result != -2147024894 && (_DWORD)result != -2147024891 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x352,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
      (const char *)(unsigned int)result);
    return v4;
  }
  return result;
}
