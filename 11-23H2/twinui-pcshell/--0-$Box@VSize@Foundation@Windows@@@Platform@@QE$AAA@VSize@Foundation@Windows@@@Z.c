/*
 * XREFs of ??0?$Box@VSize@Foundation@Windows@@@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z @ 0x18007EC24
 * Callers:
 *     ??$__abi_create_box@VSize@Foundation@Windows@@@@YAPE$AAV?$Box@VSize@Foundation@Windows@@@Platform@@VSize@Foundation@Windows@@@Z @ 0x1800799EC (--$__abi_create_box@VSize@Foundation@Windows@@@@YAPE$AAV-$Box@VSize@Foundation@Windows@@@Platfor.c)
 * Callees:
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18007C280 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x18007C2F4 (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z @ 0x180762170 (--0-$CustomBox@VSize@Foundation@Windows@@@Details@Platform@@QE$AAA@VSize@Foundation@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Platform::Box<Windows::Foundation::Size>::Box<Windows::Foundation::Size>(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *),
        __int64 a2)
{
  __int64 type_id; // rbx
  __int64 Value; // rdi
  __int64 (__fastcall ***v4)(_QWORD, __int64, __int64 *); // rbx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v8; // rbx
  __int64 (__fastcall ***v9)(_QWORD, __int64, __int64 *); // rbx
  __int64 v10; // rdi
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, __int64, __int64 *); // [rsp+50h] [rbp+8h] BYREF
  void *v13; // [rsp+60h] [rbp+18h]

  v12 = a1;
  v11[0] = a2;
  if ( __TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 16LL) )
  {
    Init_thread_header(&__TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA);
    if ( __TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA == -1 )
    {
      type_id = __abi_make_type_id(&_abi_typedesc_Windows_Foundation_Size);
      v12 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))type_id;
      `Platform::Box<Windows::Foundation::Size>::Box<Windows::Foundation::Size>'::`2'::__typeCode = Platform::Type::GetTypeCode(type_id);
      if ( type_id )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)type_id + 16LL))(type_id);
      Init_thread_footer(&__TSS0__1___0__Box_VSize_Foundation_Windows___Platform__QE_AAA_VSize_Foundation_Windows___Z_4HA);
    }
  }
  Value = Platform::Details::CreateValue(
            (unsigned int)`Platform::Box<Windows::Foundation::Size>::Box<Windows::Foundation::Size>'::`2'::__typeCode,
            v11);
  v12 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Value;
  v4 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(Value);
  v12 = v4;
  if ( Value )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Value + 16LL))(Value);
  if ( v4 )
  {
    v5 = __abi_winrt_cast_to(1, v4, (__int64)&_uuidof__AU__IBox_VSize_Foundation_Windows___Platform__);
    v13 = (void *)v5;
    v6 = __abi_winrt_ptr_ctor(v5);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v4)[2])(v4);
    return v6;
  }
  else
  {
    v13 = Platform::Details::Heap::Allocate(0x38uLL, 0x48uLL);
    v8 = Platform::Details::CustomBox<Windows::Foundation::Size>::CustomBox<Windows::Foundation::Size>(v13, v11[0]);
    v13 = (void *)v8;
    __abi_winrt_ptr_assign(&v12, v8);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v9 = v12;
    v10 = __abi_winrt_ptr_ctor(v12);
    if ( v9 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v9)[2])(v9);
    return v10;
  }
}
