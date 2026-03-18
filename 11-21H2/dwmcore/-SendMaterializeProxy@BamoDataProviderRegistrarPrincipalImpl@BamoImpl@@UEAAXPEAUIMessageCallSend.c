/*
 * XREFs of ?SendMaterializeProxy@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800F15D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x1800F17F8 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180195110 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rsi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-58h]
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+40h] [rbp-38h] BYREF
  __int64 v15; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 5);
  if ( *(_BYTE *)(v3 + 48) )
  {
    v10 = (__int64)a2 + 56;
    if ( !a2 )
      v10 = 72LL;
    *(_BYTE *)v10 = 1;
  }
  Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v14 = *(unsigned int *)(v3 + 36);
  v15 = *(unsigned int *)(v3 + 40);
  v7 = CoreUICallSend(a2, &v14, 2LL, 6LL, 2, &unk_1803434A5);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x24FC,
      (unsigned int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v7,
      v12);
  v8 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x250B,
      (unsigned int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v8,
      v12);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 5) + 48LL) )
  {
    v11 = (__int64)a2 + 56;
    if ( !a2 )
      v11 = 72LL;
    *(_BYTE *)v11 = 1;
  }
  Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v14 = *(unsigned int *)(v3 + 36);
  v15 = *(unsigned int *)(v3 + 40);
  v9 = CoreUICallSend(a2, &v14, 2LL, 6LL, 4, &unk_1803434A5);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2521,
      (unsigned int)"onecoreuap\\Windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v9,
      v13);
}
