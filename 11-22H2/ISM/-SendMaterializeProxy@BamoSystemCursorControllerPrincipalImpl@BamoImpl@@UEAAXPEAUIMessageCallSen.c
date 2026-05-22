/*
 * XREFs of ?SendMaterializeProxy@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800053D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1800B1F20 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x1800B4298 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

void __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // r15
  char *v4; // rbp
  _DWORD *v8; // r14
  int v9; // eax
  __int64 v10; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // rcx
  __int64 v12; // r8
  unsigned int *v13; // r12
  __int64 v14; // r13
  __int64 v15; // rdx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  int v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+40h] [rbp-38h] BYREF
  __int64 v33; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 4);
  v4 = 0LL;
  if ( *(_BYTE *)(v3 + 48) )
  {
    v22 = (__int64)a2 + 56;
    if ( !a2 )
      v22 = 72LL;
    *(_BYTE *)v22 = 1;
  }
  v8 = (_DWORD *)((char *)this + 24);
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v19 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v20 = *(_QWORD *)(v19 + 64);
    if ( v20 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoSystemCursorControllerPrincipalImpl *, _DWORD *))(*(_QWORD *)v20 + 24LL))(
              v20,
              *(unsigned int *)(v19 + 28),
              this,
              v8);
      if ( v21 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x423,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v21,
          v31);
    }
  }
  v32 = *(unsigned int *)(v3 + 36);
  v33 = *(unsigned int *)(v3 + 40);
  LOWORD(v31) = 67;
  v9 = CoreUICallSend(a2, &v32, 2LL, 0LL);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x203E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v31);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v10 = *((_QWORD *)a3 + 4);
    v11 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v10 + 24) + 32LL);
    if ( *((_BYTE *)a3 + 56) && *((_QWORD *)v11 + 8) )
    {
      if ( *(_BYTE *)(v10 + 48) )
      {
        v23 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v11);
        if ( v23 )
          v4 = (char *)v23 + 16;
      }
      else
      {
        v4 = (char *)*((_QWORD *)v11 + 9);
      }
      v12 = *((_QWORD *)a3 + 3);
      v13 = (unsigned int *)(v12 + 24);
      v14 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      if ( !*(_DWORD *)(v12 + 24) && *(int *)(v12 + 8) > 0 )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 32LL);
        v25 = *(_QWORD *)(v24 + 64);
        if ( v25 )
        {
          v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v25 + 24LL))(
                  v25,
                  *(unsigned int *)(v24 + 28),
                  v12,
                  v12 + 24);
          if ( v26 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x423,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v26,
              v31);
        }
      }
      v15 = *v13;
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v33 = v15;
      v32 = v14;
      LOWORD(v31) = 0;
      v16 = CoreUICallSend(v4, &v32, 2LL, 89LL);
      if ( (int)(v16 + 0x80000000) >= 0 && v16 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x20C5,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)v16,
          v31);
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
        v31);
    }
  }
  v17 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v17 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x204D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v17,
      v31);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 4) + 48LL) )
  {
    v27 = (__int64)a2 + 56;
    if ( !a2 )
      v27 = 72LL;
    *(_BYTE *)v27 = 1;
  }
  if ( !*v8 && *((int *)this + 2) > 0 )
  {
    v28 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v29 = *(_QWORD *)(v28 + 64);
    if ( v29 )
    {
      v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoSystemCursorControllerPrincipalImpl *, _DWORD *))(*(_QWORD *)v29 + 24LL))(
              v29,
              *(unsigned int *)(v28 + 28),
              this,
              v8);
      if ( v30 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x423,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v30,
          v31);
    }
  }
  v32 = *(unsigned int *)(v3 + 36);
  v33 = *(unsigned int *)(v3 + 40);
  LOWORD(v31) = 80;
  v18 = CoreUICallSend(a2, &v32, 2LL, 0LL);
  if ( v18 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2063,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v18,
      v31);
}
