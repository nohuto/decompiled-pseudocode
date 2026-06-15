/*
 * XREFs of ?SetStreamAmbRotation@CVADServer@@UEAAJ_KMMMM@Z @ 0x1801201D0
 * Callers:
 *     AudioServerSetAmbRotation @ 0x180124EE0 (AudioServerSetAmbRotation.c)
 * Callees:
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180013530 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetAmbRotation@CAudioStream@@QEAAJMMMM@Z @ 0x1800ED4B0 (-SetAmbRotation@CAudioStream@@QEAAJMMMM@Z.c)
 */

__int64 __fastcall CVADServer::SetStreamAmbRotation(CVADServer *this, __int64 a2, float a3, float a4, float a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v8; // rdx
  int v10; // eax
  int v11; // edi
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  if ( !*((_DWORD *)this + 40) )
  {
    v8 = 2033LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    if ( v5 )
      LeaveCriticalSection(v5);
    return 2290679809LL;
  }
  if ( !*((_QWORD *)this + 21) )
  {
    v8 = 2034LL;
    goto LABEL_5;
  }
  v10 = CVADServer::ValidateStreamHandle(this, a2);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( v10 == -2005139336 )
    {
      if ( v5 )
        LeaveCriticalSection(v5);
      return 2289827960LL;
    }
    v12 = 2035LL;
    goto LABEL_14;
  }
  v11 = CAudioStream::SetAmbRotation(*((CAudioStream **)this + 21), a3, a4, a5);
  if ( v11 < 0 )
  {
    v12 = 2040LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v11);
    if ( v5 )
      LeaveCriticalSection(v5);
    return (unsigned int)v11;
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
