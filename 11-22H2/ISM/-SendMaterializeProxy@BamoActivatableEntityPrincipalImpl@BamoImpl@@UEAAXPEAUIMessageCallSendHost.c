/*
 * XREFs of ?SendMaterializeProxy@BamoActivatableEntityPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180007B60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x180007B30 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x1800080E0 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1800B4298 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

void __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoActivatableEntityPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // r12
  char *v7; // rsi
  int v8; // eax
  _BYTE *v9; // r15
  __int64 v10; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // rcx
  __int64 v12; // r8
  unsigned int *v13; // rdi
  unsigned int v14; // ecx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v18; // rcx
  char *v19; // rsi
  __int64 v20; // r8
  unsigned int *v21; // rdi
  unsigned int v22; // ecx
  __int64 v23; // rdx
  unsigned int v24; // eax
  Microsoft::BamoImpl::BaseBamoPeerImpl *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r9
  struct IMessageCallSendHost *SendHost; // rsi
  __int64 v29; // rdi
  unsigned int ItemId; // eax
  unsigned int v31; // eax
  __int64 v32; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v33; // rcx
  char *v34; // rsi
  __int64 v35; // r8
  unsigned int *v36; // rdi
  unsigned int v37; // ecx
  __int64 v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v41; // rcx
  char *v42; // rsi
  __int64 v43; // r8
  unsigned int *v44; // rdi
  __int64 v45; // r15
  __int64 v46; // rdx
  unsigned int v47; // eax
  int v48; // eax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r11
  int v57; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r11
  int v61; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r11
  int v65; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  int v73; // eax
  int v74; // [rsp+20h] [rbp-38h]
  __int64 v75; // [rsp+40h] [rbp-18h] BYREF
  __int64 v76; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+30h]
  unsigned int v78; // [rsp+90h] [rbp+38h]
  unsigned int v79; // [rsp+90h] [rbp+38h]
  unsigned int v80; // [rsp+90h] [rbp+38h]

  v3 = *((_QWORD *)a3 + 4);
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
          (void *)0x423,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v52,
          v74);
    }
  }
  v75 = *(unsigned int *)(v3 + 36);
  v76 = *(unsigned int *)(v3 + 40);
  v7 = 0LL;
  LOWORD(v74) = 1;
  v8 = CoreUICallSend(a2, &v75, 2LL, 0LL);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1DCF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v74);
  v9 = (char *)a3 + 56;
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v10 = *((_QWORD *)a3 + 4);
    v11 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v10 + 24) + 32LL);
    if ( *v9 && *((_QWORD *)v11 + 8) )
    {
      if ( *(_BYTE *)(v10 + 48) )
      {
        v54 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v11);
        if ( v54 )
          v7 = (char *)v54 + 16;
      }
      else
      {
        v7 = (char *)*((_QWORD *)v11 + 9);
      }
      v12 = *((_QWORD *)a3 + 3);
      v13 = (unsigned int *)(v12 + 24);
      v14 = *(_DWORD *)(*((_QWORD *)a3 + 4) + 36LL);
      v78 = v14;
      if ( !*(_DWORD *)(v12 + 24) && *(int *)(v12 + 8) > 0 )
      {
        v55 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 32LL);
        v56 = *(_QWORD *)(v55 + 64);
        if ( v56 )
        {
          v57 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v56 + 24LL))(
                  v56,
                  *(unsigned int *)(v55 + 28),
                  v12,
                  v12 + 24);
          if ( v57 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x423,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v57,
              v74);
          v14 = v78;
        }
      }
      v15 = *v13;
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v75 = v14;
      v76 = v15;
      LOWORD(v74) = 0;
      v16 = CoreUICallSend(v7, &v75, 2LL, 0LL);
      if ( v16 < 0 && v16 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1E56,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v16,
          v74);
    }
    else
    {
      if ( v11 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v11, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v74);
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v17 = *((_QWORD *)a3 + 4);
    v18 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v17 + 24) + 32LL);
    if ( *v9 && *((_QWORD *)v18 + 8) )
    {
      if ( *(_BYTE *)(v17 + 48) )
      {
        v58 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v18);
        if ( v58 )
          v19 = (char *)v58 + 16;
        else
          v19 = 0LL;
      }
      else
      {
        v19 = (char *)*((_QWORD *)v18 + 9);
      }
      v20 = *((_QWORD *)a3 + 3);
      v21 = (unsigned int *)(v20 + 24);
      v22 = *(_DWORD *)(*((_QWORD *)a3 + 4) + 36LL);
      v79 = v22;
      if ( !*(_DWORD *)(v20 + 24) && *(int *)(v20 + 8) > 0 )
      {
        v59 = *(_QWORD *)(*(_QWORD *)(v20 + 16) + 32LL);
        v60 = *(_QWORD *)(v59 + 64);
        if ( v60 )
        {
          v61 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v60 + 24LL))(
                  v60,
                  *(unsigned int *)(v59 + 28),
                  v20,
                  v20 + 24);
          if ( v61 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x423,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v61,
              v74);
          v22 = v79;
        }
      }
      v23 = *v21;
      ++*((_DWORD *)a3 + 4);
      v75 = v22;
      *((_BYTE *)a3 + 60) = 1;
      v76 = v23;
      LOWORD(v74) = 1;
      v24 = CoreUICallSend(v19, &v75, 2LL, 0LL);
      if ( (int)(v24 + 0x80000000) >= 0 && v24 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1E8C,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v24,
          v74);
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
        v74);
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v25 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)a3 + 4);
    v26 = *((_QWORD *)v25 + 3);
    v27 = *(_QWORD *)(v26 + 32);
    if ( *v9 && *(_QWORD *)(v27 + 64) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(v25);
      v29 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(*((Microsoft::BamoImpl::BamoPrincipalImpl **)a3 + 3));
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v75 = v29;
      v76 = ItemId;
      LOWORD(v74) = 2;
      v31 = CoreUICallSend(SendHost, &v75, 2LL, 0LL);
      if ( (int)(v31 + 0x80000000) >= 0 && v31 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1EC2,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v31,
          v74);
    }
    else
    {
      if ( v27 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v26 + 32),
          -2018375675,
          0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v74);
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v32 = *((_QWORD *)a3 + 4);
    v33 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v32 + 24) + 32LL);
    if ( *v9 && *((_QWORD *)v33 + 8) )
    {
      if ( *(_BYTE *)(v32 + 48) )
      {
        v62 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v33);
        if ( v62 )
          v34 = (char *)v62 + 16;
        else
          v34 = 0LL;
      }
      else
      {
        v34 = (char *)*((_QWORD *)v33 + 9);
      }
      v35 = *((_QWORD *)a3 + 3);
      v36 = (unsigned int *)(v35 + 24);
      v37 = *(_DWORD *)(*((_QWORD *)a3 + 4) + 36LL);
      v80 = v37;
      if ( !*(_DWORD *)(v35 + 24) && *(int *)(v35 + 8) > 0 )
      {
        v63 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 32LL);
        v64 = *(_QWORD *)(v63 + 64);
        if ( v64 )
        {
          v65 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v64 + 24LL))(
                  v64,
                  *(unsigned int *)(v63 + 28),
                  v35,
                  v35 + 24);
          if ( v65 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x423,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v65,
              v74);
          v37 = v80;
        }
      }
      v38 = *v36;
      ++*((_DWORD *)a3 + 4);
      v75 = v37;
      *((_BYTE *)a3 + 60) = 1;
      v76 = v38;
      LOWORD(v74) = 3;
      v39 = CoreUICallSend(v34, &v75, 2LL, 0LL);
      if ( (int)(v39 + 0x80000000) >= 0 && v39 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1EF8,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v39,
          v74);
    }
    else
    {
      if ( v33 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v33, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v74);
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v40 = *((_QWORD *)a3 + 4);
    v41 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v40 + 24) + 32LL);
    if ( *v9 && *((_QWORD *)v41 + 8) )
    {
      if ( *(_BYTE *)(v40 + 48) )
      {
        v66 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v41);
        if ( v66 )
          v42 = (char *)v66 + 16;
        else
          v42 = 0LL;
      }
      else
      {
        v42 = (char *)*((_QWORD *)v41 + 9);
      }
      v43 = *((_QWORD *)a3 + 3);
      v44 = (unsigned int *)(v43 + 24);
      v45 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      if ( !*(_DWORD *)(v43 + 24) && *(int *)(v43 + 8) > 0 )
      {
        v67 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 32LL);
        v68 = *(_QWORD *)(v67 + 64);
        if ( v68 )
        {
          v69 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v68 + 24LL))(
                  v68,
                  *(unsigned int *)(v67 + 28),
                  v43,
                  v43 + 24);
          if ( v69 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x423,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v69,
              v74);
        }
      }
      v46 = *v44;
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v75 = v45;
      v76 = v46;
      LOWORD(v74) = 4;
      v47 = CoreUICallSend(v42, &v75, 2LL, 0LL);
      if ( (int)(v47 + 0x80000000) >= 0 && v47 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1F2E,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v47,
          v74);
    }
    else
    {
      if ( v41 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v41, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v74);
    }
  }
  v48 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v48 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1DDE,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v48,
      v74);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 4) + 48LL) )
  {
    v70 = (__int64)a2 + 56;
    if ( !a2 )
      v70 = 72LL;
    *(_BYTE *)v70 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v71 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v72 = *(_QWORD *)(v71 + 64);
    if ( v72 )
    {
      v73 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoActivatableEntityPrincipalImpl *, char *))(*(_QWORD *)v72 + 24LL))(
              v72,
              *(unsigned int *)(v71 + 28),
              this,
              (char *)this + 24);
      if ( v73 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x423,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v73,
          v74);
    }
  }
  v75 = *(unsigned int *)(v3 + 36);
  v76 = *(unsigned int *)(v3 + 40);
  LOWORD(v74) = 80;
  v49 = CoreUICallSend(a2, &v75, 2LL, 0LL);
  if ( v49 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1DF4,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v49,
      v74);
}
