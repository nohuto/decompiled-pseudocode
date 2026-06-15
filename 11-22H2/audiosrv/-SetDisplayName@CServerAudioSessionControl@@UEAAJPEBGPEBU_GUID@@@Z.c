/*
 * XREFs of ?SetDisplayName@CServerAudioSessionControl@@UEAAJPEBGPEBU_GUID@@@Z @ 0x180081B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetDisplayName(
        CServerAudioSessionControl *this,
        const unsigned __int16 *a2,
        const struct _GUID *a3,
        __int64 a4)
{
  unsigned __int64 v4; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( v4 <= 0x3E8 )
  {
    LOBYTE(a4) = 1;
    return (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, const struct _GUID *, __int64))(**((_QWORD **)this + 9) + 192LL))(
             *((_QWORD *)this + 9),
             a2,
             a3,
             a4);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
