/*
 * XREFs of ?UpdateActivationController@BamoInputSiteElementProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18000B1F0
 * Callers:
 *     ?Thunk_UpdateActivationController_8@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180011DA0 (-Thunk_UpdateActivationController_8@-$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyI.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180125BD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBam.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteElementProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180125654 (--0-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@Q_ea_180125654.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180125724 (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoInputSiteElementProxyImpl::UpdateActivationController(
        BamoImpl::BamoInputSiteElementProxyImpl *this,
        char a2,
        __int64 a3)
{
  __int64 v5; // r11
  __int64 v6; // rdi
  void (__fastcall ***v7)(_QWORD); // rsi
  __int64 v8; // r14
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // [rsp+20h] [rbp-48h]
  _BYTE v18[32]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 2);
  v6 = 0LL;
  v7 = 0LL;
  if ( (_DWORD)a3 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v5 + 24) + 32LL);
    v20 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)(v10 + 64) + 56LL))(
            *(_QWORD *)(v10 + 64),
            *(unsigned int *)(v5 + 36),
            a3,
            &v20);
    if ( (int)(v11 + 0x80000000) >= 0 && v11 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x47E,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)v11,
        v17);
    if ( !v20
      || (v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v20 + 48LL))(
                  v20,
                  v12,
                  v13,
                  v11),
          (v6 = v14) == 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x88AA,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)0x87B2080CLL,
        v17);
      return 2276591628LL;
    }
    v7 = (void (__fastcall ***)(_QWORD))(v14 - 16);
  }
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(
      v18,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      this,
      1LL);
    v15 = (*(__int64 (__fastcall **)(char *, void (__fastcall ***)(_QWORD)))(*((_QWORD *)this - 2) + 152LL))(
            (char *)this - 16,
            v7);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x88B7,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v15,
        v17);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v18);
  }
  v8 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v7;
  if ( v7 )
    (**v7)(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v6 && !*(_BYTE *)(v6 + 29) )
  {
    LOBYTE(a3) = *(_DWORD *)(v6 + 8) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v6 + 16) + 64LL))(
      *(_QWORD *)(v6 + 16),
      *(unsigned int *)(v6 + 24),
      a3);
  }
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(
      v18,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      this,
      2LL);
    v16 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 160LL))((char *)this - 16);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x88C8,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v16,
        v17);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v18);
  }
  if ( a2 )
  {
    if ( !*((_BYTE *)this + 29) )
    {
      LOBYTE(a3) = *((_DWORD *)this + 2) > 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 64LL))(
        *((_QWORD *)this + 2),
        *((unsigned int *)this + 6),
        a3);
    }
  }
  return 0LL;
}
