/*
 * XREFs of ?SendMaterializeProxy@BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800065C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18009F9D0 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1800A1C60 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x1800A4AD8 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoActivationWatcherPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoActivationWatcherPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // r15
  void (__fastcall *v16)(_QWORD *, __int64, __int64); // r14
  __int64 v17; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v22; // rcx
  _BYTE *v23; // rsi
  char *v24; // r14
  __int64 v25; // r15
  __int64 v26; // r8
  unsigned int *v27; // rbx
  __int64 v28; // rdx
  int v29; // eax
  struct Microsoft::Bamo::BamoPrincipal *v30; // rcx
  __int64 v31; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v32; // rcx
  char *v33; // r14
  __int64 v34; // r15
  __int64 v35; // r8
  unsigned int *v36; // rbx
  __int64 v37; // rdx
  unsigned int v38; // eax
  struct Microsoft::Bamo::BamoPrincipal *v39; // rcx
  __int64 v40; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v41; // rcx
  char *v42; // rsi
  __int64 v43; // r14
  __int64 v44; // r8
  unsigned int *v45; // rbx
  __int64 v46; // rdx
  unsigned int v47; // eax
  int v48; // eax
  struct IMessageCallSendHost *v49; // rbx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v55; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  int v63; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // eax
  int v72; // [rsp+20h] [rbp-68h]
  __int64 v73; // [rsp+40h] [rbp-48h] BYREF
  __int64 v74; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v76; // [rsp+90h] [rbp+8h] BYREF
  struct IMessageCallSendHost *v77; // [rsp+98h] [rbp+10h]
  __int64 v78; // [rsp+A0h] [rbp+18h]

  v77 = a2;
  v6 = *((_QWORD *)a3 + 4);
  v78 = v6;
  if ( *(_BYTE *)(v6 + 48) )
  {
    v54 = (__int64)a2 + 56;
    if ( !a2 )
      v54 = 72LL;
    *(_BYTE *)v54 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v51 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v52 = *(_QWORD *)(v51 + 64);
    if ( v52 )
    {
      v53 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoActivationWatcherPrincipalImpl *, char *))(*(_QWORD *)v52 + 24LL))(
              v52,
              *(unsigned int *)(v51 + 28),
              this,
              (char *)this + 24);
      if ( v53 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x423,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v53,
          v72);
    }
  }
  v73 = *(unsigned int *)(v6 + 36);
  v74 = *(unsigned int *)(v6 + 40);
  LOWORD(v72) = 5;
  v7 = CoreUICallSend(a2, &v73, 2LL, 0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2A16,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v72);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v8 = *((_QWORD *)this + 5);
    if ( v8 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)a3 + 4) + 16LL);
      v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v12 = v11;
      if ( *(_QWORD *)(v11 + 24) != v10[2] )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x19D,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)0x87B20819LL,
          v72);
      v13 = v10[4];
      if ( !v13 )
        goto LABEL_11;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v13 + 32) + 36LL) == *(_DWORD *)(v11 + 36) )
          break;
        v13 = *(_QWORD *)(v13 + 40);
      }
      while ( v13 );
      if ( !v13 )
      {
LABEL_11:
        v14 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v10 + 72LL))(v10, v11, &v76);
        if ( v14 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x29F,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v14,
            v72);
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v76 + 32LL))(v76);
        *(_QWORD *)(v13 + 24) = v10;
        v15 = *(_QWORD *)(v13 + 32);
        *(_QWORD *)(v13 + 32) = v12;
        (**(void (__fastcall ***)(__int64))v12)(v12);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        *(_QWORD *)(v13 + 40) = v10[4];
        v10[4] = v13;
        *(_QWORD *)(v13 + 48) = *(_QWORD *)(v12 + 56);
        *(_QWORD *)(v12 + 56) = v13;
      }
      if ( !*(_BYTE *)(v13 + 56) )
      {
        *(_BYTE *)(v13 + 56) = 1;
        *(_BYTE *)(v13 + 59) = 1;
        v16 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*v10 + 64LL);
        v17 = *(_QWORD *)(v13 + 32);
        v18 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v17 + 24) + 32LL);
        if ( *(_BYTE *)(v17 + 48) )
        {
          v55 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v18);
          v19 = v55 ? (__int64)v55 + 16 : 0LL;
        }
        else
        {
          v19 = *((_QWORD *)v18 + 9);
        }
        v16(v10, v19, v13);
        v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
        if ( v20 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x1BC,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v20,
            v72);
      }
      ++*(_DWORD *)(v13 + 16);
      *(_BYTE *)(v13 + 60) = 1;
    }
    v21 = *((_QWORD *)a3 + 4);
    v22 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v21 + 24) + 32LL);
    v23 = (char *)a3 + 56;
    if ( *((_BYTE *)a3 + 56) && *((_QWORD *)v22 + 8) )
    {
      if ( *(_BYTE *)(v21 + 48) )
      {
        v56 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v22);
        if ( v56 )
          v24 = (char *)v56 + 16;
        else
          v24 = 0LL;
      }
      else
      {
        v24 = (char *)*((_QWORD *)v22 + 9);
      }
      v25 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      v26 = *((_QWORD *)a3 + 3);
      v27 = (unsigned int *)(v26 + 24);
      if ( !*(_DWORD *)(v26 + 24) && *(int *)(v26 + 8) > 0 )
      {
        v57 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 32LL);
        v58 = *(_QWORD *)(v57 + 64);
        if ( v58 )
        {
          v59 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v58 + 24LL))(
                  v58,
                  *(unsigned int *)(v57 + 28),
                  v26,
                  v26 + 24);
          if ( v59 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x423,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v59,
              v72);
        }
      }
      v28 = *v27;
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v73 = v25;
      v74 = v28;
      LOWORD(v72) = 1;
      v29 = CoreUICallSend(v24, &v73, 2LL, 6LL);
      if ( v29 < 0 && v29 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2AC7,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v29,
          v72);
    }
    else
    {
      if ( v22 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v22, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v72);
    }
  }
  else
  {
    v23 = (char *)a3 + 56;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v30 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 6);
    if ( v30 )
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v30,
        *(struct Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a3 + 4) + 16LL));
    v31 = *((_QWORD *)a3 + 4);
    v32 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v31 + 24) + 32LL);
    if ( *v23 && *((_QWORD *)v32 + 8) )
    {
      if ( *(_BYTE *)(v31 + 48) )
      {
        v60 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v32);
        if ( v60 )
          v33 = (char *)v60 + 16;
        else
          v33 = 0LL;
      }
      else
      {
        v33 = (char *)*((_QWORD *)v32 + 9);
      }
      v34 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      v35 = *((_QWORD *)a3 + 3);
      v36 = (unsigned int *)(v35 + 24);
      if ( !*(_DWORD *)(v35 + 24) && *(int *)(v35 + 8) > 0 )
      {
        v61 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 32LL);
        v62 = *(_QWORD *)(v61 + 64);
        if ( v62 )
        {
          v63 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v62 + 24LL))(
                  v62,
                  *(unsigned int *)(v61 + 28),
                  v35,
                  v35 + 24);
          if ( v63 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x423,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v63,
              v72);
        }
      }
      v37 = *v36;
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v73 = v34;
      v74 = v37;
      LOWORD(v72) = 2;
      v38 = CoreUICallSend(v33, &v73, 2LL, 6LL);
      if ( (int)(v38 + 0x80000000) >= 0 && v38 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2AFF,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v38,
          v72);
    }
    else
    {
      if ( v32 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v32, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v72);
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v39 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 7);
    if ( v39 )
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v39,
        *(struct Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a3 + 4) + 16LL));
    v40 = *((_QWORD *)a3 + 4);
    v41 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v40 + 24) + 32LL);
    if ( *v23 && *((_QWORD *)v41 + 8) )
    {
      if ( *(_BYTE *)(v40 + 48) )
      {
        v64 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v41);
        if ( v64 )
          v42 = (char *)v64 + 16;
        else
          v42 = 0LL;
      }
      else
      {
        v42 = (char *)*((_QWORD *)v41 + 9);
      }
      v43 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      v44 = *((_QWORD *)a3 + 3);
      v45 = (unsigned int *)(v44 + 24);
      if ( !*(_DWORD *)(v44 + 24) && *(int *)(v44 + 8) > 0 )
      {
        v65 = *(_QWORD *)(*(_QWORD *)(v44 + 16) + 32LL);
        v66 = *(_QWORD *)(v65 + 64);
        if ( v66 )
        {
          v67 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v66 + 24LL))(
                  v66,
                  *(unsigned int *)(v65 + 28),
                  v44,
                  v44 + 24);
          if ( v67 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x423,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v67,
              v72);
        }
      }
      v46 = *v45;
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v73 = v43;
      v74 = v46;
      LOWORD(v72) = 3;
      v47 = CoreUICallSend(v42, &v73, 2LL, 6LL);
      if ( ((v47 + 0x80000000) & 0x80000000) == 0 && v47 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2B37,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v47,
          v72);
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
        v72);
    }
  }
  v48 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v48 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2A25,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v48,
      v72);
  v49 = v77;
  if ( *(_BYTE *)(*((_QWORD *)a3 + 4) + 48LL) )
  {
    v68 = (__int64)v77 + 56;
    if ( !v77 )
      v68 = 72LL;
    *(_BYTE *)v68 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v69 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v70 = *(_QWORD *)(v69 + 64);
    if ( v70 )
    {
      v71 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoActivationWatcherPrincipalImpl *, char *))(*(_QWORD *)v70 + 24LL))(
              v70,
              *(unsigned int *)(v69 + 28),
              this,
              (char *)this + 24);
      if ( v71 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x423,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v71,
          v72);
    }
  }
  v73 = *(unsigned int *)(v78 + 36);
  v74 = *(unsigned int *)(v78 + 40);
  LOWORD(v72) = 80;
  v50 = CoreUICallSend(v49, &v73, 2LL, 0LL);
  if ( v50 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2A3B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v50,
      v72);
}
