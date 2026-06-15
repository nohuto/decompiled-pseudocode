/*
 * XREFs of AudioServerSetAudioStreamWindow @ 0x180125110
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetAudioStreamWindow@CVADServer@@QEAAJPEAUHWND__@@@Z @ 0x18011F6F0 (-SetAudioStreamWindow@CVADServer@@QEAAJPEAUHWND__@@@Z.c)
 */

__int64 __fastcall AudioServerSetAudioStreamWindow(CVADServer *a1, HWND a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CVADServer::SetAudioStreamWindow(a1, a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCEA,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
