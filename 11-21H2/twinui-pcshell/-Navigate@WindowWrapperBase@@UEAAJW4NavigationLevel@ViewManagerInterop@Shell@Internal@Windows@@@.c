/*
 * XREFs of ?Navigate@WindowWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180089870
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::Navigate(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // esi
  unsigned int v3; // edi
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  int v6; // edi
  __int128 v8; // [rsp+30h] [rbp-28h]
  unsigned int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF
  APTTYPE pAptType; // [rsp+70h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+78h] [rbp+20h] BYREF

  v10 = a2;
  *(_QWORD *)&v8 = &v10;
  *((_QWORD *)&v8 + 1) = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v3 = 0;
  else
    v3 = 4;
  v9 = 0;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))();
    *((_OWORD *)v5 + 1) = v8;
    *(_QWORD *)v5 = off_18061F660;
    *((_QWORD *)v5 + 4) = &v9;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = SHTaskPoolQueueTask(v3, 32LL, CurrentThreadId, 0LL, v5, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v6 >= 0 )
    return v9;
  return (unsigned int)v6;
}
