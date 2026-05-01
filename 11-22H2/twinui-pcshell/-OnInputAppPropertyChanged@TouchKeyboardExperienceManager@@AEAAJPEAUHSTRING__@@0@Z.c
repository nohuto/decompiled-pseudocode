/*
 * XREFs of ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@AEAAJPEAUHSTRING__@@0@Z @ 0x18020AC0C
 * Callers:
 *     ?NotifyInputAppPropertyChanged@TouchKeyboardExperienceManager@@UEAAJPEAUHSTRING__@@0@Z @ 0x180514000 (-NotifyInputAppPropertyChanged@TouchKeyboardExperienceManager@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x180094388 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5a9ec3bdba9975d084688ff203e80696___ @ 0x180205830 (Windows--Internal--ComTaskPool--QueueTask__lambda_5a9ec3bdba9975d084688ff203e80696___.c)
 *     _lambda_5a9ec3bdba9975d084688ff203e80696_::__lambda_5a9ec3bdba9975d084688ff203e80696_ @ 0x180206734 (_lambda_5a9ec3bdba9975d084688ff203e80696_--__lambda_5a9ec3bdba9975d084688ff203e80696_.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppPropertyChanged(
        TouchKeyboardExperienceManager *this,
        HSTRING a2,
        HSTRING a3)
{
  WCHAR *StringRawBuffer; // rax
  WCHAR *v6; // rax
  __int64 *v7; // rax
  int v8; // eax
  int v9; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-69h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-61h] BYREF
  _QWORD v17[4]; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v18[4]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v19[2]; // [rsp+70h] [rbp-19h] BYREF
  _QWORD v20[4]; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v21[4]; // [rsp+A0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(a2, 0LL);
  std::wstring::wstring(v18, StringRawBuffer);
  v6 = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
  std::wstring::wstring(v17, v6);
  v15 = 0LL;
  v16 = &v15;
  v7 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v16);
  v8 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v7);
  v9 = v8;
  if ( v8 >= 0 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v19, &v15);
    v19[1] = (__int64)this;
    std::wstring::wstring(v20, (__int64)v18);
    std::wstring::wstring(v21, (__int64)v17);
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_5a9ec3bdba9975d084688ff203e80696___(
           v13,
           v12,
           *((_DWORD *)this + 243),
           v19);
    lambda_5a9ec3bdba9975d084688ff203e80696_::__lambda_5a9ec3bdba9975d084688ff203e80696_(v19);
    if ( v9 >= 0 )
    {
      v9 = 0;
      goto LABEL_7;
    }
    v10 = (unsigned int)v9;
    v11 = 5867LL;
  }
  else
  {
    v10 = (unsigned int)v8;
    v11 = 5797LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v10);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  std::wstring::_Tidy_deallocate((__int64)v17);
  std::wstring::_Tidy_deallocate((__int64)v18);
  return (unsigned int)v9;
}
