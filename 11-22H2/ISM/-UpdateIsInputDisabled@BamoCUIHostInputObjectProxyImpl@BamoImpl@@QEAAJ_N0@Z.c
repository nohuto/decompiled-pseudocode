/*
 * XREFs of ?UpdateIsInputDisabled@BamoCUIHostInputObjectProxyImpl@BamoImpl@@QEAAJ_N0@Z @ 0x18014F8E0
 * Callers:
 *     ?Thunk_UpdateIsInputDisabled_11@?$ICUIHostInputObjectProxy_Receive@VBamoCUIHostInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18014F650 (-Thunk_UpdateIsInputDisabled_11@-$ICUIHostInputObjectProxy_Receive@VBamoCUIHostInputObjectProxyI.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoCUIHostInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18014FA30 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoCUIHostInputObjectProxyImpl@BamoImpl@@UEAAXPEAVB.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoCUIHostInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoCUIHostInputObjectProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18014ECEC (--0-$CalloutWrapper@VBamoCUIHostInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@_ea_18014ECEC.c)
 *     ??1?$CalloutWrapper@VBamoCUIHostInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18014EDBC (--1-$CalloutWrapper@VBamoCUIHostInputObjectProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoCUIHostInputObjectProxyImpl::UpdateIsInputDisabled(
        BamoImpl::BamoCUIHostInputObjectProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // bp
  char v4; // r14
  char *v6; // rsi
  __int64 v7; // rdx
  int v8; // eax
  int v9; // eax
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCUIHostInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCUIHostInputObjectProxyImpl>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v6 = (char *)this - 16;
    LOBYTE(v7) = v3;
    v8 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 120LL))((char *)this - 16, v7);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x4056,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCUIHostInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoCUIHostInputObjectProxyImpl>((__int64)v11);
  }
  else
  {
    v6 = (char *)this - 16;
  }
  *((_BYTE *)this + 40) = v3;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCUIHostInputObjectProxyImpl>::CalloutWrapper<BamoImpl::BamoCUIHostInputObjectProxyImpl>(
      (__int64)v11,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v9 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v6 + 128LL))(v6);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x4062,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoCUIHostInputObjectProxyImpl>::~CalloutWrapper<BamoImpl::BamoCUIHostInputObjectProxyImpl>((__int64)v11);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
