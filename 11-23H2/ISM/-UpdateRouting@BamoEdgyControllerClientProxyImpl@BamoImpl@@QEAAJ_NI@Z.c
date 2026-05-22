/*
 * XREFs of ?UpdateRouting@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x18016B5D8
 * Callers:
 *     ?Thunk_UpdateRouting_8@?$IEdgyControllerClientProxy_Receive@VBamoEdgyControllerClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016B2C0 (-Thunk_UpdateRouting_8@-$IEdgyControllerClientProxy_Receive@VBamoEdgyControllerClientProxyImpl@B.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyControllerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18016B880 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyControllerClientProxyImpl@BamoImpl@@UEAAXPEA.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoEdgyControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoEdgyControllerClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18016A658 (--0-$CalloutWrapper@VBamoEdgyControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsof_ea_18016A658.c)
 *     ??1?$CalloutWrapper@VBamoEdgyControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18016A838 (--1-$CalloutWrapper@VBamoEdgyControllerClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall BamoImpl::BamoEdgyControllerClientProxyImpl::UpdateRouting(
        BamoImpl::BamoEdgyControllerClientProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // ebp
  char v4; // r14
  char *v6; // rsi
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v6 = (char *)this - 16;
    v7 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this - 2) + 168LL))((char *)this - 16, v3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x77DD,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>((__int64)v10);
  }
  else
  {
    v6 = (char *)this - 16;
  }
  *((_DWORD *)this + 15) = v3;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>::CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v6 + 176LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x77E9,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoEdgyControllerClientProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
  return 0LL;
}
