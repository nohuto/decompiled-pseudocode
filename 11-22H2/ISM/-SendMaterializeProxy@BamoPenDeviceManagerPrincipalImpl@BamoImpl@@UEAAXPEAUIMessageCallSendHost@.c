/*
 * XREFs of ?SendMaterializeProxy@BamoPenDeviceManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180006820
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1800B4298 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoPenDeviceManagerPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoPenDeviceManagerPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  struct IMessageCallSendHost *v4; // r12
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // r12
  void (__fastcall *v16)(_QWORD *, __int64, __int64); // r14
  __int64 v17; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v22; // rcx
  char *v23; // rsi
  __int64 v24; // r14
  __int64 v25; // r8
  unsigned int *v26; // rbx
  __int64 v27; // rdx
  unsigned int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v35; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  int v44; // [rsp+20h] [rbp-68h]
  __int64 v45; // [rsp+40h] [rbp-48h] BYREF
  __int64 v46; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v48; // [rsp+90h] [rbp+8h] BYREF
  struct IMessageCallSendHost *v49; // [rsp+98h] [rbp+10h]

  v49 = a2;
  v4 = a2;
  v6 = *((_QWORD *)a3 + 4);
  if ( *(_BYTE *)(v6 + 48) )
  {
    v34 = (__int64)a2 + 56;
    if ( !a2 )
      v34 = 72LL;
    *(_BYTE *)v34 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v31 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v32 = *(_QWORD *)(v31 + 64);
    if ( v32 )
    {
      v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoPenDeviceManagerPrincipalImpl *, char *))(*(_QWORD *)v32 + 24LL))(
              v32,
              *(unsigned int *)(v31 + 28),
              this,
              (char *)this + 24);
      if ( v33 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x423,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v33,
          v44);
    }
  }
  v45 = *(unsigned int *)(v6 + 36);
  v46 = *(unsigned int *)(v6 + 40);
  LOWORD(v44) = 54;
  v7 = CoreUICallSend(v4, &v45, 2LL, 0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF14B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v44);
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
          v44);
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
        v14 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *))(*v10 + 72LL))(v10, v11, &v48);
        if ( v14 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x29F,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPrincipal.inl",
            (const char *)(unsigned int)v14,
            v44);
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 32LL))(v48);
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
          v35 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v18);
          v19 = v35 ? (__int64)v35 + 16 : 0LL;
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
            v44);
      }
      ++*(_DWORD *)(v13 + 16);
      *(_BYTE *)(v13 + 60) = 1;
    }
    v21 = *((_QWORD *)a3 + 4);
    v22 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v21 + 24) + 32LL);
    if ( *((_BYTE *)a3 + 56) && *((_QWORD *)v22 + 8) )
    {
      if ( *(_BYTE *)(v21 + 48) )
      {
        v36 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v22);
        if ( v36 )
          v23 = (char *)v36 + 16;
        else
          v23 = 0LL;
      }
      else
      {
        v23 = (char *)*((_QWORD *)v22 + 9);
      }
      v24 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      v25 = *((_QWORD *)a3 + 3);
      v26 = (unsigned int *)(v25 + 24);
      if ( !*(_DWORD *)(v25 + 24) && *(int *)(v25 + 8) > 0 )
      {
        v37 = *(_QWORD *)(*(_QWORD *)(v25 + 16) + 32LL);
        v38 = *(_QWORD *)(v37 + 64);
        if ( v38 )
        {
          v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v38 + 24LL))(
                  v38,
                  *(unsigned int *)(v37 + 28),
                  v25,
                  v25 + 24);
          if ( v39 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x423,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v39,
              v44);
        }
      }
      v27 = *v26;
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v45 = v24;
      v46 = v27;
      LOWORD(v44) = 0;
      v28 = CoreUICallSend(v23, &v45, 2LL, 71LL);
      if ( (int)(v28 + 0x80000000) >= 0 && v28 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xF1D4,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v28,
          v44);
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
        v44);
    }
    v4 = v49;
  }
  v29 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v29 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF15A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v29,
      v44);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 4) + 48LL) )
  {
    v40 = (__int64)v4 + 56;
    if ( !v4 )
      v40 = 72LL;
    *(_BYTE *)v40 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v41 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v42 = *(_QWORD *)(v41 + 64);
    if ( v42 )
    {
      v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoPenDeviceManagerPrincipalImpl *, char *))(*(_QWORD *)v42 + 24LL))(
              v42,
              *(unsigned int *)(v41 + 28),
              this,
              (char *)this + 24);
      if ( v43 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x423,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v43,
          v44);
    }
  }
  v45 = *(unsigned int *)(v6 + 36);
  v46 = *(unsigned int *)(v6 + 40);
  LOWORD(v44) = 80;
  v30 = CoreUICallSend(v4, &v45, 2LL, 0LL);
  if ( v30 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xF170,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v30,
      v44);
}
