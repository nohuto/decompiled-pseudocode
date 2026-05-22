/*
 * XREFs of ?UpdateActivatePolicy@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1800145B0
 * Callers:
 *     ?Thunk_UpdateActivatePolicy_8@?$IActivationConfigurationInputObjectProxy_Receive@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001B4F0 (-Thunk_UpdateActivatePolicy_8@-$IActivationConfigurationInputObjectProxy_Receive@VBamoActivation.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180147DD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoActivationConfigurationInputObjectProxyImpl@Bamo.c)
 * Callees:
 *     ??1?$CalloutWrapper@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180002928 (--1-$CalloutWrapper@VBamoActivationConfigurationInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microso.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BamoImpl::BamoActivationConfigurationInputObjectProxyImpl::UpdateActivatePolicy(
        BamoImpl::BamoActivationConfigurationInputObjectProxyImpl *this,
        char a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  _QWORD *v6; // r14
  char *v7; // rsi
  __int64 v9; // rdi
  const char *v10; // r9
  int v11; // eax
  int v12; // eax
  __int64 v13; // rdi
  const char *v14; // r9
  int v15; // eax
  int v16[2]; // [rsp+20h] [rbp-38h] BYREF
  BamoImpl::BamoActivationConfigurationInputObjectProxyImpl *v17; // [rsp+28h] [rbp-30h]
  int v18; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = a3;
  v6 = (_QWORD *)((char *)this + 16);
  if ( *((_BYTE *)this + 28) )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL);
    v17 = this;
    (**(void (__fastcall ***)(BamoImpl::BamoActivationConfigurationInputObjectProxyImpl *))this)(this);
    v18 = 1;
    *(_QWORD *)v16 = 0LL;
    if ( !*(_DWORD *)(v9 + 188) )
    {
      *(_QWORD *)v16 = v9;
      if ( *(_DWORD *)(v9 + 184) != GetCurrentThreadId() )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x93F,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          v10);
      *(_DWORD *)(v9 + 184) = 0;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 16) + 32LL))(*(_QWORD *)(v9 + 16));
    }
    v7 = (char *)this - 16;
    v11 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 88LL))((char *)this - 16);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x76,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v11,
        v16[0]);
    v12 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v7 + 104LL))((char *)this - 16, v3);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2413,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v12,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>((__int64 *)v16);
  }
  else
  {
    v7 = (char *)this - 16;
  }
  *((_DWORD *)this + 8) = v3;
  if ( *((_BYTE *)this + 28) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL);
    v17 = this;
    (**(void (__fastcall ***)(BamoImpl::BamoActivationConfigurationInputObjectProxyImpl *))this)(this);
    v18 = 2;
    *(_QWORD *)v16 = 0LL;
    if ( !*(_DWORD *)(v13 + 188) )
    {
      *(_QWORD *)v16 = v13;
      if ( *(_DWORD *)(v13 + 184) != GetCurrentThreadId() )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x93F,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          v14);
      *(_DWORD *)(v13 + 184) = 0;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 16) + 32LL))(*(_QWORD *)(v13 + 16));
    }
    v15 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 112LL))(v7);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x241F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v15,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoActivationConfigurationInputObjectProxyImpl>((__int64 *)v16);
  }
  if ( a2 && !*((_BYTE *)this + 29) )
  {
    LOBYTE(a3) = *((_DWORD *)this + 2) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 64LL))(*v6, *((unsigned int *)this + 6), a3);
  }
  return 0LL;
}
