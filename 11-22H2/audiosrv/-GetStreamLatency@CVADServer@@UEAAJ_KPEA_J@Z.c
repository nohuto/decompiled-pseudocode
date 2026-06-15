/*
 * XREFs of ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x18011E240
 * Callers:
 *     AudioServerGetStreamLatency @ 0x180122E70 (AudioServerGetStreamLatency.c)
 * Callees:
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180013530 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z @ 0x1800EC5BC (-GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z.c)
 */

__int64 __fastcall CVADServer::GetStreamLatency(CVADServer *this, __int64 a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int StreamLatency; // edi
  __int64 v8; // rdx
  __int64 v10; // rdx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  if ( !a3 )
  {
    StreamLatency = -2147467261;
    v8 = 1922LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)StreamLatency);
    if ( v3 )
      LeaveCriticalSection(v3);
    return (unsigned int)StreamLatency;
  }
  if ( !*((_DWORD *)this + 40) )
  {
    v10 = 1923LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    if ( v3 )
      LeaveCriticalSection(v3);
    return 2290679809LL;
  }
  if ( !*((_QWORD *)this + 21) )
  {
    v10 = 1924LL;
    goto LABEL_10;
  }
  v11 = CVADServer::ValidateStreamHandle(this, a2);
  StreamLatency = v11;
  if ( v11 >= 0 )
  {
    StreamLatency = CAudioStream::GetStreamLatency(*((CAudioStream **)this + 21), a3);
    if ( StreamLatency < 0 )
    {
      v8 = 1930LL;
      goto LABEL_3;
    }
    if ( v3 )
      LeaveCriticalSection(v3);
    return 0LL;
  }
  else
  {
    if ( v11 != -2005139336 )
    {
      v8 = 1925LL;
      goto LABEL_3;
    }
    if ( v3 )
      LeaveCriticalSection(v3);
    return 2289827960LL;
  }
}
