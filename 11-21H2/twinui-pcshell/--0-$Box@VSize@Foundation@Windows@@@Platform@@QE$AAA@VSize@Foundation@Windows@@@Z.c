/*
 * XREFs of ??0?$Box@VSize@Foundation@Windows@@@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z @ 0x1800149C4
 * Callers:
 *     ??$__abi_create_box@VSize@Foundation@Windows@@@@YAPE$AAV?$Box@VSize@Foundation@Windows@@@Platform@@VSize@Foundation@Windows@@@Z @ 0x180014964 (--$__abi_create_box@VSize@Foundation@Windows@@@@YAPE$AAV-$Box@VSize@Foundation@Windows@@@Platfor.c)
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x180063B30 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1800F65E4 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z @ 0x18042D4EC (--0-$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Platform::Box<Windows::Foundation::Size>::Box<Windows::Foundation::Size>(__int64 a1, __int64 a2)
{
  __int64 type_id; // rbx
  __int64 Value; // rdi
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  void *v14; // [rsp+60h] [rbp+18h]

  v13 = a1;
  v12[0] = a2;
  if ( __TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 16LL) )
  {
    Init_thread_header(&__TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA);
    if ( __TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA == -1 )
    {
      type_id = __abi_make_type_id(&_abi_typedesc_Windows_Foundation_Size);
      v13 = type_id;
      `Platform::Box<Windows::Foundation::Size>::Box<Windows::Foundation::Size>'::`2'::__typeCode = Platform::Type::GetTypeCode(type_id);
      if ( type_id )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)type_id + 16LL))(type_id);
      Init_thread_footer(&__TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA);
    }
  }
  Value = Platform::Details::CreateValue(
            (unsigned int)`Platform::Box<Windows::Foundation::Size>::Box<Windows::Foundation::Size>'::`2'::__typeCode,
            v12);
  v13 = Value;
  v5 = __abi_winrt_ptr_ctor(Value);
  v13 = v5;
  if ( Value )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Value + 16LL))(Value);
  if ( v5 )
  {
    LOBYTE(v4) = 1;
    v6 = __abi_winrt_cast_to(v4, v5, &_uuidof__AU__IBox_VSize_Foundation_Windows___Platform__);
    v14 = (void *)v6;
    v7 = __abi_winrt_ptr_ctor(v6);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    return v7;
  }
  else
  {
    v14 = Platform::Details::Heap::Allocate(0x38uLL, 0x48uLL);
    v9 = Platform::Details::CustomBox<Windows::Foundation::Size>::CustomBox<Windows::Foundation::Size>(v14, v12[0]);
    v14 = (void *)v9;
    __abi_winrt_ptr_assign(&v13, v9);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = v13;
    v11 = __abi_winrt_ptr_ctor(v13);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    return v11;
  }
}
