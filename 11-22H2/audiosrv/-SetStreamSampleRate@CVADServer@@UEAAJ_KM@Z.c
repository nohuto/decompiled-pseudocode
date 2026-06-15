/*
 * XREFs of ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x180120390
 * Callers:
 *     AudioServerSetStreamSampleRate @ 0x180125570 (AudioServerSetStreamSampleRate.c)
 * Callees:
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180013530 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSampleRate@CAudioStream@@QEAAJM@Z @ 0x1800EDDBC (-SetSampleRate@CAudioStream@@QEAAJM@Z.c)
 */

__int64 __fastcall CVADServer::SetStreamSampleRate(CVADServer *this, __int64 a2, float a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v6; // rdx
  int v8; // eax
  int v9; // edi
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  if ( !*((_DWORD *)this + 40) )
  {
    v6 = 1945LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    if ( v3 )
      LeaveCriticalSection(v3);
    return 2290679809LL;
  }
  if ( !*((_QWORD *)this + 21) )
  {
    v6 = 1946LL;
    goto LABEL_5;
  }
  v8 = CVADServer::ValidateStreamHandle(this, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( v8 == -2005139336 )
    {
      if ( v3 )
        LeaveCriticalSection(v3);
      return 2289827960LL;
    }
    v10 = 1947LL;
    goto LABEL_14;
  }
  v9 = CAudioStream::SetSampleRate(*((CAudioStream **)this + 21), a3);
  if ( v9 < 0 )
  {
    v10 = 1953LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v9);
    if ( v3 )
      LeaveCriticalSection(v3);
    return (unsigned int)v9;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
