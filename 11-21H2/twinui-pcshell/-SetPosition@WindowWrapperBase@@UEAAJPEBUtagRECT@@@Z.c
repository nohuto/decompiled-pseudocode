/*
 * XREFs of ?SetPosition@WindowWrapperBase@@UEAAJPEBUtagRECT@@@Z @ 0x1801331A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::SetPosition(WindowWrapperBase *this, const struct tagRECT *a2)
{
  DWORD CurrentThreadId; // esi
  unsigned int v3; // edi
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  int v6; // edi
  int v8; // [rsp+20h] [rbp-38h]
  __int128 v9; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char *v11; // [rsp+60h] [rbp+8h] BYREF
  const struct tagRECT *v12; // [rsp+68h] [rbp+10h] BYREF
  APTTYPE pAptType; // [rsp+70h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+78h] [rbp+20h] BYREF

  v12 = a2;
  *(_QWORD *)&v9 = &v12;
  *((_QWORD *)&v9 + 1) = this;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v3 = 0;
  else
    v3 = 4;
  LODWORD(v11) = 0;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))();
    *((_OWORD *)v5 + 1) = v9;
    *(_QWORD *)v5 = off_18063AB50;
    *((_QWORD *)v5 + 4) = &v11;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = SHTaskPoolQueueTask(v3, 32LL, CurrentThreadId, 0LL, v5, 0LL);
  if ( v5 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v6 >= 0 )
    v6 = (int)v11;
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xE7,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v6,
      v8);
  return 0LL;
}
