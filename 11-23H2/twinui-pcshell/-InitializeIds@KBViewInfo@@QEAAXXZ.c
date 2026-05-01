/*
 * XREFs of ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x1802DB684
 * Callers:
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1802DB81A (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x180515004 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C388C (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1802DA248 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?IsAppDefaultView@KBViewInfo@@QEAA_NXZ @ 0x1802DBD40 (-IsAppDefaultView@KBViewInfo@@QEAA_NXZ.c)
 *     ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18050B238 (--$emplace@AEBI@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ??$find@X@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@1@AEBI@Z @ 0x18050B350 (--$find@X@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$al.c)
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x180510890 (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 *     ?GetViewTypesString@KBViewInfo@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180511124 (-GetViewTypesString@KBViewInfo@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@s.c)
 */

void __fastcall KBViewInfo::InitializeIds(KBViewInfo *this)
{
  Microsoft::WRL::Wrappers::HString *v2; // r14
  __int64 v3; // rdi
  void (__fastcall *v4)(__int64, Microsoft::WRL::Wrappers::HString *); // rbx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rbx
  _QWORD *ViewTypesString; // rax
  HSTRING v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // [rsp+40h] [rbp-9h] BYREF
  __int64 v15; // [rsp+48h] [rbp-1h] BYREF
  __int64 StringRawBuffer; // [rsp+50h] [rbp+7h] BYREF
  __int64 v17[2]; // [rsp+58h] [rbp+Fh] BYREF
  _BYTE v18[32]; // [rsp+68h] [rbp+1Fh] BYREF

  if ( !*((_QWORD *)this + 7) || *((_DWORD *)this + 26) == -1 )
  {
    v2 = (KBViewInfo *)((char *)this + 112);
    if ( !*((_QWORD *)this + 14) )
    {
      v3 = *(_QWORD *)this;
      v4 = *(void (__fastcall **)(__int64, Microsoft::WRL::Wrappers::HString *))(**(_QWORD **)this + 616LL);
      WindowsDeleteString(0LL);
      *(_QWORD *)v2 = 0LL;
      v4(v3, v2);
    }
    if ( !KBViewInfo::IsAppDefaultView(this) )
    {
      LODWORD(v14) = anonymous_namespace_::GetViewTypeFromExperienceId(v2);
      if ( (_DWORD)v14 != -1 )
      {
        v6 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::find<void>(
                                                                                     (char *)this + 40,
                                                                                     v17,
                                                                                     &v14);
        v5 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((_QWORD *)this + 6);
        if ( *v6 == v5 )
          std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
            (char *)this + 40,
            v17,
            &v14);
      }
      v7 = ExperienceManagerUtils::WindowFromViewWrapper(*(ExperienceManagerUtils **)this, v5);
      if ( v7 )
        *((_DWORD *)this + 26) = v7;
      v9 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                       v8,
                       _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
      if ( *v9 > 5u )
      {
        ViewTypesString = (_QWORD *)KBViewInfo::GetViewTypesString(this, v18);
        if ( ViewTypesString[3] >= 8uLL )
          ViewTypesString = (_QWORD *)*ViewTypesString;
        v11 = *(HSTRING *)v2;
        v15 = (__int64)ViewTypesString;
        LODWORD(v14) = *((_DWORD *)this + 26);
        StringRawBuffer = (__int64)WindowsGetStringRawBuffer(v11, 0LL);
        v17[0] = (__int64)"InitializeIds:ApplicationViewId initialized";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
          (__int64)v9,
          (unsigned __int8 *)dword_18085D7F9,
          v12,
          v13,
          (const wchar_t **)v17,
          (const WCHAR **)&StringRawBuffer,
          (__int64)&v14,
          (const WCHAR **)&v15);
        std::wstring::_Tidy_deallocate((__int64)v18);
      }
    }
  }
}
