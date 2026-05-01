/*
 * XREFs of ?SetImportanceVectorUsingMask@WindowWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18012FFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::SetImportanceVectorUsingMask(__int64 a1, int a2, int a3)
{
  DWORD CurrentThreadId; // esi
  unsigned int v4; // edi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  int v7; // edi
  int v9; // [rsp+20h] [rbp-48h]
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+38h] [rbp-30h]
  int *v12; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char *v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+78h] [rbp+10h] BYREF
  int v16; // [rsp+80h] [rbp+18h] BYREF
  APTTYPE pAptType; // [rsp+88h] [rbp+20h] BYREF

  v16 = a3;
  v15 = a2;
  *(_QWORD *)&v11 = &v15;
  *((_QWORD *)&v11 + 1) = a1 - 32;
  v12 = &v16;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v4 = 0;
  else
    v4 = 4;
  LODWORD(v14) = 0;
  v5 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v5[3] = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))();
    *((_OWORD *)v6 + 1) = v11;
    *((_QWORD *)v6 + 4) = v12;
    *(_QWORD *)v6 = off_18063A320;
    *((_QWORD *)v6 + 5) = &v14;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = SHTaskPoolQueueTask(v4, 32LL, CurrentThreadId, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 >= 0 )
    v7 = (int)v14;
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8C9,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v7,
      v9);
  return 0LL;
}
