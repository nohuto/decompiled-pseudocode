/*
 * XREFs of ??_EInputContext@@UEAAPEAXI@Z @ 0x180013D70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800064E0 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x180021504 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18007FD24 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

InputContext *__fastcall InputContext::`vector deleting destructor'(InputContext *this, char a2)
{
  char *v2; // rdi
  void *v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  _QWORD **v8; // rcx
  _QWORD *v9; // rcx
  _QWORD **v10; // rcx
  _QWORD *v11; // r14
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  unsigned __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  void *v16; // [rsp+50h] [rbp+18h] BYREF

  v2 = (char *)*((_QWORD *)this + 22);
  if ( v2 )
  {
    std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)(v2 + 96));
    wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(v2 + 8);
    operator delete(v2, 0x78uLL);
  }
  v5 = (void *)*((_QWORD *)this + 17);
  v6 = *((_QWORD *)this + 18) - (_QWORD)v5;
  v16 = v5;
  v7 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  v15 = v7;
  if ( v7 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v16, &v15);
    v7 = v15;
    v5 = v16;
  }
  operator delete(v5, v7);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  v8 = (_QWORD **)*((_QWORD *)this + 15);
  *v8[1] = 0LL;
  v9 = *v8;
  if ( v9 )
  {
    do
    {
      v13 = (_QWORD *)*v9;
      std::_Deallocate<16,0>(v9, 0x18uLL);
      v9 = v13;
    }
    while ( v13 );
  }
  operator delete(*((void **)this + 15), 0x18uLL);
  std::_Deallocate<16,0>(*((void **)this + 6), (*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v10 = (_QWORD **)*((_QWORD *)this + 4);
  *v10[1] = 0LL;
  v11 = *v10;
  if ( *v10 )
  {
    do
    {
      v14 = (_QWORD *)*v11;
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v11 + 3);
      std::_Deallocate<16,0>(v11, 0x20uLL);
      v11 = v14;
    }
    while ( v14 );
  }
  operator delete(*((void **)this + 4), 0x20uLL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 2);
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xC0uLL);
    else
      free(this);
  }
  return this;
}
