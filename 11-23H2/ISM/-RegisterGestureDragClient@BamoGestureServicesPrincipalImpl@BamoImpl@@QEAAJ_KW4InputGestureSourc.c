/*
 * XREFs of ?RegisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJ_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@I@Z @ 0x180025F10
 * Callers:
 *     ?Thunk_RegisterGestureDragClient_219@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180061200 (-Thunk_RegisterGestureDragClient_219@-$IGestureServicesPrincipal_Receive@VBamoGestureServicesPri.c)
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
__int64 __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::RegisterGestureDragClient(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  int v8; // ebx
  _QWORD *v9; // rdi
  int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v14; // r14
  Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rdi
  __int64 v16; // r8
  int v17; // eax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-78h]
  _BYTE v21[88]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v23; // [rsp+A0h] [rbp+8h]

  v8 = 0;
  v9 = *(_QWORD **)(a1 + 32);
  if ( v9 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
    do
    {
      if ( *(_DWORD *)(v9[4] + 36LL) == v10 )
        break;
      v9 = (_QWORD *)v9[5];
    }
    while ( v9 );
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 32LL))(v9);
  v12 = v9[4];
  v13 = *(_QWORD *)(v12 + 24);
  v14 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v13 + 32);
  Proxy = 0LL;
  v16 = a5;
  if ( !a5
    || (Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
                  *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v13 + 32),
                  *(unsigned int *)(v12 + 36),
                  a5)) != 0LL )
  {
    if ( *(int *)(a1 + 8) > 0 )
    {
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>::CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>(
        (__int64)v21,
        v14,
        (void (__fastcall ***)(_QWORD))a1);
      v20 = a4;
      v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(a1 - 16) + 128LL))(
              a1 - 16,
              v23,
              a2,
              a3);
      v8 = v17;
      if ( v17 == -2018375668 )
      {
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v14, -2018375668, 0);
      }
      else if ( v17 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x883A,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v17,
          a4);
      }
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>((__int64)v21);
    }
    if ( Proxy )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(Proxy, v11, v16);
    if ( v8 < 0 )
    {
      v19 = 34889LL;
      goto LABEL_22;
    }
  }
  else
  {
    v8 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v12 + 24) + 32LL),
           -2018375668,
           0);
    if ( v8 < 0 )
    {
      v19 = 34854LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v20);
    }
  }
  return (unsigned int)v8;
}
