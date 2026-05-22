/*
 * XREFs of ?SendMaterializeProxy@BamoActivatableEntityPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001F220
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x18001F8D0 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x18008AB08 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

void __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoActivatableEntityPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // r13
  struct IMessageCallSendHost *v7; // r12
  int v8; // eax
  __int64 v9; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v10; // rcx
  __int64 v11; // r8
  unsigned int *v12; // rsi
  unsigned int v13; // r14d
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v17; // rcx
  __int64 v18; // r8
  unsigned int *v19; // rsi
  unsigned int v20; // r14d
  unsigned int v21; // ecx
  unsigned int v22; // eax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v23; // rcx
  struct IMessageCallSendHost *SendHost; // rax
  __int64 v25; // r8
  struct IMessageCallSendHost *v26; // r14
  unsigned int *v27; // rsi
  unsigned int v28; // r12d
  unsigned int v29; // ecx
  __int64 v30; // rax
  struct IMessageCallSendHost *v31; // r12
  unsigned int v32; // eax
  __int64 v33; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v34; // rcx
  __int64 v35; // r8
  unsigned int *v36; // rsi
  unsigned int v37; // r14d
  unsigned int v38; // ecx
  unsigned int v39; // eax
  __int64 v40; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v41; // rcx
  struct IMessageCallSendHost *v42; // r12
  __int64 v43; // r8
  unsigned int *v44; // rsi
  unsigned int v45; // r14d
  unsigned int v46; // ecx
  unsigned int v47; // eax
  int v48; // eax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  int v57; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  int v76; // eax
  int v77; // [rsp+20h] [rbp-59h]
  __int64 v78; // [rsp+40h] [rbp-39h] BYREF
  __int64 v79; // [rsp+48h] [rbp-31h]
  _QWORD v80[2]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v81[2]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v82[2]; // [rsp+70h] [rbp-9h] BYREF
  _QWORD v83[2]; // [rsp+80h] [rbp+7h] BYREF
  _QWORD v84[2]; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  struct IMessageCallSendHost *v86; // [rsp+E0h] [rbp+67h]

  v3 = *((_QWORD *)a3 + 5);
  if ( *(_BYTE *)(v3 + 48) )
  {
    v53 = (__int64)a2 + 56;
    if ( !a2 )
      v53 = 72LL;
    *(_BYTE *)v53 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v50 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v51 = *(_QWORD *)(v50 + 64);
    if ( v51 )
    {
      v52 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoActivatableEntityPrincipalImpl *, char *))(*(_QWORD *)v51 + 24LL))(
              v51,
              *(unsigned int *)(v50 + 28),
              this,
              (char *)this + 24);
      if ( v52 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3FF,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v52,
          v77);
    }
  }
  v78 = *(unsigned int *)(v3 + 36);
  v7 = 0LL;
  v79 = *(unsigned int *)(v3 + 40);
  LOWORD(v77) = 1;
  v8 = CoreUICallSend(a2, &v78, 2LL, 0LL);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xFB19,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v77);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    if ( *((_BYTE *)a3 + 32)
      && (v9 = *((_QWORD *)a3 + 5),
          v10 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v9 + 24) + 32LL),
          *((_QWORD *)v10 + 8)) )
    {
      if ( *(_BYTE *)(v9 + 48) )
      {
        v54 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v10);
        if ( v54 )
          v7 = (struct Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)v54 + 16);
        v9 = *((_QWORD *)a3 + 5);
      }
      else
      {
        v7 = (struct IMessageCallSendHost *)*((_QWORD *)v10 + 9);
      }
      v11 = *((_QWORD *)a3 + 3);
      v12 = (unsigned int *)(v11 + 24);
      v13 = *(_DWORD *)(v9 + 36);
      if ( !*(_DWORD *)(v11 + 24) && *(int *)(v11 + 8) > 0 )
      {
        v55 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 32LL);
        v56 = *(_QWORD *)(v55 + 64);
        if ( v56 )
        {
          v57 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v56 + 24LL))(
                  v56,
                  *(unsigned int *)(v55 + 28),
                  v11,
                  v11 + 24);
          if ( v57 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3FF,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v57,
              v77);
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
        v77);
      v14 = (unsigned int)v86;
      v13 = (unsigned int)v86;
      v7 = v86;
    }
    v80[0] = v13;
    v80[1] = v14;
    LOWORD(v77) = 0;
    v15 = CoreUICallSend(v7, v80, 2LL, 0LL);
    if ( ((v15 + 0x80000000) & 0x80000000) == 0 && v15 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xFB9E,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v15,
        v77);
    v7 = 0LL;
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
        v58 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v17);
        if ( v58 )
          v7 = (struct Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)v58 + 16);
        v16 = *((_QWORD *)a3 + 5);
      }
      else
      {
        v7 = (struct IMessageCallSendHost *)*((_QWORD *)v17 + 9);
      }
      v18 = *((_QWORD *)a3 + 3);
      v19 = (unsigned int *)(v18 + 24);
      v20 = *(_DWORD *)(v16 + 36);
      if ( !*(_DWORD *)(v18 + 24) && *(int *)(v18 + 8) > 0 )
      {
        v59 = *(_QWORD *)(*(_QWORD *)(v18 + 16) + 32LL);
        v60 = *(_QWORD *)(v59 + 64);
        if ( v60 )
        {
          v61 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v60 + 24LL))(
                  v60,
                  *(unsigned int *)(v59 + 28),
                  v18,
                  v18 + 24);
          if ( v61 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3FF,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v61,
              v77);
        }
      }
      v21 = *v19;
      _InterlockedIncrement((volatile signed __int32 *)a3 + 4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v77);
      v21 = (unsigned int)v86;
      v20 = (unsigned int)v86;
      v7 = v86;
    }
    v81[0] = v20;
    v81[1] = v21;
    LOWORD(v77) = 1;
    v22 = CoreUICallSend(v7, v81, 2LL, 0LL);
    if ( ((v22 + 0x80000000) & 0x80000000) == 0 && v22 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xFBD1,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v22,
        v77);
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    if ( *((_BYTE *)a3 + 32)
      && (v23 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)a3 + 5),
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 3) + 32LL) + 64LL)) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v23);
      v25 = *((_QWORD *)a3 + 3);
      v26 = SendHost;
      v27 = (unsigned int *)(v25 + 24);
      v28 = *(_DWORD *)(*((_QWORD *)a3 + 5) + 36LL);
      if ( !*(_DWORD *)(v25 + 24) && *(int *)(v25 + 8) > 0 )
      {
        v62 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 32LL);
        v63 = *(_QWORD *)(v62 + 64);
        if ( v63 )
        {
          v64 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v63 + 24LL))(
                  v63,
                  *(unsigned int *)(v62 + 28),
                  v25,
                  v25 + 24);
          if ( v64 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3FF,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v64,
              v77);
        }
      }
      v29 = *v27;
      _InterlockedIncrement((volatile signed __int32 *)a3 + 4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v77);
      v29 = (unsigned int)v86;
      v28 = (unsigned int)v86;
      v26 = v86;
    }
    v86 = (struct IMessageCallSendHost *)*((_QWORD *)this + 7);
    v30 = v28;
    v31 = 0LL;
    v82[0] = v30;
    v82[1] = v29;
    LOWORD(v77) = 2;
    v32 = CoreUICallSend(v26, v82, 2LL, 0LL);
    if ( ((v32 + 0x80000000) & 0x80000000) == 0 && v32 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xFC04,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v32,
        v77);
  }
  else
  {
    v31 = 0LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    if ( *((_BYTE *)a3 + 32)
      && (v33 = *((_QWORD *)a3 + 5),
          v34 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v33 + 24) + 32LL),
          *((_QWORD *)v34 + 8)) )
    {
      if ( *(_BYTE *)(v33 + 48) )
      {
        v65 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v34);
        if ( v65 )
          v31 = (struct Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)v65 + 16);
        v33 = *((_QWORD *)a3 + 5);
      }
      else
      {
        v31 = (struct IMessageCallSendHost *)*((_QWORD *)v34 + 9);
      }
      v35 = *((_QWORD *)a3 + 3);
      v36 = (unsigned int *)(v35 + 24);
      v37 = *(_DWORD *)(v33 + 36);
      if ( !*(_DWORD *)(v35 + 24) && *(int *)(v35 + 8) > 0 )
      {
        v66 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 32LL);
        v67 = *(_QWORD *)(v66 + 64);
        if ( v67 )
        {
          v68 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v67 + 24LL))(
                  v67,
                  *(unsigned int *)(v66 + 28),
                  v35,
                  v35 + 24);
          if ( v68 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3FF,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v68,
              v77);
        }
      }
      v38 = *v36;
      _InterlockedIncrement((volatile signed __int32 *)a3 + 4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v77);
      v38 = (unsigned int)v86;
      v37 = (unsigned int)v86;
      v31 = v86;
    }
    v83[0] = v37;
    v83[1] = v38;
    LOWORD(v77) = 3;
    v39 = CoreUICallSend(v31, v83, 2LL, 0LL);
    if ( ((v39 + 0x80000000) & 0x80000000) == 0 && v39 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xFC37,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v39,
        v77);
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    if ( *((_BYTE *)a3 + 32)
      && (v40 = *((_QWORD *)a3 + 5),
          v41 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v40 + 24) + 32LL),
          *((_QWORD *)v41 + 8)) )
    {
      if ( *(_BYTE *)(v40 + 48) )
      {
        v69 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v41);
        if ( v69 )
          v42 = (struct Microsoft::BamoImpl::BufferingMessageCallHost *)((char *)v69 + 16);
        else
          v42 = 0LL;
        v40 = *((_QWORD *)a3 + 5);
      }
      else
      {
        v42 = (struct IMessageCallSendHost *)*((_QWORD *)v41 + 9);
      }
      v43 = *((_QWORD *)a3 + 3);
      v44 = (unsigned int *)(v43 + 24);
      v45 = *(_DWORD *)(v40 + 36);
      if ( !*(_DWORD *)(v43 + 24) && *(int *)(v43 + 8) > 0 )
      {
        v70 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 32LL);
        v71 = *(_QWORD *)(v70 + 64);
        if ( v71 )
        {
          v72 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v71 + 24LL))(
                  v71,
                  *(unsigned int *)(v70 + 28),
                  v43,
                  v43 + 24);
          if ( v72 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3FF,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v72,
              v77);
        }
      }
      v46 = *v44;
      _InterlockedIncrement((volatile signed __int32 *)a3 + 4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v77);
      v46 = (unsigned int)v86;
      v45 = (unsigned int)v86;
      v42 = v86;
    }
    v78 = v45;
    v79 = v46;
    LOWORD(v77) = 4;
    v47 = CoreUICallSend(v42, &v78, 2LL, 0LL);
    if ( ((v47 + 0x80000000) & 0x80000000) == 0 && v47 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xFC6A,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v47,
        v77);
  }
  v48 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v48 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xFB28,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v48,
      v77);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 5) + 48LL) )
  {
    v73 = (__int64)a2 + 56;
    if ( !a2 )
      v73 = 72LL;
    *(_BYTE *)v73 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v74 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v75 = *(_QWORD *)(v74 + 64);
    if ( v75 )
    {
      v76 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoActivatableEntityPrincipalImpl *, char *))(*(_QWORD *)v75 + 24LL))(
              v75,
              *(unsigned int *)(v74 + 28),
              this,
              (char *)this + 24);
      if ( v76 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3FF,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v76,
          v77);
    }
  }
  v84[0] = *(unsigned int *)(v3 + 36);
  v84[1] = *(unsigned int *)(v3 + 40);
  LOWORD(v77) = 76;
  v49 = CoreUICallSend(a2, v84, 2LL, 0LL);
  if ( v49 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xFB3E,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v49,
      v77);
}
