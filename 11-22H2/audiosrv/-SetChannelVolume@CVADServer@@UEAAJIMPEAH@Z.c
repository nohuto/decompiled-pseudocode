/*
 * XREFs of ?SetChannelVolume@CVADServer@@UEAAJIMPEAH@Z @ 0x18011F7E0
 * Callers:
 *     AudioServerSetChannelVolume @ 0x180125150 (AudioServerSetChannelVolume.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateAudioLevel@@YA_NM@Z @ 0x180050D04 (-ValidateAudioLevel@@YA_NM@Z.c)
 *     WPP_SF_qdg @ 0x1800E4168 (WPP_SF_qdg.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z @ 0x1800EDE34 (-SetStreamChannelVolume@CAudioStream@@QEAAJIMPEAH@Z.c)
 */

__int64 __fastcall CVADServer::SetChannelVolume(CVADServer *this, unsigned int a2, float a3, int *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  CAudioStream *v9; // rcx
  int v10; // edi
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x11u,
      (__int64)&WPP_09ae8f41bb453bc35d3b802f4338d8f9_Traceguids,
      this,
      a2,
      a3);
  }
  if ( !ValidateAudioLevel(a3) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  v9 = (CAudioStream *)*((_QWORD *)this + 21);
  if ( !v9 || !*((_DWORD *)this + 40) )
  {
    v10 = -2004287487;
    v11 = 2128LL;
    goto LABEL_15;
  }
  v10 = CAudioStream::SetStreamChannelVolume(v9, a2, a3, a4);
  if ( v10 < 0 )
  {
    v11 = 2129LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v10);
    if ( v8 )
      LeaveCriticalSection(v8);
    return (unsigned int)v10;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
