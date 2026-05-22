/*
 * XREFs of ?StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@Z @ 0x180161CC8
 * Callers:
 *     ?Thunk_StartAnimation_205@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180073AC0 (-Thunk_StartAnimation_205@-$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@.c)
 * Callees:
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x180025808 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$CalloutWrapper@VBamoGestureServicesPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180026B38 (--1-$CalloutWrapper@VBamoGestureServicesPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VBamoGestureServicesPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoGestureServicesPrincipalImpl@1@@Z @ 0x180026F74 (--0-$CalloutWrapper@VBamoGestureServicesPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft_ea_180026F74.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z @ 0x1800B0D0C (-AllocateBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAXI@Z.c)
 *     ?ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z @ 0x1800B1C10 (-ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::StartAnimation(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rbp
  int v8; // edi
  _QWORD *v9; // rbx
  int v10; // ecx
  __int64 v11; // rsi
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v12; // r12
  __int64 v13; // rdx
  _QWORD *Buffer; // r14
  unsigned int v15; // eax
  _QWORD *v16; // rbx
  __int64 v17; // r8
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  Microsoft::BamoImpl::BamoProxyImpl *v19; // rbx
  __int64 v20; // r8
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rdx
  int v25; // eax
  _QWORD *v26; // rsi
  _BYTE v27[88]; // [rsp+50h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v29; // [rsp+B0h] [rbp+8h]
  unsigned int v31; // [rsp+C8h] [rbp+20h]

  v5 = a4;
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
  v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 32LL))(v9);
  v11 = v9[4];
  v12 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v11 + 24) + 32LL);
  Buffer = Microsoft::BamoImpl::BaseBamoConnectionImpl::AllocateBuffer(v12, 8 * (int)v5);
  v15 = 0;
  v31 = 0;
  if ( (_DWORD)v5 )
  {
    v16 = Buffer;
    do
    {
      *v16 = 0LL;
      v17 = *a3;
      if ( (_DWORD)v17 )
      {
        Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
                  *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v11 + 24) + 32LL),
                  *(unsigned int *)(v11 + 36),
                  v17);
        if ( !Proxy )
        {
          v21 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
                  *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v11 + 24) + 32LL),
                  0x87B2080C,
                  0);
          v22 = v21;
          if ( v21 < 0 )
          {
            v23 = 35329LL;
LABEL_15:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v23,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
              (const char *)(unsigned int)v21);
          }
          goto LABEL_16;
        }
        *v16 = (char *)Proxy - 16;
        v15 = v31;
      }
      v31 = ++v15;
      ++a3;
      ++v16;
    }
    while ( v15 < (unsigned int)v5 );
  }
  v19 = 0LL;
  v20 = a5;
  if ( !a5
    || (v19 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
                *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v11 + 24) + 32LL),
                *(unsigned int *)(v11 + 36),
                a5)) != 0LL )
  {
    if ( *(int *)(a1 + 8) > 0 )
    {
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>::CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>(
        (__int64)v27,
        v12,
        (void (__fastcall ***)(_QWORD))a1);
      v25 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)(a1 - 16) + 112LL))(
              a1 - 16,
              v29,
              a2,
              Buffer);
      v8 = v25;
      if ( v25 == -2018375668 )
      {
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          (struct Microsoft::BamoImpl::ConnectionIndirector **)v12,
          0x87B2080C,
          0);
      }
      else if ( v25 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x8A2B,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v25,
          v5);
      }
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoGestureServicesPrincipalImpl>((__int64)v27);
    }
    if ( (_DWORD)v5 )
    {
      v26 = Buffer;
      do
      {
        if ( *v26 )
          Microsoft::BamoImpl::BamoProxyImpl::AckReference(
            (Microsoft::BamoImpl::BamoProxyImpl *)(*v26 + 16LL),
            v13,
            v20);
        ++v26;
        --v5;
      }
      while ( v5 );
    }
    if ( v19 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v19, v13, v20);
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A42,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8);
    Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v12, Buffer);
    return (unsigned int)v8;
  }
  else
  {
    v21 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v11 + 24) + 32LL),
            0x87B2080C,
            0);
    v22 = v21;
    if ( v21 < 0 )
    {
      v23 = 35351LL;
      goto LABEL_15;
    }
LABEL_16:
    Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(v12, Buffer);
    return v22;
  }
}
