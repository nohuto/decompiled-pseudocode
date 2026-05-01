/*
 * XREFs of ??$MakeAndInitialize@VPositionerPriority@@V1@AEAW4_TABLETMODESTATE@@@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPriority@@AEAW4_TABLETMODESTATE@@@Z @ 0x180096DCC
 * Callers:
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x180096D28 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PositionerPriority,PositionerPriority,enum _TABLETMODESTATE &>(
        _QWORD *a1,
        int *a2)
{
  unsigned int v4; // edi
  _QWORD *v5; // rsi
  __int64 *v6; // r14
  LPUNKNOWN v7; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbp
  __int64 v9; // rcx
  int v10; // ecx
  LPUNKNOWN ppunkMarshal; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    *v5 = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v6 = v5 + 3;
    v5[3] = 0LL;
    ppunkMarshal = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v7 = ppunkMarshal;
      QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
      v9 = *v6;
      if ( *v6 )
      {
        *v6 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
        v7,
        &GUID_00000003_0000_0000_c000_000000000046,
        v5 + 3);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppunkMarshal);
    *((_DWORD *)v5 + 13) = 1;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::`vftable';
    v5[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::`vftable'{for `IShellPositionerPriority'};
    v5[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellPositionerPriorityPersistence>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v5 = &PositionerPriority::`vftable';
    v5[4] = &PositionerPriority::`vftable'{for `IShellPositionerPriority'};
    v5[5] = &PositionerPriority::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IShellPositionerPriorityPersistence>'};
    v5[7] = 0LL;
    v10 = *a2;
    v5[8] = 0LL;
    *((_WORD *)v5 + 36) = 0;
    *((_BYTE *)v5 + (v10 == 1) + 64) = 1;
    (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
    *a1 = v5;
    (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
