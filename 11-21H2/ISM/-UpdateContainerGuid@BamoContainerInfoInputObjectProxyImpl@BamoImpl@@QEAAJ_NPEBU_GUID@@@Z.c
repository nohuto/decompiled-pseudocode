/*
 * XREFs of ?UpdateContainerGuid@BamoContainerInfoInputObjectProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x1801199F8
 * Callers:
 *     ?Thunk_UpdateContainerGuid_42@?$IContainerInfoInputObjectProxy_Receive@VBamoContainerInfoInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180118690 (-Thunk_UpdateContainerGuid_42@-$IContainerInfoInputObjectProxy_Receive@VBamoContainerInfoInputOb.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoContainerInfoInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18011E7D0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoContainerInfoInputObjectProxyImpl@BamoImpl@@UEAA.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoContainerInfoInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoContainerInfoInputObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1801027A4 (--0-$CalloutWrapper@VBamoContainerInfoInputObjectProxyImpl@BamoImpl@@@BamoImpl@Micr_ea_1801027A4.c)
 *     ??1?$CalloutWrapper@VBamoContainerInfoInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180104D28 (--1-$CalloutWrapper@VBamoContainerInfoInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@X.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoContainerInfoInputObjectProxyImpl::UpdateContainerGuid(
        BamoImpl::BamoContainerInfoInputObjectProxyImpl *this,
        __int64 a2,
        const struct _GUID *a3)
{
  char v4; // si
  char v6; // al
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  v6 = *((_BYTE *)this + 28);
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoContainerInfoInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoContainerInfoInputObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v7 = (*(__int64 (__fastcall **)(char *, const struct _GUID *))(*((_QWORD *)this - 2) + 104LL))(
           (char *)this - 16,
           a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1BC7,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoContainerInfoInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoContainerInfoInputObjectProxyImpl>((__int64)v10);
    v6 = *((_BYTE *)this + 28);
  }
  *((struct _GUID *)this + 2) = *a3;
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoContainerInfoInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoContainerInfoInputObjectProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1BD3,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoContainerInfoInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoContainerInfoInputObjectProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, (__int64)a3);
  return 0LL;
}
