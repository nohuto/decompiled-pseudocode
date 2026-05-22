/*
 * XREFs of ?SendMaterializeProxy@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001C8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessageCallHost@23@XZ @ 0x18008AB08 (-GetBufferingMessageCallHost@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBufferingMessage.c)
 */

void __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rsi
  int v7; // eax
  __int64 v8; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // rcx
  char *v10; // r13
  __int64 v11; // r8
  unsigned int *v12; // r14
  unsigned int v13; // r12d
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  struct Microsoft::BamoImpl::BufferingMessageCallHost *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // [rsp+20h] [rbp-68h]
  __int64 v31; // [rsp+40h] [rbp-48h] BYREF
  __int64 v32; // [rsp+48h] [rbp-40h]
  _QWORD v33[7]; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char *v35; // [rsp+90h] [rbp+8h]

  v3 = *((_QWORD *)a3 + 5);
  if ( *(_BYTE *)(v3 + 48) )
  {
    v21 = (__int64)a2 + 56;
    if ( !a2 )
      v21 = 72LL;
    *(_BYTE *)v21 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v19 = *(_QWORD *)(v18 + 64);
    if ( v19 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoSystemCursorControllerPrincipalImpl *, char *))(*(_QWORD *)v19 + 24LL))(
              v19,
              *(unsigned int *)(v18 + 28),
              this,
              (char *)this + 24);
      if ( v20 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3FF,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v20,
          v30);
    }
  }
  v31 = *(unsigned int *)(v3 + 36);
  v32 = *(unsigned int *)(v3 + 40);
  LOWORD(v30) = 63;
  v7 = CoreUICallSend(a2, &v31, 2LL, 0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE057,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v30);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    if ( *((_BYTE *)a3 + 32)
      && (v8 = *((_QWORD *)a3 + 5),
          v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v8 + 24) + 32LL),
          *((_QWORD *)v9 + 8)) )
    {
      if ( *(_BYTE *)(v8 + 48) )
      {
        v22 = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetBufferingMessageCallHost(v9);
        v10 = (char *)v22 + 16;
        if ( !v22 )
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
        v23 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 32LL);
        v24 = *(_QWORD *)(v23 + 64);
        if ( v24 )
        {
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v24 + 24LL))(
                  v24,
                  *(unsigned int *)(v23 + 28),
                  v11,
                  v11 + 24);
          if ( v25 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x3FF,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v25,
              v30);
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
        v30);
      v14 = (unsigned int)v35;
      v13 = (unsigned int)v35;
      v10 = v35;
    }
    v31 = v13;
    v32 = v14;
    LOWORD(v30) = 0;
    v15 = CoreUICallSend(v10, &v31, 2LL, 85LL);
    if ( (int)(v15 + 0x80000000) >= 0 && v15 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE0DC,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)v15,
        v30);
  }
  v16 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v16 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE066,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v16,
      v30);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 5) + 48LL) )
  {
    v26 = (__int64)a2 + 56;
    if ( !a2 )
      v26 = 72LL;
    *(_BYTE *)v26 = 1;
  }
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v28 = *(_QWORD *)(v27 + 64);
    if ( v28 )
    {
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoSystemCursorControllerPrincipalImpl *, char *))(*(_QWORD *)v28 + 24LL))(
              v28,
              *(unsigned int *)(v27 + 28),
              this,
              (char *)this + 24);
      if ( v29 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3FF,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v29,
          v30);
    }
  }
  v33[0] = *(unsigned int *)(v3 + 36);
  v33[1] = *(unsigned int *)(v3 + 40);
  LOWORD(v30) = 76;
  v17 = CoreUICallSend(a2, v33, 2LL, 0LL);
  if ( v17 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE07C,
      (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v17,
      v30);
}
