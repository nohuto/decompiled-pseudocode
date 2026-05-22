/*
 * XREFs of ?SetError@BamoAsyncResult_string_PrincipalImpl@BamoImpl@@QEAAJH@Z @ 0x18019CCA8
 * Callers:
 *     ?Thunk_SetError_3@?$IAsyncResult_string_Principal_Receive@VBamoAsyncResult_string_PrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18019CF70 (-Thunk_SetError_3@-$IAsyncResult_string_Principal_Receive@VBamoAsyncResult_string_PrincipalImpl@.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@W4PrologEpilogConfig@12@@Z @ 0x18000BAE0 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000BCD0 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

__int64 __fastcall BamoImpl::BamoAsyncResult_string_PrincipalImpl::SetError(
        BamoImpl::BamoAsyncResult_string_PrincipalImpl *this,
        unsigned int a2)
{
  int v4; // ebx
  _QWORD *v5; // rdi
  int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector **v10; // rdi
  int v11; // eax
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // rdx
  __int64 v16[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v5 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v5[4] + 36LL) == v6 )
        break;
      v5 = (_QWORD *)v5[5];
    }
    while ( v5 );
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 32LL))(v5);
  v9 = *(_QWORD *)(v5[4] + 24LL);
  v10 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v9 + 32);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v16,
      *(_QWORD *)(v9 + 32),
      v7,
      0LL);
    v11 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD))(*((_QWORD *)this - 2) + 88LL))((char *)this - 16, v8, a2);
    v4 = v11;
    v14 = 2276591628LL;
    if ( v11 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v10, 0x87B2080C, 0);
    }
    else if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB83,
        (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.Common.bamo.h",
        (const char *)(unsigned int)v11,
        v16[0]);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      v16,
      v14,
      v12,
      v13);
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB87,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.Common.bamo.h",
        (const char *)(unsigned int)v4);
  }
  return (unsigned int)v4;
}
