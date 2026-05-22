/*
 * XREFs of ?UpdateInputSpace@BamoInputSpacePayloadProxyImpl@BamoImpl@@QEAAJ_NPEBUINPUT_SPACE@@@Z @ 0x1801461C8
 * Callers:
 *     ?Thunk_UpdateInputSpace_268@?$IInputSpacePayloadProxy_Receive@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180070230 (-Thunk_UpdateInputSpace_268@-$IInputSpacePayloadProxy_Receive@VBamoInputSpacePayloadProxyImpl@Ba.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801481F0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSpacePayloadProxyImpl@BamoImpl@@UEAAXPEAVBa.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSpacePayloadProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18012D7E4 (--0-$CalloutWrapper@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@_ea_18012D7E4.c)
 *     ??1?$CalloutWrapper@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012F0A4 (--1-$CalloutWrapper@VBamoInputSpacePayloadProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputSpacePayloadProxyImpl::UpdateInputSpace(
        BamoImpl::BamoInputSpacePayloadProxyImpl *this,
        __int64 a2,
        const struct INPUT_SPACE *a3)
{
  char v4; // bp
  char *v6; // r14
  int v7; // eax
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v6 = (char *)this - 16;
    v7 = (*(__int64 (__fastcall **)(char *, const struct INPUT_SPACE *))(*((_QWORD *)this - 2) + 104LL))(
           (char *)this - 16,
           a3);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xCA03,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>((__int64)v10);
  }
  else
  {
    v6 = (char *)this - 16;
  }
  *((_QWORD *)this + 4) = *(_QWORD *)a3;
  *((_DWORD *)this + 10) = *((_DWORD *)a3 + 2);
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>::CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v6 + 112LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xCA0F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSpacePayloadProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, (__int64)a3);
  return 0LL;
}
