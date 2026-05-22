/*
 * XREFs of ?UpdateUniqueId@BamoPenDeviceProxyImpl@BamoImpl@@QEAAJ_NPEBU_GUID@@@Z @ 0x1801203DC
 * Callers:
 *     ?Thunk_UpdateUniqueId_42@?$IPenDeviceProxy_Receive@VBamoPenDeviceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180118F10 (-Thunk_UpdateUniqueId_42@-$IPenDeviceProxy_Receive@VBamoPenDeviceProxyImpl@BamoImpl@@@@SAJPEAXPE.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoPenDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18011EDD0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoPenDeviceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyI.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoPenDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenDeviceProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180104040 (--0-$CalloutWrapper@VBamoPenDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEA_ea_180104040.c)
 *     ??1?$CalloutWrapper@VBamoPenDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180105944 (--1-$CalloutWrapper@VBamoPenDeviceProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoPenDeviceProxyImpl::UpdateUniqueId(
        BamoImpl::BamoPenDeviceProxyImpl *this,
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
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenDeviceProxyImpl>::CalloutWrapper<BamoImpl::BamoPenDeviceProxyImpl>(
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
        (void *)0xB6BB,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenDeviceProxyImpl>::~CalloutWrapper<BamoImpl::BamoPenDeviceProxyImpl>((__int64)v10);
    v6 = *((_BYTE *)this + 28);
  }
  *((struct _GUID *)this + 2) = *a3;
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenDeviceProxyImpl>::CalloutWrapper<BamoImpl::BamoPenDeviceProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB6C7,
        (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenDeviceProxyImpl>::~CalloutWrapper<BamoImpl::BamoPenDeviceProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, (__int64)a3);
  return 0LL;
}
