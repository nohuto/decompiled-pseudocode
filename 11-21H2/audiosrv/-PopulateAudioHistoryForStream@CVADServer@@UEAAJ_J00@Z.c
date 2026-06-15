/*
 * XREFs of ?PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z @ 0x1800EF150
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800026F0 (--1-$com_ptr_t@UISessionInternalEvents@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?attach@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z @ 0x1800E5F3C (-attach@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z.c)
 */

__int64 __fastcall CVADServer::PopulateAudioHistoryForStream(CVADServer *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  bool v9; // zf
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  char v22; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v24; // [rsp+80h] [rbp+20h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v9 = *((_DWORD *)this + 46) == 0;
  v19 = v4;
  if ( !v9 )
  {
    v12 = *((_QWORD *)this + 24);
    if ( !v12 )
    {
      v10 = -2004287487;
      v11 = 2138LL;
      goto LABEL_7;
    }
    if ( !*((_QWORD *)this + 54) )
    {
      v10 = -2147024809;
      v11 = 2140LL;
      goto LABEL_7;
    }
    v24 = 0LL;
    v13 = (__int64 *)(v12 + 8);
    v14 = *v13;
    v21 = 0LL;
    v20 = &v24;
    v22 = 1;
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v14 + 120))(v13, &v21);
    if ( v22 )
      wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::attach(v20, v21);
    if ( (v10 & 0x80000000) == 0 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, bool))(*(_QWORD *)v24 + 96LL))(
              v24,
              *(_QWORD *)(*((_QWORD *)this + 24) + 48LL),
              a2,
              a3,
              a4,
              *((_DWORD *)this + 142) == 3);
      v10 = v17;
      if ( v17 >= 0 )
      {
        v10 = 0;
        goto LABEL_16;
      }
      v15 = (unsigned int)v17;
      v16 = 2147LL;
    }
    else
    {
      v15 = v10;
      v16 = 2144LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v15);
LABEL_16:
    wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>(&v24);
    goto LABEL_17;
  }
  v10 = -2004287487;
  v11 = 2137LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)v10);
LABEL_17:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v19);
  return v10;
}
