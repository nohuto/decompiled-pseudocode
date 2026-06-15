/*
 * XREFs of ?IsExclusiveModeSession@CAudioSession@@QEAAHXZ @ 0x1800D8C44
 * Callers:
 *     std::find_if_std::_List_const_iterator_std::_List_val_std::_List_simple_types_std::pair_CAudioSessionInstanceId_const__wil::com_ptr_t_CAudioSession_wil::err_returncode_policy___________lambda_badcd54a9567467c8cd0af6fdc9e1627___ @ 0x1800DEBFC (std--find_if_std--_List_const_iterator_std--_List_val_std--_List_simple_types_std--pair_CAudioSe.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     WPP_SF_S @ 0x1800C6210 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::IsExclusiveModeSession(CAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  unsigned int v3; // ebx
  __int64 i; // rdx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v6 = v1;
  v3 = 0;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x59u, (__int64)&WPP_d4601149da203bf03f1316021d4590fb_Traceguids, 0LL);
  }
  for ( i = *((_QWORD *)this + 14); i != *((_QWORD *)this + 15); i += 8LL )
  {
    if ( *(_BYTE *)(*(_QWORD *)i + 40LL) )
      v3 = 1;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v6);
  return v3;
}
