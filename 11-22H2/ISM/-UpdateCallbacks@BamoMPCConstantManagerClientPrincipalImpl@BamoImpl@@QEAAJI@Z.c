/*
 * XREFs of ?UpdateCallbacks@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1800BFA80
 * Callers:
 *     ?Thunk_UpdateCallbacks_25@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800BFA70 (-Thunk_UpdateCallbacks_25@-$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerCl.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000BAE0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000BCD0 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180025808 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::UpdateCallbacks(
        BamoImpl::BamoMPCConstantManagerClientPrincipalImpl *this,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rbx
  __int64 v5; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v6; // rbp
  void (__fastcall ***v7)(_QWORD); // rdi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(i + 32) + 36LL) == *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL) )
      break;
  }
  v5 = *(_QWORD *)(i + 32);
  v6 = 0LL;
  v7 = 0LL;
  if ( (_DWORD)a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v5 + 24) + 32LL),
              *(unsigned int *)(v5 + 36),
              (unsigned int)a2);
    v6 = Proxy;
    if ( !Proxy )
    {
      v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
             *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v5 + 24) + 32LL),
             0x87B2080C,
             0);
      v10 = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x222C,
          (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPC"
                   "ManagerBamo.MPCManagerBamo.bamo.h",
          (const char *)(unsigned int)v9);
      return v10;
    }
    v7 = (void (__fastcall ***)(_QWORD))((char *)Proxy - 16);
  }
  if ( *(_BYTE *)(i + 57) && *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v21,
      *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
      a3,
      0LL);
    v12 = (*(__int64 (__fastcall **)(char *, __int64, void (__fastcall ***)(_QWORD)))(*((_QWORD *)this - 2) + 40LL))(
            (char *)this - 16,
            i - 16,
            v7);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2238,
        (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v12,
        v21[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v21,
      v13,
      v14,
      v15);
  }
  v16 = *(_QWORD *)(i + 64);
  *(_QWORD *)(i + 64) = v7;
  if ( v7 )
    (**v7)(v7);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  if ( v6 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v6, a2, a3);
  if ( *(_BYTE *)(i + 57) && *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v21,
      *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
      a3,
      0LL);
    v17 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 48LL))((char *)this - 16, i - 16);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2248,
        (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v17,
        v21[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v21,
      v18,
      v19,
      v20);
  }
  return 0LL;
}
