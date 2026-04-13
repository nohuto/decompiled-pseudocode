/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VMobilityExperienceManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D74C0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMobilityExperienceManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D7DD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMobility.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMobilityExperienceManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800D7E60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMobilityExperie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<MobilityExperienceManager,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD *); // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  int v10; // esi
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD *); // rbx
  unsigned int v12; // edi
  __int64 (__fastcall ***v13)(_QWORD, __int64, _QWORD *); // [rsp+48h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    RoOriginateError(2147746064LL, 0LL, a3, a4);
    return 2147746064LL;
  }
  v7 = 0LL;
  v13 = 0LL;
  v8 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 3) = 1;
    *v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMobilityExperienceManager>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v9 = &MobilityExperienceManager::`vftable';
    v10 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMobilityExperienceManager>::QueryInterface(
            v9,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v13);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMobilityExperienceManager>::Release(v9);
    if ( v10 >= 0 )
    {
      v11 = v13;
      v12 = (**v13)(v13, a3, a4);
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v11)[2])(v11);
      return v12;
    }
    v7 = v13;
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v7 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v7)[2])(v7);
  return (unsigned int)v10;
}
