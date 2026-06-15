/*
 * XREFs of ?SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z @ 0x1800EDDE4
 * Callers:
 *     ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x18011F790 (-SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z.c)
 * Callees:
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180018874 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioStream::SetStreamChannelVolume(CAudioStream *this, unsigned int a2, float a3, int *a4)
{
  __int64 v6; // rax
  float v7; // xmm7_4
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a2 < *((_DWORD *)this + 24) )
  {
    v6 = *((_QWORD *)this + 15);
    v7 = *(float *)(v6 + 4LL * a2);
    *(float *)(v6 + 4LL * a2) = a3;
    CAudioStream::RecalculateVolume(this, 0, 0LL);
    if ( a4 )
      *a4 = v7 == a3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x342,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
