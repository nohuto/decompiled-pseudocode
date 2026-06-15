/*
 * XREFs of ?GetStreamAmbHeadTracking@CVADServer@@UEAAJ_KPEAH@Z @ 0x18011E000
 * Callers:
 *     AudioServerGetAmbHeadTracking @ 0x1801208E0 (AudioServerGetAmbHeadTracking.c)
 * Callees:
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x180013530 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::GetStreamAmbHeadTracking(CVADServer *this, __int64 a2, int *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v7; // rdx
  int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  if ( !*((_DWORD *)this + 40) )
  {
    v7 = 2010LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    if ( v3 )
      LeaveCriticalSection(v3);
    return 2290679809LL;
  }
  if ( !*((_QWORD *)this + 21) )
  {
    v7 = 2011LL;
    goto LABEL_5;
  }
  v9 = CVADServer::ValidateStreamHandle(this, a2);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = *(_QWORD *)(*((_QWORD *)this + 21) + 224LL);
    if ( v12 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 40LL))(v12, a3);
      v11 = v14;
      if ( v14 == -2005139384 )
      {
        v11 = -2147024809;
      }
      else if ( v14 >= 0 )
      {
        if ( v3 )
          LeaveCriticalSection(v3);
        return 0LL;
      }
      v13 = 516LL;
    }
    else
    {
      v11 = -2147024809;
      v13 = 506LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)v11);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7E1,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v11);
    goto LABEL_10;
  }
  v11 = -2005139336;
  if ( v9 == -2005139336 )
  {
LABEL_10:
    if ( v3 )
      LeaveCriticalSection(v3);
    return v11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7DC,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v9);
  if ( v3 )
    LeaveCriticalSection(v3);
  return v10;
}
