/*
 * XREFs of ?UpdateUndockedEventsRequired@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x180048CD4
 * Callers:
 *     ?Thunk_UpdateUndockedEventsRequired_11@?$IPenEventsClientProxy_Receive@VBamoPenEventsClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800492A0 (-Thunk_UpdateUndockedEventsRequired_11@-$IPenEventsClientProxy_Receive@VBamoPenEventsClientProxy.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoPenEventsClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801923B0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoPenEventsClientProxyImpl@BamoImpl@@UEAAXPEAVBamo.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18001FC2C (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoPenEventsClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180046518 (--0-$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBa.c)
 *     ??1?$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465C4 (--1-$CalloutWrapper@VBamoPenEventsClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoPenEventsClientProxyImpl::UpdateUndockedEventsRequired(
        BamoImpl::BamoPenEventsClientProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // di
  char v4; // si
  char v6; // al
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  v6 = *((_BYTE *)this + 28);
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    LOBYTE(v8) = v3;
    v9 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 168LL))((char *)this - 16, v8);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC070,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>((__int64)v11);
    v6 = *((_BYTE *)this + 28);
  }
  *((_BYTE *)this + 36) = v3;
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 176LL))((char *)this - 16);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xC07C,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v10,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoPenEventsClientProxyImpl>((__int64)v11);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
