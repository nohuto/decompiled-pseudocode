/*
 * XREFs of ?SendMaterializeProxy@BamoControllerNavigationManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001D240
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x18008AB08 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

void __fastcall BamoImpl::BamoControllerNavigationManagerPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoControllerNavigationManagerPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rsi
  int v7; // eax
  __int64 v8; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // rcx
  char *v10; // r12
  __int64 v11; // r8
  unsigned int *v12; // r14
  unsigned int v13; // r15d
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v17; // rcx
  char *v18; // r12
  __int64 v19; // r8
  unsigned int *v20; // r14
  unsigned int v21; // r15d
  unsigned int v22; // ecx
  unsigned int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // eax
  int v42; // [rsp+20h] [rbp-78h]
  __int64 v43; // [rsp+40h] [rbp-58h] BYREF
  __int64 v44; // [rsp+48h] [rbp-50h]
  _QWORD v45[2]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v46[7]; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  char *v48; // [rsp+A0h] [rbp+8h]

  v3 = *((_QWORD *)a3 + 5);
  if ( *(_BYTE *)(v3 + 48) )
  {
    v29 = (__int64)a2 + 56;
    if ( !a2 )
      v29 = 72LL;
    *(_BYTE *)v29 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v27 = *(_QWORD *)(v26 + 64);
    if ( v27 )
    {
      v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoControllerNavigationManagerPrincipalImpl *, char *))(*(_QWORD *)v27 + 24LL))(
              v27,
              *(unsigned int *)(v26 + 28),
              this,
              (char *)this + 24);
      if ( v28 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3FF,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v28,
          v42);
    }
  }
  v43 = *(unsigned int *)(v3 + 36);
  v44 = *(unsigned int *)(v3 + 40);
  LOWORD(v42) = 13;
  v7 = CoreUICallSend(a2, &v43, 2LL, 0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2238,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v42);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    if ( *((_BYTE *)a3 + 32)
      && (v8 = *((_QWORD *)a3 + 5),
          v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v8 + 24) + 32LL),
          *((_QWORD *)v9 + 8)) )
    {
      if ( *(_BYTE *)(v8 + 48) )
      {
        v30 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v9);
        v10 = (char *)v30 + 16;
        if ( !v30 )
          v10 = 0LL;
        v8 = *((_QWORD *)a3 + 5);
      }
      else
      {
        v10 = (char *)*((_QWORD *)v9 + 9);
      }
      v11 = *((_QWORD *)a3 + 3);
      v12 = (unsigned int *)(v11 + 24);
      v13 = *(_DWORD *)(v8 + 36);
      if ( !*(_DWORD *)(v11 + 24) && *(int *)(v11 + 8) > 0 )
      {
        v31 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 32LL);
        v32 = *(_QWORD *)(v31 + 64);
        if ( v32 )
        {
          v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v32 + 24LL))(
                  v32,
                  *(unsigned int *)(v31 + 28),
                  v11,
                  v11 + 24);
          if ( v33 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3FF,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v33,
              v42);
        }
      }
      v14 = *v12;
      _InterlockedIncrement((volatile signed __int32 *)a3 + 4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v42);
      v14 = (unsigned int)v48;
      v13 = (unsigned int)v48;
      v10 = v48;
    }
    v45[0] = v13;
    v45[1] = v14;
    LOWORD(v42) = 0;
    v15 = CoreUICallSend(v10, v45, 2LL, 19LL);
    if ( (int)(v15 + 0x80000000) >= 0 && v15 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x22BD,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v15,
        v42);
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    if ( *((_BYTE *)a3 + 32)
      && (v16 = *((_QWORD *)a3 + 5),
          v17 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v16 + 24) + 32LL),
          *((_QWORD *)v17 + 8)) )
    {
      if ( *(_BYTE *)(v16 + 48) )
      {
        v34 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v17);
        v18 = (char *)v34 + 16;
        if ( !v34 )
          v18 = 0LL;
        v16 = *((_QWORD *)a3 + 5);
      }
      else
      {
        v18 = (char *)*((_QWORD *)v17 + 9);
      }
      v19 = *((_QWORD *)a3 + 3);
      v20 = (unsigned int *)(v19 + 24);
      v21 = *(_DWORD *)(v16 + 36);
      if ( !*(_DWORD *)(v19 + 24) && *(int *)(v19 + 8) > 0 )
      {
        v35 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 32LL);
        v36 = *(_QWORD *)(v35 + 64);
        if ( v36 )
        {
          v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v36 + 24LL))(
                  v36,
                  *(unsigned int *)(v35 + 28),
                  v19,
                  v19 + 24);
          if ( v37 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3FF,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v37,
              v42);
        }
      }
      v22 = *v20;
      _InterlockedIncrement((volatile signed __int32 *)a3 + 4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v42);
      v22 = (unsigned int)v48;
      v21 = (unsigned int)v48;
      v18 = v48;
    }
    v43 = v21;
    v44 = v22;
    LOWORD(v42) = 1;
    v23 = CoreUICallSend(v18, &v43, 2LL, 19LL);
    if ( (int)(v23 + 0x80000000) >= 0 && v23 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x22F0,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v23,
        v42);
  }
  v24 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v24 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2247,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v24,
      v42);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 5) + 48LL) )
  {
    v38 = (__int64)a2 + 56;
    if ( !a2 )
      v38 = 72LL;
    *(_BYTE *)v38 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v39 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v40 = *(_QWORD *)(v39 + 64);
    if ( v40 )
    {
      v41 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoControllerNavigationManagerPrincipalImpl *, char *))(*(_QWORD *)v40 + 24LL))(
              v40,
              *(unsigned int *)(v39 + 28),
              this,
              (char *)this + 24);
      if ( v41 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3FF,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v41,
          v42);
    }
  }
  v46[0] = *(unsigned int *)(v3 + 36);
  v46[1] = *(unsigned int *)(v3 + 40);
  LOWORD(v42) = 76;
  v25 = CoreUICallSend(a2, v46, 2LL, 0LL);
  if ( v25 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x225D,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v25,
      v42);
}
