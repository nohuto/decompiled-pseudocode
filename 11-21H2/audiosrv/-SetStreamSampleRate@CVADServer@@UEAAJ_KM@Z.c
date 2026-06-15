/*
 * XREFs of ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x1800F06D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSampleRate@CAudioStream@@QEAAJM@Z @ 0x1800E5850 (-SetSampleRate@CAudioStream@@QEAAJM@Z.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x1800F0928 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 */

__int64 __fastcall CVADServer::SetStreamSampleRate(CVADServer *this, unsigned __int64 a2, float a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  bool v6; // zf
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v6 = *((_DWORD *)this + 46) == 0;
  v15 = v3;
  if ( v6 )
  {
    v7 = -2004287487;
    v8 = 2028LL;
    v9 = 2290679809LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v9);
    goto LABEL_12;
  }
  if ( !*((_QWORD *)this + 24) )
  {
    v7 = -2004287487;
    v8 = 2029LL;
    v9 = 2290679809LL;
    goto LABEL_10;
  }
  v10 = CVADServer::ValidateStreamHandle(this, a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = CAudioStream::SetSampleRate(*((CAudioStream **)this + 24), a3);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v7 = 0;
      goto LABEL_12;
    }
    v9 = (unsigned int)v12;
    v8 = 2036LL;
    goto LABEL_10;
  }
  v7 = -2005139336;
  if ( v10 != -2005139336 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7EE,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v10);
    v7 = v11;
  }
LABEL_12:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v15);
  return v7;
}
