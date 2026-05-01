/*
 * XREFs of _anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize @ 0x180014264
 * Callers:
 *     _anonymous_namespace_::StreamReference::OpenReadAsync @ 0x180014450 (_anonymous_namespace_--StreamReference--OpenReadAsync.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBD0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize(__int64 a1, __int64 *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64); // rsi
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64); // rbp
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v18; // [rsp+38h] [rbp+10h] BYREF

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
  if ( &v18 != (_QWORD **)a2 )
  {
    v6 = *a2;
    *a2 = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64))(a1 + 80);
  v9 = **v8;
  v10 = *(_QWORD *)(a1 + 72);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v3 = v9(v8, &GUID_00000036_0000_0000_c000_000000000046, a1 + 72);
  if ( v3 < 0 )
  {
    v4 = 140LL;
    goto LABEL_3;
  }
  v11 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    *v11 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *>::`vftable';
    *((_DWORD *)v11 + 3) = 1;
    *v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::FileProperties::StorageItemThumbnail *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v12[2] = a1;
    *v12 = off_1800505A0;
  }
  else
  {
    v12 = 0LL;
  }
  v18 = v12;
  if ( v12 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 80) + 48LL))(*(_QWORD *)(a1 + 80), v12);
    v13 = v16;
    if ( v16 >= 0 )
    {
      v13 = 0;
      goto LABEL_23;
    }
    v14 = (unsigned int)v16;
    v15 = 164LL;
  }
  else
  {
    v13 = -2147024882;
    v14 = 2147942414LL;
    v15 = 161LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
    (const char *)v14);
LABEL_23:
  if ( v12 )
    (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
  return v13;
}
