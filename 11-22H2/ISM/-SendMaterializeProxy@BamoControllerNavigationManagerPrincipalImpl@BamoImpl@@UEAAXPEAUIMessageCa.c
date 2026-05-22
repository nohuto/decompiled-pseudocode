/*
 * XREFs of ?SendMaterializeProxy@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180006010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1800B4298 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

void __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoControllerNavigationManagerPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rsi
  struct IMessageCallSendHost *v6; // r13
  int v7; // eax
  _BYTE *v8; // r15
  __int64 v9; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v10; // rcx
  char *v11; // r12
  __int64 v12; // r8
  unsigned int *v13; // r14
  __int64 v14; // r13
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v18; // rcx
  char *v19; // r15
  __int64 v20; // r8
  unsigned int *v21; // r14
  __int64 v22; // r12
  __int64 v23; // rdx
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  int v43; // [rsp+20h] [rbp-58h]
  __int64 v44; // [rsp+40h] [rbp-38h] BYREF
  __int64 v45; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 4);
  v6 = a2;
  if ( *(_BYTE *)(v3 + 48) )
  {
    v30 = (__int64)a2 + 56;
    if ( !a2 )
      v30 = 72LL;
    *(_BYTE *)v30 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v28 = *(_QWORD *)(v27 + 64);
    if ( v28 )
    {
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoControllerNavigationManagerPrincipalImpl *, char *))(*(_QWORD *)v28 + 24LL))(
              v28,
              *(unsigned int *)(v27 + 28),
              this,
              (char *)this + 24);
      if ( v29 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x423,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v29,
          v43);
    }
  }
  v44 = *(unsigned int *)(v3 + 36);
  v45 = *(unsigned int *)(v3 + 40);
  LOWORD(v43) = 14;
  v7 = CoreUICallSend(v6, &v44, 2LL, 0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4C6B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v43);
  v8 = (char *)a3 + 56;
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v9 = *((_QWORD *)a3 + 4);
    v10 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v9 + 24) + 32LL);
    if ( *v8 && *((_QWORD *)v10 + 8) )
    {
      if ( *(_BYTE *)(v9 + 48) )
      {
        v31 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v10);
        if ( v31 )
          v11 = (char *)v31 + 16;
        else
          v11 = 0LL;
      }
      else
      {
        v11 = (char *)*((_QWORD *)v10 + 9);
      }
      v12 = *((_QWORD *)a3 + 3);
      v13 = (unsigned int *)(v12 + 24);
      v14 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      if ( !*(_DWORD *)(v12 + 24) && *(int *)(v12 + 8) > 0 )
      {
        v32 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 32LL);
        v33 = *(_QWORD *)(v32 + 64);
        if ( v33 )
        {
          v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v33 + 24LL))(
                  v33,
                  *(unsigned int *)(v32 + 28),
                  v12,
                  v12 + 24);
          if ( v34 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x423,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v34,
              v43);
        }
      }
      v15 = *v13;
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v45 = v15;
      LOWORD(v43) = 0;
      v44 = v14;
      v16 = CoreUICallSend(v11, &v44, 2LL, 20LL);
      if ( v16 < 0 && v16 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4CF2,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v16,
          v43);
      v6 = a2;
    }
    else
    {
      if ( v10 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v10, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v43);
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v17 = *((_QWORD *)a3 + 4);
    v18 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v17 + 24) + 32LL);
    if ( *v8 && *((_QWORD *)v18 + 8) )
    {
      if ( *(_BYTE *)(v17 + 48) )
      {
        v35 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v18);
        if ( v35 )
          v19 = (char *)v35 + 16;
        else
          v19 = 0LL;
      }
      else
      {
        v19 = (char *)*((_QWORD *)v18 + 9);
      }
      v20 = *((_QWORD *)a3 + 3);
      v21 = (unsigned int *)(v20 + 24);
      v22 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      if ( !*(_DWORD *)(v20 + 24) && *(int *)(v20 + 8) > 0 )
      {
        v36 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 32LL);
        v37 = *(_QWORD *)(v36 + 64);
        if ( v37 )
        {
          v38 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v37 + 24LL))(
                  v37,
                  *(unsigned int *)(v36 + 28),
                  v20,
                  v20 + 24);
          if ( v38 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x423,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v38,
              v43);
        }
      }
      v23 = *v21;
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v45 = v23;
      LOWORD(v43) = 1;
      v44 = v22;
      v24 = CoreUICallSend(v19, &v44, 2LL, 20LL);
      if ( (int)(v24 + 0x80000000) >= 0 && v24 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4D28,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v24,
          v43);
    }
    else
    {
      if ( v18 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v18, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v43);
    }
  }
  v25 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v25 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4C7A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v25,
      v43);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 4) + 48LL) )
  {
    v39 = (__int64)v6 + 56;
    if ( !v6 )
      v39 = 72LL;
    *(_BYTE *)v39 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v40 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v41 = *(_QWORD *)(v40 + 64);
    if ( v41 )
    {
      v42 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoControllerNavigationManagerPrincipalImpl *, char *))(*(_QWORD *)v41 + 24LL))(
              v41,
              *(unsigned int *)(v40 + 28),
              this,
              (char *)this + 24);
      if ( v42 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x423,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v42,
          v43);
    }
  }
  v44 = *(unsigned int *)(v3 + 36);
  v45 = *(unsigned int *)(v3 + 40);
  LOWORD(v43) = 80;
  v26 = CoreUICallSend(v6, &v44, 2LL, 0LL);
  if ( v26 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4C90,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v26,
      v43);
}
