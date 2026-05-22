/*
 * XREFs of ?AllocatePeerThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x180012B50
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x18005A9F0 (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::AllocatePeerThunk(
        BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer **a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rcx
  BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *v6; // rdi
  const char *v7; // r9
  int v8; // eax
  unsigned int v9; // esi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct Microsoft::Bamo::BaseBamoPeer *v14; // [rsp+60h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 2);
  v14 = 0LL;
  v5 = (_QWORD *)((char *)this + 104);
  if ( !*v5 )
    wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
      v5,
      *((_QWORD *)this + 12));
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  v6 = 0LL;
  v12 = 0;
  if ( !*((_DWORD *)this + 47) )
  {
    v6 = this;
    v12 = (int)this;
    if ( *((_DWORD *)this + 46) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93F,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v7);
    *((_DWORD *)this + 46) = 0;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 32LL))(*((_QWORD *)this + 2));
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 80LL))(*((_QWORD *)this + 2));
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x76,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v8,
      v12);
  v9 = (*(__int64 (__fastcall **)(__int64, struct Microsoft::Bamo::BaseBamoPeer **))(*(_QWORD *)v4 + 96LL))(v4, &v14);
  *a2 = v14;
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 88LL))(*((_QWORD *)this + 2));
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x87,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10,
      v12);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 2) + 24LL))(*((_QWORD *)v6 + 2));
    *((_DWORD *)v6 + 46) = GetCurrentThreadId();
  }
  (*(void (__fastcall **)(BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *))(*(_QWORD *)this + 8LL))(this);
  return v9;
}
