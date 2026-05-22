/*
 * XREFs of ?SendMaterializeProxy@BamoDataSourcePrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180120970
 * Callers:
 *     <none>
 * Callees:
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x1800080E0 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateRestrictToProcessIdsRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18012269C (-UpdateRestrictToProcessIdsRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 *     ?UpdateUniqueIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801227A0 (-UpdateUniqueIdRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsof.c)
 */

void __fastcall BamoImpl::BamoDataSourcePrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoDataSourcePrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 4);
  v4 = (__int64)a2 + 56;
  if ( *(_BYTE *)(v3 + 48) )
  {
    v8 = (__int64)a2 + 56;
    if ( !a2 )
      v8 = 72LL;
    *(_BYTE *)v8 = 1;
  }
  Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v13 = *(unsigned int *)(v3 + 36);
  v14 = *(unsigned int *)(v3 + 40);
  LOWORD(v12) = 3;
  v9 = CoreUICallSend(a2, &v13, 2LL, 7LL);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x31D2,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v9,
      v12);
  BamoImpl::BamoDataSourcePrincipalImpl::UpdateUniqueIdRemoteCache(this, a3);
  BamoImpl::BamoDataSourcePrincipalImpl::UpdateRestrictToProcessIdsRemoteCache(this, a3);
  v10 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x31E1,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v10,
      v12);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 4) + 48LL) )
  {
    if ( !a2 )
      v4 = 72LL;
    *(_BYTE *)v4 = 1;
  }
  Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v13 = *(unsigned int *)(v3 + 36);
  v14 = *(unsigned int *)(v3 + 40);
  LOWORD(v12) = 5;
  v11 = CoreUICallSend(a2, &v13, 2LL, 7LL);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x31F7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v11,
      v12);
}
