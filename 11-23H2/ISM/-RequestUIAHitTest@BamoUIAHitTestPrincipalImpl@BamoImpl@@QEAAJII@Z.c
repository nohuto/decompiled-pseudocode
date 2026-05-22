/*
 * XREFs of ?RequestUIAHitTest@BamoUIAHitTestPrincipalImpl@BamoImpl@@QEAAJII@Z @ 0x1801D79E0
 * Callers:
 *     ?Thunk_RequestUIAHitTest_19@?$IUIAHitTestPrincipal_Receive@VBamoUIAHitTestPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801D7B90 (-Thunk_RequestUIAHitTest_19@-$IUIAHitTestPrincipal_Receive@VBamoUIAHitTestPrincipalImpl@BamoImpl.c)
 * Callees:
 *     ??1?$CalloutWrapper@VBamoUIAHitTestPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800276E8 (--1-$CalloutWrapper@VBamoUIAHitTestPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoUIAHitTestPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoUIAHitTestPrincipalImpl@1@@Z @ 0x1801D7628 (--0-$CalloutWrapper@VBamoUIAHitTestPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEA_ea_1801D7628.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoUIAHitTestPrincipalImpl::RequestUIAHitTest(
        BamoImpl::BamoUIAHitTestPrincipalImpl *this,
        unsigned int a2,
        unsigned int a3)
{
  int v6; // ebx
  _QWORD *v7; // rdi
  int v8; // ecx
  __int64 v9; // rbp
  __int64 v10; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector **v11; // rdi
  int v12; // eax
  int v14; // [rsp+20h] [rbp-48h]
  _BYTE v15[32]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

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
  v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 32LL))(v7);
  v10 = *(_QWORD *)(v7[4] + 24LL);
  v11 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v10 + 32);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoUIAHitTestPrincipalImpl>::CalloutWrapper<BamoImpl::BamoUIAHitTestPrincipalImpl>(
      (__int64)v15,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v10 + 32),
      (void (__fastcall ***)(_QWORD))this);
    v12 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD, _QWORD))(*((_QWORD *)this - 2) + 96LL))(
            (char *)this - 16,
            v9,
            a2,
            a3);
    v6 = v12;
    if ( v12 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v11, 0x87B2080C, 0);
    }
    else if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x248D,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v12,
        v14);
    }
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoUIAHitTestPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoUIAHitTestPrincipalImpl>((__int64)v15);
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2491,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v6);
  }
  return (unsigned int)v6;
}
