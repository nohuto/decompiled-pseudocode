/*
 * XREFs of ?UpdateCallbacks@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180096B40
 * Callers:
 *     ?Thunk_UpdateCallbacks_25@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180096B30 (-Thunk_UpdateCallbacks_25@-$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerCl.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x1800059D0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180005A70 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18004C92C (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::UpdateCallbacks(
        BamoImpl::BamoMPCConstantManagerClientPrincipalImpl *this,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rbx
  Microsoft::BamoImpl::BamoProxyImpl *v5; // rsi
  void (__fastcall ***v6)(_QWORD); // rdi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  const char *v17; // r9
  __int64 v18[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 48) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(i + 40) + 36LL) == *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL) )
      break;
  }
  v5 = 0LL;
  v6 = 0LL;
  if ( (_DWORD)a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(i + 40) + 24LL) + 32LL),
              *(unsigned int *)(*(_QWORD *)(i + 40) + 36LL),
              (unsigned int)a2);
    v5 = Proxy;
    if ( !Proxy )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21F1,
        (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)0x87B2080CLL);
      return 2276591628LL;
    }
    v6 = (void (__fastcall ***)(_QWORD))((char *)Proxy - 16);
  }
  if ( *(_BYTE *)(i + 33) )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v18,
      *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
      a3,
      0);
    v9 = (*(__int64 (__fastcall **)(char *, __int64, void (__fastcall ***)(_QWORD)))(*((_QWORD *)this - 2) + 40LL))(
           (char *)this - 16,
           i - 16,
           v6);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x21FD,
        (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v9,
        v18[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v18,
      v10,
      v11,
      v12);
  }
  v13 = *(_QWORD *)(i + 64);
  *(_QWORD *)(i + 64) = v6;
  if ( v6 )
    (**v6)(v6);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  if ( v5 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v5, a2, a3);
  if ( *(_BYTE *)(i + 33) )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v18,
      *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
      a3,
      0);
    v14 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 48LL))((char *)this - 16, i - 16);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x220D,
        (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v14,
        v18[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v18,
      v15,
      v16,
      v17);
  }
  return 0LL;
}
