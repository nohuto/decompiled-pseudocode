/*
 * XREFs of ?RegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJIPEBUInputSiteId@@@Z @ 0x180024B54
 * Callers:
 *     ?Thunk_RegisterInputSiteElementWithHint_258@?$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18005F930 (-Thunk_RegisterInputSiteElementWithHint_258@-$IInputSiteManagerPrincipal_Receive@VBamoInputSiteM.c)
 * Callees:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180024E28 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ??0?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteManagerPrincipalImpl@1@@Z @ 0x180024EB0 (--0-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsof_ea_180024EB0.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180025000 (--1-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputSiteManagerPrincipalImpl::RegisterInputSiteElementWithHint(
        BamoImpl::BamoInputSiteManagerPrincipalImpl *this,
        unsigned int a2,
        const struct InputSiteId *a3)
{
  int v6; // edi
  _QWORD *v7; // rbx
  int v8; // ecx
  __int64 v9; // rbp
  __int64 v10; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v12; // rbx
  char *v13; // r12
  int v14; // eax
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v17; // eax
  unsigned int v18; // ebx
  int v19; // [rsp+20h] [rbp-58h]
  _BYTE v20[32]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v22; // [rsp+80h] [rbp+8h]

  v6 = 0;
  v7 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v7[4] + 36LL) == v8 )
        break;
      v7 = (_QWORD *)v7[5];
    }
    while ( v7 );
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 32LL))(v7);
  v9 = v7[4];
  v10 = *(_QWORD *)(v9 + 24);
  v11 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v10 + 32);
  v12 = 0LL;
  v13 = 0LL;
  if ( !a2 )
    goto LABEL_5;
  Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
            *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v10 + 32),
            *(_DWORD *)(v9 + 36),
            a2);
  v12 = Proxy;
  if ( Proxy )
  {
    v13 = (char *)Proxy - 16;
LABEL_5:
    if ( *((int *)this + 2) > 0 )
    {
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(
        v20,
        v11,
        this);
      v14 = (*(__int64 (__fastcall **)(char *, __int64, char *, const struct InputSiteId *))(*((_QWORD *)this - 2)
                                                                                           + 104LL))(
              (char *)this - 16,
              v22,
              v13,
              a3);
      v6 = v14;
      if ( v14 == -2018375668 )
      {
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v11, -2018375668, 0);
      }
      else if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x5DDF,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBam"
                        "os_Shared.bamo.h",
          (const char *)(unsigned int)v14,
          v19);
      }
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(v20);
    }
    if ( v12 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v12);
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5DEE,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)(unsigned int)v6,
        v19);
    return (unsigned int)v6;
  }
  v17 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v9 + 24) + 32LL),
          -2018375668,
          0);
  v18 = v17;
  if ( v17 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5DCB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      (const char *)(unsigned int)v17,
      v19);
  return v18;
}
