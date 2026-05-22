/*
 * XREFs of ?CancelOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIIW4GestureProcessorType@@@Z @ 0x180152FFC
 * Callers:
 *     ?Thunk_CancelOperation_200@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800611C0 (-Thunk_CancelOperation_200@-$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl.c)
 * Callees:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180024E28 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$CalloutWrapper@VBamoGestureServicesPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800255C8 (--1-$CalloutWrapper@VBamoGestureServicesPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VBamoGestureServicesPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoGestureServicesPrincipalImpl@1@@Z @ 0x180025C1C (--0-$CalloutWrapper@VBamoGestureServicesPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft_ea_180025C1C.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::CancelOperation(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  int v7; // ebx
  _QWORD *v8; // rdi
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v14; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v15; // rdi
  char *v16; // r12
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  __int64 v18; // rdx
  int v19; // eax
  _BYTE v21[88]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v23; // [rsp+90h] [rbp+8h]

  v7 = 0;
  v8 = *(_QWORD **)(a1 + 32);
  if ( v8 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v8[4] + 36LL) == v9 )
        break;
      v8 = (_QWORD *)v8[5];
    }
    while ( v8 );
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 32LL))(v8);
  v12 = v8[4];
  v13 = *(_QWORD *)(v12 + 24);
  v14 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v13 + 32);
  v15 = 0LL;
  v16 = 0LL;
  if ( a3 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v13 + 32),
              *(unsigned int *)(v12 + 36),
              a3);
    v15 = Proxy;
    if ( !Proxy )
    {
      v7 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
             *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v12 + 24) + 32LL),
             0x87B2080C,
             0);
      if ( v7 < 0 )
      {
        v18 = 34620LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v7);
        return (unsigned int)v7;
      }
      return (unsigned int)v7;
    }
    v16 = (char *)Proxy - 16;
  }
  if ( *(int *)(a1 + 8) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>::CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>(
      (__int64)v21,
      v14,
      (void (__fastcall ***)(_QWORD))a1);
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)(a1 - 16) + 104LL))(
            a1 - 16,
            v23,
            a2,
            v16);
    v7 = v19;
    if ( v19 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
        (struct Microsoft::BamoImpl::ConnectionIndirector **)v14,
        0x87B2080C,
        0);
    }
    else if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8750,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v19,
        a4);
    }
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>((__int64)v21);
  }
  if ( v15 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v15, v10, v11);
  if ( v7 < 0 )
  {
    v18 = 34655LL;
    goto LABEL_18;
  }
  return (unsigned int)v7;
}
