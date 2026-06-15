/*
 * XREFs of ?ResetEndpoint@CVADServer@@UEAAJ_K@Z @ 0x18011F0C0
 * Callers:
 *     AudioServerResetEndpoint @ 0x180124C20 (AudioServerResetEndpoint.c)
 * Callees:
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180013530 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetEndpoint@CAudioStream@@QEAAJXZ @ 0x1800ECF78 (-ResetEndpoint@CAudioStream@@QEAAJXZ.c)
 */

__int64 __fastcall CVADServer::ResetEndpoint(CVADServer *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // esi
  unsigned int v9; // edi
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  if ( !*((_DWORD *)this + 40) )
  {
    v5 = 1860LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    if ( v2 )
      LeaveCriticalSection(v2);
    return 2290679809LL;
  }
  if ( !*((_QWORD *)this + 18) )
  {
    v5 = 1861LL;
    goto LABEL_5;
  }
  v7 = CVADServer::ValidateStreamHandle(this, a2);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = CAudioStream::ResetEndpoint(*((CAudioStream **)this + 21));
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x749,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_10;
    }
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
  else
  {
    v9 = -2005139336;
    if ( v7 == -2005139336 )
    {
LABEL_10:
      if ( v2 )
        LeaveCriticalSection(v2);
      return v9;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x746,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v7);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v8;
  }
}
