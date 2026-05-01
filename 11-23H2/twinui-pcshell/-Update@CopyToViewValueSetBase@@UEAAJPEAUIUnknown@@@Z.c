/*
 * XREFs of ?Update@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z @ 0x1805A1390
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$iterable_range_nothrow@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@wil@@QEAA@PEAU?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x18059F1A0 (--0-$iterable_range_nothrow@PEAU-$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Fo.c)
 *     ??Eiterable_iterator_nothrow@?$iterable_range_nothrow@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@wil@@QEAAAEAV012@XZ @ 0x18059F574 (--Eiterable_iterator_nothrow@-$iterable_range_nothrow@PEAU-$IKeyValuePair@PEAUHSTRING__@@PEAUIIn.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CopyToViewValueSetBase::Update(CopyToViewValueSetBase *this, struct IUnknown *a2)
{
  struct IUnknownVtbl *lpVtbl; // rax
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  __int64 *v8; // rsi
  int v9; // edx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rbx
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v20; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+48h] [rbp-28h]
  __int64 v22; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  char v25; // [rsp+98h] [rbp+28h] BYREF
  char *v26; // [rsp+A0h] [rbp+30h] BYREF
  HSTRING string; // [rsp+A8h] [rbp+38h] BYREF

  lpVtbl = a2->lpVtbl;
  v19 = 0LL;
  v4 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v19);
  v5 = v4;
  if ( v4 >= 0 )
  {
    wil::iterable_range_nothrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>::iterable_range_nothrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>(
      &v22,
      *((_QWORD *)this + 7),
      &v26);
    v8 = &v22;
    v20 = &v22;
    v9 = (v22 != 0) - 1;
    v21 = v9;
    while ( *(int *)v8[2] >= 0 && v9 != -1 )
    {
      v10 = v8[1];
      v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 48LL);
      WindowsDeleteString(0LL);
      string = 0LL;
      v12 = v11(v10, &string);
      v5 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x86,
          (int)"shellcommon\\internal\\composable\\inc\\tabbedprojecthelpers.h",
          (const char *)(unsigned int)v12);
        goto LABEL_14;
      }
      v13 = (__int64 *)v8[1];
      v14 = *v13;
      v18 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v14 + 56))(v13, &v18);
      v5 = v15;
      if ( v15 < 0 )
      {
        v16 = 136LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"shellcommon\\internal\\composable\\inc\\tabbedprojecthelpers.h",
          (const char *)(unsigned int)v15);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
LABEL_14:
        WindowsDeleteString(string);
        string = 0LL;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v23);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
        goto LABEL_19;
      }
      v15 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, char *))(*(_QWORD *)v19 + 80LL))(
              v19,
              string,
              v18,
              &v25);
      v5 = v15;
      if ( v15 < 0 )
      {
        v16 = 139LL;
        goto LABEL_12;
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
      WindowsDeleteString(string);
      wil::iterable_range_nothrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>::iterable_iterator_nothrow::operator++(&v20);
      v9 = v21;
      v8 = v20;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v23);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    v5 = (unsigned int)v26;
    if ( (int)v26 >= 0 )
    {
      v5 = 0;
      goto LABEL_19;
    }
    v6 = (unsigned int)v26;
    v7 = 141LL;
  }
  else
  {
    v6 = (unsigned int)v4;
    v7 = 128LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"shellcommon\\internal\\composable\\inc\\tabbedprojecthelpers.h",
    (const char *)v6);
LABEL_19:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  return v5;
}
