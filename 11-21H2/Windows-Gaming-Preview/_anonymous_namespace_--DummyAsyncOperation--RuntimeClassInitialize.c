/*
 * XREFs of _anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize @ 0x180013DB4
 * Callers:
 *     _anonymous_namespace_::StreamReference::OpenReadAsync @ 0x180013FA0 (_anonymous_namespace_--StreamReference--OpenReadAsync.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64); // rbx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64); // rbp
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v17; // [rsp+38h] [rbp+10h] BYREF

  if ( !*a2 )
  {
    v3 = -2147467261;
    v4 = 137LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = 0LL;
  if ( &v17 != a2 )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2;
    *a2 = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v6;
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v6 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(a1 + 80);
  }
  v8 = **v6;
  v9 = *(_QWORD *)(a1 + 72);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v3 = v8(v6, &GUID_00000036_0000_0000_c000_000000000046, a1 + 72);
  if ( v3 < 0 )
  {
    v4 = 140LL;
    goto LABEL_3;
  }
  v10 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    *v10 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *>::`vftable';
    *((_DWORD *)v10 + 3) = 1;
    *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::FileProperties::StorageItemThumbnail *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v11[2] = a1;
    *v11 = off_18004F5A0;
  }
  else
  {
    v11 = 0LL;
  }
  v17 = v11;
  if ( v11 )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 80) + 48LL))(*(_QWORD *)(a1 + 80), v11);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v12 = 0;
      goto LABEL_23;
    }
    v13 = (unsigned int)v15;
    v14 = 164LL;
  }
  else
  {
    v12 = -2147024882;
    v13 = 2147942414LL;
    v14 = 161LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
    (const char *)v13);
LABEL_23:
  if ( v11 )
    (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
  return v12;
}
