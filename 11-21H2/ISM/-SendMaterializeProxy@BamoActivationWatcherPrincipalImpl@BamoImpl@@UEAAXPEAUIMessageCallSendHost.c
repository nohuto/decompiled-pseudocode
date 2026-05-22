/*
 * XREFs of ?SendMaterializeProxy@BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001E900
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x18008AB08 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x18008DEE8 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoActivationWatcherPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoActivationWatcherPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v6; // r13
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
  char *v23; // r14
  unsigned int v24; // esi
  __int64 v25; // r8
  unsigned int *v26; // rbx
  unsigned int v27; // ecx
  unsigned int v28; // eax
  struct Microsoft::Bamo::BamoPrincipal *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  char *v33; // r14
  unsigned int v34; // esi
  __int64 v35; // r8
  unsigned int *v36; // rbx
  unsigned int v37; // ecx
  unsigned int v38; // eax
  struct Microsoft::Bamo::BamoPrincipal *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  char *v43; // r14
  unsigned int v44; // esi
  __int64 v45; // r8
  unsigned int *v46; // rbx
  unsigned int v47; // ecx
  unsigned int v48; // eax
  int v49; // eax
  struct IMessageCallSendHost *v50; // rbx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v56; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // eax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // eax
  int v73; // [rsp+20h] [rbp-98h]
  __int64 v74; // [rsp+40h] [rbp-78h] BYREF
  __int64 v75; // [rsp+48h] [rbp-70h]
  _QWORD v76[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v77[2]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v78[9]; // [rsp+70h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  char *v80; // [rsp+C0h] [rbp+8h] BYREF
  struct IMessageCallSendHost *v81; // [rsp+C8h] [rbp+10h]

  v81 = a2;
  v6 = *((_QWORD *)a3 + 5);
  if ( *(_BYTE *)(v6 + 48) )
  {
    v55 = (__int64)a2 + 56;
    if ( !a2 )
      v55 = 72LL;
    *(_BYTE *)v55 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v52 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v53 = *(_QWORD *)(v52 + 64);
    if ( v53 )
    {
      v54 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoActivationWatcherPrincipalImpl *, char *))(*(_QWORD *)v53 + 24LL))(
              v53,
              *(unsigned int *)(v52 + 28),
              this,
              (char *)this + 24);
      if ( v54 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3FF,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v54,
          v73);
    }
  }
  v74 = *(unsigned int *)(v6 + 36);
  v75 = *(unsigned int *)(v6 + 40);
  LOWORD(v73) = 5;
  v7 = CoreUICallSend(a2, &v74, 2LL, 0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6D7,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v73);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v8 = *((_QWORD *)this + 5);
    if ( v8 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 16LL);
      v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v12 = v11;
      if ( *(_QWORD *)(v11 + 24) != v10[2] )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x164,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
          (const char *)0x87B20819LL,
          v73);
      v13 = v10[4];
      if ( !v13 )
        goto LABEL_11;
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)(v13 + 40) + 36LL) == *(_DWORD *)(v11 + 36) )
          break;
        v13 = *(_QWORD *)(v13 + 48);
      }
      while ( v13 );
      if ( !v13 )
      {
LABEL_11:
        v14 = (*(__int64 (__fastcall **)(_QWORD *, __int64, char **))(*v10 + 72LL))(v10, v11, &v80);
        if ( v14 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x259,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v14,
            v73);
        v13 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v80 + 32LL))(v80);
        *(_QWORD *)(v13 + 24) = v10;
        v15 = *(_QWORD *)(v13 + 40);
        *(_QWORD *)(v13 + 40) = v12;
        (**(void (__fastcall ***)(__int64))v12)(v12);
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        *(_QWORD *)(v13 + 48) = v10[4];
        v10[4] = v13;
        *(_QWORD *)(v13 + 56) = *(_QWORD *)(v12 + 56);
        *(_QWORD *)(v12 + 56) = v13;
      }
      if ( !*(_BYTE *)(v13 + 32) )
      {
        *(_BYTE *)(v13 + 32) = 1;
        v16 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*v10 + 64LL);
        v17 = *(_QWORD *)(v13 + 40);
        v18 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v17 + 24) + 32LL);
        if ( *(_BYTE *)(v17 + 48) )
        {
          v56 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v18);
          v19 = v56 ? (__int64)v56 + 16 : 0LL;
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
            (void *)0x183,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v20,
            v73);
      }
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 16));
    }
    if ( *((_BYTE *)a3 + 32)
      && (v21 = *((_QWORD *)a3 + 5),
          v22 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v21 + 24) + 32LL),
          *((_QWORD *)v22 + 8)) )
    {
      if ( *(_BYTE *)(v21 + 48) )
      {
        v57 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v22);
        v23 = (char *)v57 + 16;
        if ( !v57 )
          v23 = 0LL;
        v21 = *((_QWORD *)a3 + 5);
      }
      else
      {
        v23 = (char *)*((_QWORD *)v22 + 9);
      }
      v24 = *(_DWORD *)(v21 + 36);
      v25 = *((_QWORD *)a3 + 3);
      v26 = (unsigned int *)(v25 + 24);
      if ( !*(_DWORD *)(v25 + 24) && *(int *)(v25 + 8) > 0 )
      {
        v58 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 32LL);
        v59 = *(_QWORD *)(v58 + 64);
        if ( v59 )
        {
          v60 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v59 + 24LL))(
                  v59,
                  *(unsigned int *)(v58 + 28),
                  v25,
                  v25 + 24);
          if ( v60 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3FF,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v60,
              v73);
        }
      }
      v27 = *v26;
      _InterlockedIncrement((volatile signed __int32 *)a3 + 4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v73);
      v27 = (unsigned int)v80;
      v24 = (unsigned int)v80;
      v23 = v80;
    }
    v76[0] = v24;
    v76[1] = v27;
    LOWORD(v73) = 1;
    v28 = CoreUICallSend(v23, v76, 2LL, 6LL);
    if ( (int)(v28 + 0x80000000) >= 0 && v28 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x786,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v28,
        v73);
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v29 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 6);
    if ( v29 )
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v29,
        *(struct Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a3 + 5) + 16LL));
    if ( *((_BYTE *)a3 + 32)
      && (v30 = *((_QWORD *)a3 + 5), v31 = *(_QWORD *)(v30 + 24), v32 = *(_QWORD *)(v31 + 32), *(_QWORD *)(v32 + 64)) )
    {
      if ( *(_BYTE *)(v30 + 48) )
      {
        v61 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v31 + 32));
        v33 = (char *)v61 + 16;
        if ( !v61 )
          v33 = 0LL;
        v30 = *((_QWORD *)a3 + 5);
      }
      else
      {
        v33 = *(char **)(v32 + 72);
      }
      v34 = *(_DWORD *)(v30 + 36);
      v35 = *((_QWORD *)a3 + 3);
      v36 = (unsigned int *)(v35 + 24);
      if ( !*(_DWORD *)(v35 + 24) && *(int *)(v35 + 8) > 0 )
      {
        v62 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 32LL);
        v63 = *(_QWORD *)(v62 + 64);
        if ( v63 )
        {
          v64 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v63 + 24LL))(
                  v63,
                  *(unsigned int *)(v62 + 28),
                  v35,
                  v35 + 24);
          if ( v64 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3FF,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v64,
              v73);
        }
      }
      v37 = *v36;
      _InterlockedIncrement((volatile signed __int32 *)a3 + 4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v73);
      v37 = (unsigned int)v80;
      v34 = (unsigned int)v80;
      v33 = v80;
    }
    v77[0] = v34;
    v77[1] = v37;
    LOWORD(v73) = 2;
    v38 = CoreUICallSend(v33, v77, 2LL, 6LL);
    if ( (int)(v38 + 0x80000000) >= 0 && v38 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x7BB,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v38,
        v73);
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v39 = (struct Microsoft::Bamo::BamoPrincipal *)*((_QWORD *)this + 7);
    if ( v39 )
      Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        v39,
        *(struct Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a3 + 5) + 16LL));
    if ( *((_BYTE *)a3 + 32)
      && (v40 = *((_QWORD *)a3 + 5), v41 = *(_QWORD *)(v40 + 24), v42 = *(_QWORD *)(v41 + 32), *(_QWORD *)(v42 + 64)) )
    {
      if ( *(_BYTE *)(v40 + 48) )
      {
        v65 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v41 + 32));
        v43 = (char *)v65 + 16;
        if ( !v65 )
          v43 = 0LL;
        v40 = *((_QWORD *)a3 + 5);
      }
      else
      {
        v43 = *(char **)(v42 + 72);
      }
      v44 = *(_DWORD *)(v40 + 36);
      v45 = *((_QWORD *)a3 + 3);
      v46 = (unsigned int *)(v45 + 24);
      if ( !*(_DWORD *)(v45 + 24) && *(int *)(v45 + 8) > 0 )
      {
        v66 = *(_QWORD *)(*(_QWORD *)(v45 + 16) + 32LL);
        v67 = *(_QWORD *)(v66 + 64);
        if ( v67 )
        {
          v68 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v67 + 24LL))(
                  v67,
                  *(unsigned int *)(v66 + 28),
                  v45,
                  v45 + 24);
          if ( v68 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3FF,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v68,
              v73);
        }
      }
      v47 = *v46;
      _InterlockedIncrement((volatile signed __int32 *)a3 + 4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x144,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v73);
      v47 = (unsigned int)v80;
      v44 = (unsigned int)v80;
      v43 = v80;
    }
    v74 = v44;
    v75 = v47;
    LOWORD(v73) = 3;
    v48 = CoreUICallSend(v43, &v74, 2LL, 6LL);
    if ( (int)(v48 + 0x80000000) >= 0 && v48 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x7F0,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v48,
        v73);
  }
  v49 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v49 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6E6,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v49,
      v73);
  v50 = v81;
  if ( *(_BYTE *)(*((_QWORD *)a3 + 5) + 48LL) )
  {
    v69 = (__int64)v81 + 56;
    if ( !v81 )
      v69 = 72LL;
    *(_BYTE *)v69 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v70 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v71 = *(_QWORD *)(v70 + 64);
    if ( v71 )
    {
      v72 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoActivationWatcherPrincipalImpl *, char *))(*(_QWORD *)v71 + 24LL))(
              v71,
              *(unsigned int *)(v70 + 28),
              this,
              (char *)this + 24);
      if ( v72 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3FF,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v72,
          v73);
    }
  }
  v78[0] = *(unsigned int *)(v6 + 36);
  v78[1] = *(unsigned int *)(v6 + 40);
  LOWORD(v73) = 76;
  v51 = CoreUICallSend(v50, v78, 2LL, 0LL);
  if ( v51 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6FC,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v51,
      v73);
}
