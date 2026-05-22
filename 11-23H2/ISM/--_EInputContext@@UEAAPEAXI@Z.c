/*
 * XREFs of ??_EInputContext@@UEAAPEAXI@Z @ 0x18001C7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18000EE10 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18002A1C4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180096C5C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

InputContext *__fastcall InputContext::`vector deleting destructor'(InputContext *this, char a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  void *v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  _QWORD **v12; // rcx
  _QWORD *v13; // rcx
  void *v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  _QWORD **v17; // rcx
  _QWORD *v18; // r14
  _QWORD *v20; // rdi
  _QWORD *v21; // rdi
  unsigned __int64 v22; // [rsp+40h] [rbp+8h] BYREF
  void *v23; // [rsp+50h] [rbp+18h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 22);
  if ( v2 )
  {
    std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)(v2 + 12));
    v8 = v2[1];
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v8, v5, v6, v7);
    operator delete(v2, 0x78uLL);
  }
  v9 = (void *)*((_QWORD *)this + 17);
  v10 = *((_QWORD *)this + 18) - (_QWORD)v9;
  v23 = v9;
  v11 = v10 & 0xFFFFFFFFFFFFFFF8uLL;
  v22 = v11;
  if ( v11 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v23, &v22);
    v11 = v22;
    v9 = v23;
  }
  operator delete(v9, v11);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  v12 = (_QWORD **)*((_QWORD *)this + 15);
  *v12[1] = 0LL;
  v13 = *v12;
  if ( v13 )
  {
    do
    {
      v20 = (_QWORD *)*v13;
      std::_Deallocate<16,0>(v13, 0x18uLL);
      v13 = v20;
    }
    while ( v20 );
  }
  operator delete(*((void **)this + 15), 0x18uLL);
  v14 = (void *)*((_QWORD *)this + 6);
  v15 = *((_QWORD *)this + 7) - (_QWORD)v14;
  v23 = v14;
  v16 = v15 & 0xFFFFFFFFFFFFFFF8uLL;
  v22 = v16;
  if ( v16 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v23, &v22);
    v16 = v22;
    v14 = v23;
  }
  operator delete(v14, v16);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v17 = (_QWORD **)*((_QWORD *)this + 4);
  *v17[1] = 0LL;
  v18 = *v17;
  if ( *v17 )
  {
    do
    {
      v21 = (_QWORD *)*v18;
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(v18 + 3);
      std::_Deallocate<16,0>(v18, 0x20uLL);
      v18 = v21;
    }
    while ( v21 );
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
