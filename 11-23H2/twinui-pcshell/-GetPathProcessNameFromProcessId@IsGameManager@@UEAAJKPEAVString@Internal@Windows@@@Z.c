/*
 * XREFs of ?GetPathProcessNameFromProcessId@IsGameManager@@UEAAJKPEAVString@Internal@Windows@@@Z @ 0x18003F120
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessFullPathFromProcessId@IsGameManager@@AEAAJKPEAVString@Internal@Windows@@@Z @ 0x18003F1C4 (-GetProcessFullPathFromProcessId@IsGameManager@@AEAAJKPEAVString@Internal@Windows@@@Z.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x1800C0B00 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall IsGameManager::GetPathProcessNameFromProcessId(
        IsGameManager *this,
        unsigned int a2,
        struct Windows::Internal::String *a3)
{
  int ProcessFullPathFromProcessId; // edi
  const wchar_t *StringRawBuffer; // rax
  wchar_t *v6; // rax
  const unsigned __int16 *v7; // rax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+48h] [rbp+20h] BYREF

  string = 0LL;
  ProcessFullPathFromProcessId = IsGameManager::GetProcessFullPathFromProcessId(
                                   this,
                                   a2,
                                   (struct Windows::Internal::String *)&string);
  if ( ProcessFullPathFromProcessId >= 0 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v6 = wcsrchr(StringRawBuffer, 0x5Cu);
    if ( v6 )
      v7 = v6 + 1;
    else
      v7 = WindowsGetStringRawBuffer(string, 0LL);
    if ( v7 )
    {
      ProcessFullPathFromProcessId = Windows::Internal::String::_InitializeHelper(a3, v7);
      if ( ProcessFullPathFromProcessId >= 0 )
      {
        ProcessFullPathFromProcessId = 0;
        goto LABEL_7;
      }
    }
    else
    {
      ProcessFullPathFromProcessId = -2147467261;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x830,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)ProcessFullPathFromProcessId,
      v9);
  }
LABEL_7:
  if ( string )
    WindowsDeleteString(string);
  return (unsigned int)ProcessFullPathFromProcessId;
}
