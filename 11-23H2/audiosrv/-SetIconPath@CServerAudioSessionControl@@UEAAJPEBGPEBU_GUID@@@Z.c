/*
 * XREFs of ?SetIconPath@CServerAudioSessionControl@@UEAAJPEBGPEBU_GUID@@@Z @ 0x180081B60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetIconPath(
        CServerAudioSessionControl *this,
        const unsigned __int16 *a2,
        const struct _GUID *a3)
{
  unsigned __int64 v3; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 <= 0x3E8 )
    return (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, const struct _GUID *))(**((_QWORD **)this + 9)
                                                                                             + 208LL))(
             *((_QWORD *)this + 9),
             a2,
             a3);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13D,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
