/*
 * XREFs of ?Thunk_RegisterInputSiteElement_8@?$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800256C0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180025808 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ??0?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteManagerPrincipalImpl@1@@Z @ 0x180025890 (--0-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsof_ea_180025890.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800259E0 (--1-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IInputSiteManagerPrincipal_Receive<BamoImpl::BamoInputSiteManagerPrincipalImpl>::Thunk_RegisterInputSiteElement_8(
        __int64 a1,
        unsigned int **a2)
{
  unsigned int v3; // r14d
  unsigned int v4; // edi
  _QWORD *i; // rbx
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // r12
  Microsoft::BamoImpl::BamoProxyImpl *v10; // rbx
  char *v11; // rbp
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v13; // eax
  int v15; // eax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18[18]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = **a2;
  v4 = 0;
  for ( i = *(_QWORD **)(a1 + 32); i; i = (_QWORD *)i[5] )
  {
    if ( *(_DWORD *)(i[4] + 36LL) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL) )
      break;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 32LL))(i);
  v7 = i[4];
  v8 = *(_QWORD *)(v7 + 24);
  v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32);
  v10 = 0LL;
  v11 = 0LL;
  if ( v3 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v8 + 32),
              *(_DWORD *)(v7 + 36),
              v3);
    v10 = Proxy;
    if ( !Proxy )
    {
      v15 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v7 + 24) + 32LL),
              -2018375668,
              0);
      v4 = v15;
      if ( v15 >= 0 )
        return v4;
      v16 = (unsigned int)v15;
      v17 = 24416LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)v16,
        v18[0]);
      return v4;
    }
    v11 = (char *)Proxy - 16;
  }
  if ( *(int *)(a1 + 8) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(
      v18,
      v9,
      a1);
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)(a1 - 16) + 96LL))(a1 - 16, v6, v11);
    v4 = v13;
    if ( v13 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v9, -2018375668, 0);
    }
    else if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5F74,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)(unsigned int)v13,
        v18[0]);
    }
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(v18);
  }
  if ( v10 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v10);
  if ( (v4 & 0x80000000) != 0 )
  {
    v16 = v4;
    v17 = 24451LL;
    goto LABEL_21;
  }
  return v4;
}
