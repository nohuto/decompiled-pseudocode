/*
 * XREFs of ?UpdateComponentViewId@BamoComponentSiteInputObjectProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1801198C8
 * Callers:
 *     ?Thunk_UpdateComponentViewId_8@?$IComponentSiteInputObjectProxy_Receive@VBamoComponentSiteInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180118670 (-Thunk_UpdateComponentViewId_8@-$IComponentSiteInputObjectProxy_Receive@VBamoComponentSiteInputO.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoComponentSiteInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18011E7B0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoComponentSiteInputObjectProxyImpl@BamoImpl@@UEAA.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoComponentSiteInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoComponentSiteInputObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1801025C0 (--0-$CalloutWrapper@VBamoComponentSiteInputObjectProxyImpl@BamoImpl@@@BamoImpl@Micr_ea_1801025C0.c)
 *     ??1?$CalloutWrapper@VBamoComponentSiteInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180104C30 (--1-$CalloutWrapper@VBamoComponentSiteInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@X.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoComponentSiteInputObjectProxyImpl::UpdateComponentViewId(
        BamoImpl::BamoComponentSiteInputObjectProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // edi
  char v4; // si
  char v6; // al
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v6 = *((_BYTE *)this + 28);
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoComponentSiteInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoComponentSiteInputObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 104LL))((char *)this - 16, v3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1920,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoComponentSiteInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoComponentSiteInputObjectProxyImpl>((__int64)v10);
    v6 = *((_BYTE *)this + 28);
  }
  *((_DWORD *)this + 8) = v3;
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoComponentSiteInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoComponentSiteInputObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x192C,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoComponentSiteInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoComponentSiteInputObjectProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
