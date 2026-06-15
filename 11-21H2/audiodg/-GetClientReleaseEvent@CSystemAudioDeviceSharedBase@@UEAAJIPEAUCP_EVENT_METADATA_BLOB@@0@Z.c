/*
 * XREFs of ?GetClientReleaseEvent@CSystemAudioDeviceSharedBase@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x140056770
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetClientReleaseEvent(
        CSystemAudioDeviceSharedBase *this,
        unsigned int a2,
        struct CP_EVENT_METADATA_BLOB *a3,
        struct CP_EVENT_METADATA_BLOB *a4)
{
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp-58h] BYREF
  __int128 v13; // [rsp+38h] [rbp-50h]
  __int128 v14; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v13 = *(_OWORD *)((char *)this + 248);
  v14 = v13;
  EtwEventActivityIdControl(4LL, &v14);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v8 = *((_QWORD *)this + 41);
  v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct CP_EVENT_METADATA_BLOB *, struct CP_EVENT_METADATA_BLOB *))(*(_QWORD *)v8 + 32LL))(
         v8,
         a2,
         a3,
         a4);
  v10 = v9;
  if ( v9 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD6,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
      (const char *)(unsigned int)v9);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v12);
  EtwEventActivityIdControl(4LL, &v14);
  return v10;
}
