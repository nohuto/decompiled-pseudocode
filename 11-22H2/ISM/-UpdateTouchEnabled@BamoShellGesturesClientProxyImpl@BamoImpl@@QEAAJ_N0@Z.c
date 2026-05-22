/*
 * XREFs of ?UpdateTouchEnabled@BamoShellGesturesClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x1800138E8
 * Callers:
 *     ?Thunk_UpdateTouchEnabled_11@?$IShellGesturesClientProxy_Receive@VBamoShellGesturesClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001B820 (-Thunk_UpdateTouchEnabled_11@-$IShellGesturesClientProxy_Receive@VBamoShellGesturesClientProxyIm.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoShellGesturesClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18017BF20 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoShellGesturesClientProxyImpl@BamoImpl@@UEAAXPEAV.c)
 * Callees:
 *     ??1?$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180013B24 (--1-$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BamoImpl::BamoShellGesturesClientProxyImpl::UpdateTouchEnabled(
        BamoImpl::BamoShellGesturesClientProxyImpl *this,
        char a2,
        __int64 a3)
{
  char v3; // bp
  _QWORD *v6; // r14
  __int64 v7; // rdi
  const char *v8; // r9
  char *v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdi
  const char *v14; // r9
  int v15; // eax
  int v17[2]; // [rsp+20h] [rbp-38h] BYREF
  BamoImpl::BamoShellGesturesClientProxyImpl *v18; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = a3;
  v6 = (_QWORD *)((char *)this + 16);
  if ( *((_BYTE *)this + 28) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL);
    v18 = this;
    (**(void (__fastcall ***)(BamoImpl::BamoShellGesturesClientProxyImpl *))this)(this);
    v19 = 1;
    *(_QWORD *)v17 = 0LL;
    if ( !*(_DWORD *)(v7 + 188) )
    {
      *(_QWORD *)v17 = v7;
      if ( *(_DWORD *)(v7 + 184) != GetCurrentThreadId() )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x93F,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          v8);
      *(_DWORD *)(v7 + 184) = 0;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 16) + 32LL))(*(_QWORD *)(v7 + 16));
    }
    v9 = (char *)this - 16;
    v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 88LL))((char *)this - 16);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x76,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v10,
        v17[0]);
    LOBYTE(v11) = v3;
    v12 = (*(__int64 (__fastcall **)(char *, __int64))(*(_QWORD *)v9 + 120LL))((char *)this - 16, v11);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBDE,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v12,
        v17[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(v17);
  }
  else
  {
    v9 = (char *)this - 16;
  }
  *((_BYTE *)this + 33) = v3;
  if ( *((_BYTE *)this + 28) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL);
    v18 = this;
    (**(void (__fastcall ***)(BamoImpl::BamoShellGesturesClientProxyImpl *))this)(this);
    v19 = 2;
    *(_QWORD *)v17 = 0LL;
    if ( !*(_DWORD *)(v13 + 188) )
    {
      *(_QWORD *)v17 = v13;
      if ( *(_DWORD *)(v13 + 184) != GetCurrentThreadId() )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x93F,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          v14);
      *(_DWORD *)(v13 + 184) = 0;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 16) + 32LL))(*(_QWORD *)(v13 + 16));
    }
    v15 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 128LL))(v9);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBEA,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v15,
        v17[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(v17);
  }
  if ( a2 && !*((_BYTE *)this + 29) )
  {
    LOBYTE(a3) = *((_DWORD *)this + 2) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 64LL))(*v6, *((unsigned int *)this + 6), a3);
  }
  return 0LL;
}
