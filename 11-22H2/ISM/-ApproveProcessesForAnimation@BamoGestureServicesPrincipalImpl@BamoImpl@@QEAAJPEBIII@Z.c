/*
 * XREFs of ?ApproveProcessesForAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJPEBIII@Z @ 0x18001B398
 * Callers:
 *     ?Thunk_ApproveProcessesForAnimation_229@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180073A00 (-Thunk_ApproveProcessesForAnimation_229@-$IGestureServicesPrincipal_Receive@VBamoGestureServices.c)
 * Callees:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180025808 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$CalloutWrapper@VBamoGestureServicesPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180026B38 (--1-$CalloutWrapper@VBamoGestureServicesPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VBamoGestureServicesPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoGestureServicesPrincipalImpl@1@@Z @ 0x180026F74 (--0-$CalloutWrapper@VBamoGestureServicesPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft_ea_180026F74.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::ApproveProcessesForAnimation(
        BamoImpl::BamoGestureServicesPrincipalImpl *this,
        const unsigned int *a2,
        unsigned int a3,
        unsigned int a4)
{
  int v7; // ebx
  _QWORD *v8; // rdi
  int v9; // ecx
  __int64 v10; // rbp
  __int64 v11; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v12; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v13; // rdi
  int v14; // r12d
  int v15; // eax
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-68h]
  _BYTE v20[88]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v22; // [rsp+90h] [rbp+8h]

  v7 = 0;
  v8 = (_QWORD *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v8[4] + 36LL) == v9 )
        break;
      v8 = (_QWORD *)v8[5];
    }
    while ( v8 );
  }
  v22 = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 32LL))(v8);
  v10 = v8[4];
  v11 = *(_QWORD *)(v10 + 24);
  v12 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v11 + 32);
  v13 = 0LL;
  v14 = 0;
  if ( a4 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v11 + 32),
              *(_DWORD *)(v10 + 36),
              a4);
    v13 = Proxy;
    if ( !Proxy )
    {
      v7 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
             *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v10 + 24) + 32LL),
             -2018375668,
             0);
      if ( v7 >= 0 )
        return (unsigned int)v7;
      v18 = 35623LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v19);
      return (unsigned int)v7;
    }
    v14 = (_DWORD)Proxy - 16;
  }
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>::CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>(
      v20,
      v12,
      this);
    v19 = v14;
    v15 = (*(__int64 (__fastcall **)(char *, __int64, const unsigned int *, _QWORD))(*((_QWORD *)this - 2) + 144LL))(
            (char *)this - 16,
            v22,
            a2,
            a3);
    v7 = v15;
    if ( v15 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v12, -2018375668, 0);
    }
    else if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8B3B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v15,
        v14);
    }
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>(v20);
  }
  if ( v13 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v13);
  if ( v7 < 0 )
  {
    v18 = 35658LL;
    goto LABEL_22;
  }
  return (unsigned int)v7;
}
