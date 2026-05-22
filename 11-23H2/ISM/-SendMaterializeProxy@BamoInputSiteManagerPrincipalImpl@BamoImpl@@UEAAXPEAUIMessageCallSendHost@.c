/*
 * XREFs of ?SendMaterializeProxy@BamoInputSiteManagerPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180004790
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoInputSiteManagerPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoInputSiteManagerPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rbp
  _DWORD *v7; // rsi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  __int64 v21; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 4);
  if ( *(_BYTE *)(v3 + 48) )
  {
    v14 = (__int64)a2 + 56;
    if ( !a2 )
      v14 = 72LL;
    *(_BYTE *)v14 = 1;
  }
  v7 = (_DWORD *)((char *)this + 24);
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v12 = *(_QWORD *)(v11 + 64);
    if ( v12 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoInputSiteManagerPrincipalImpl *, _DWORD *))(*(_QWORD *)v12 + 24LL))(
              v12,
              *(unsigned int *)(v11 + 28),
              this,
              v7);
      if ( v13 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x423,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v13,
          v19);
    }
  }
  v20 = *(unsigned int *)(v3 + 36);
  v21 = *(unsigned int *)(v3 + 40);
  LOWORD(v19) = 44;
  v8 = CoreUICallSend(a2, &v20, 2LL, 0LL);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5E54,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      (const char *)(unsigned int)v8,
      v19);
  v9 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5E63,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      (const char *)(unsigned int)v9,
      v19);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 4) + 48LL) )
  {
    v15 = (__int64)a2 + 56;
    if ( !a2 )
      v15 = 72LL;
    *(_BYTE *)v15 = 1;
  }
  if ( !*v7 && *((int *)this + 2) > 0 )
  {
    v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v17 = *(_QWORD *)(v16 + 64);
    if ( v17 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, BamoImpl::BamoInputSiteManagerPrincipalImpl *, _DWORD *))(*(_QWORD *)v17 + 24LL))(
              v17,
              *(unsigned int *)(v16 + 28),
              this,
              v7);
      if ( v18 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x423,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v18,
          v19);
    }
  }
  v20 = *(unsigned int *)(v3 + 36);
  v21 = *(unsigned int *)(v3 + 40);
  LOWORD(v19) = 80;
  v10 = CoreUICallSend(a2, &v20, 2LL, 0LL);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5E79,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      (const char *)(unsigned int)v10,
      v19);
}
