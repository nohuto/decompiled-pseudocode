/*
 * XREFs of ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x1800EEEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z @ 0x1800E4878 (-GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z.c)
 *     ?ValidateStreamHandle@CVADServer@@IEAAJ_K@Z @ 0x1800F0928 (-ValidateStreamHandle@CVADServer@@IEAAJ_K@Z.c)
 */

__int64 __fastcall CVADServer::GetStreamLatency(CVADServer *this, unsigned __int64 a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // esi
  int StreamLatency; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v15 = v3;
  if ( !a3 )
  {
    v7 = -2147467261;
    v8 = 2005LL;
    v9 = 2147500035LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v9);
    goto LABEL_14;
  }
  if ( !*((_DWORD *)this + 46) )
  {
    v7 = -2004287487;
    v8 = 2006LL;
    v9 = 2290679809LL;
    goto LABEL_12;
  }
  if ( !*((_QWORD *)this + 24) )
  {
    v7 = -2004287487;
    v8 = 2007LL;
    v9 = 2290679809LL;
    goto LABEL_12;
  }
  v10 = CVADServer::ValidateStreamHandle(this, a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    StreamLatency = CAudioStream::GetStreamLatency(*((CAudioStream **)this + 24), a3);
    v7 = StreamLatency;
    if ( StreamLatency >= 0 )
    {
      v7 = 0;
      goto LABEL_14;
    }
    v9 = (unsigned int)StreamLatency;
    v8 = 2013LL;
    goto LABEL_12;
  }
  v7 = -2005139336;
  if ( v10 != -2005139336 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D8,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v10);
    v7 = v11;
  }
LABEL_14:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v15);
  return v7;
}
