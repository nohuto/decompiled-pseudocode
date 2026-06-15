/*
 * XREFs of ?OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x14006D540
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1400382EC (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x14006B054 (--$find@X@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z @ 0x1400721F4 (-OnPropertyValueChanged@CAPOEndpointNotificationsHandler@@QEAAJU_tagpropertykey@@@Z.c)
 */

__int64 __fastcall CAPOProcessingHost::OnPropertyValueChanged(
        CAPOProcessingHost *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  CAPOEndpointNotificationsHandler *v7; // rcx
  DWORD pid; // eax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-58h] BYREF
  struct _tagpropertykey v13; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  std::wstring::wstring(&v13, (__int64)a2);
  std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>>,0>>::find<void>(
    (_QWORD *)this + 9,
    &v12,
    (__int64)&v13);
  if ( v14 >= 8 )
    std::_Deallocate<16,0>(*(void **)&v13.fmtid.Data1, 2 * v14 + 2);
  if ( v12 == *((_QWORD *)this + 10)
    || (v7 = *(CAPOEndpointNotificationsHandler **)(v12 + 48),
        pid = a3->pid,
        v13.fmtid = a3->fmtid,
        v13.pid = pid,
        v9 = CAPOEndpointNotificationsHandler::OnPropertyValueChanged(v7, &v13),
        v10 = v9,
        v9 >= 0) )
  {
    if ( v3 )
      LeaveCriticalSection(v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25A,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v9);
    if ( v3 )
      LeaveCriticalSection(v3);
    return v10;
  }
}
