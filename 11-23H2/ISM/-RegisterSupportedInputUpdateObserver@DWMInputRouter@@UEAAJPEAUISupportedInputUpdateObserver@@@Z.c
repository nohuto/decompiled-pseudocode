/*
 * XREFs of ?RegisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z @ 0x1801B9AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBQEAUISupportedInputUpdateObserver@@@?$vector@PEAUISupportedInputUpdateObserver@@V?$allocator@PEAUISupportedInputUpdateObserver@@@std@@@std@@QEAAPEAPEAUISupportedInputUpdateObserver@@QEAPEAU2@AEBQEAU2@@Z @ 0x1801B7598 (--$_Emplace_reallocate@AEBQEAUISupportedInputUpdateObserver@@@-$vector@PEAUISupportedInputUpdate.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::RegisterSupportedInputUpdateObserver(
        DWMInputRouter *this,
        struct ISupportedInputUpdateObserver *a2)
{
  struct ISupportedInputUpdateObserver *v2; // r15
  const void **v4; // rcx
  _BYTE *v5; // rdx
  _QWORD *v6; // rdi
  _QWORD *i; // rbx
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r14
  int (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rsi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  struct ISupportedInputUpdateObserver *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  v2 = a2;
  v4 = (const void **)((char *)this + 568);
  v5 = (_BYTE *)*((_QWORD *)this + 72);
  if ( v5 == *((_BYTE **)this + 73) )
  {
    std::vector<ISupportedInputUpdateObserver *>::_Emplace_reallocate<ISupportedInputUpdateObserver * const &>(
      v4,
      v5,
      &v15);
    v2 = v15;
  }
  else
  {
    *(_QWORD *)v5 = v2;
    *((_QWORD *)this + 72) += 8LL;
  }
  v6 = (_QWORD *)*((_QWORD *)this + 4);
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    v14 = 0LL;
    v8 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))i[7];
    v9 = **v8;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v14);
    if ( v9(v8, &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f, &v14) >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(struct ISupportedInputUpdateObserver *, __int64))(*(_QWORD *)v2 + 24LL))(v2, v14);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x8C6,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v10,
          v12);
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v14);
  }
  return 0LL;
}
