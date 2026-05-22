/*
 * XREFs of ?OnPeerConnectedThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@PEA_NPEAPEAVBamoPrincipal@Bamo@5@@Z @ 0x180012070
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1800591B4 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::OnPeerConnectedThunk(
        BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        bool *a3,
        struct Microsoft::Bamo::BamoPrincipal **a4)
{
  __int64 v7; // rsi
  __int64 v8; // r15
  _QWORD *v9; // rcx
  BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *v10; // rdi
  const char *v11; // r9
  int v12; // eax
  unsigned int v13; // esi
  int v14; // eax
  int v16; // [rsp+20h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = *((_QWORD *)this + 2);
  v8 = *((_QWORD *)a2 + 2);
  v9 = (_QWORD *)((char *)this + 104);
  if ( !*v9 )
    wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
      v9,
      *((_QWORD *)this + 12));
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  v10 = 0LL;
  if ( !*((_DWORD *)this + 47) )
  {
    v10 = this;
    if ( *((_DWORD *)this + 46) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93F,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v11);
    *((_DWORD *)this + 46) = 0;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 80LL))(*((_QWORD *)this + 2));
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x76,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v12,
      v16);
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, bool *, struct Microsoft::Bamo::BamoPrincipal **))(*(_QWORD *)v7 + 112LL))(
          v7,
          v8,
          a3,
          a4);
  v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 88LL))(*((_QWORD *)this + 2));
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x87,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v14,
      v16);
  if ( v10 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v10 + 2) + 24LL))(*((_QWORD *)v10 + 2));
    *((_DWORD *)v10 + 46) = GetCurrentThreadId();
  }
  (*(void (__fastcall **)(BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *))(*(_QWORD *)this + 8LL))(this);
  return v13;
}
