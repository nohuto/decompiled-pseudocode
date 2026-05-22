/*
 * XREFs of ?UpdateData@BamoAnimationTargetClientProxyImpl@BamoImpl@@QEAAJ_NPEBUGestureAnimationData@Input@Internal@UI@Windows@@@Z @ 0x180054240
 * Callers:
 *     ?Thunk_UpdateData_28@?$IAnimationTargetClientProxy_Receive@VBamoAnimationTargetClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180055020 (-Thunk_UpdateData_28@-$IAnimationTargetClientProxy_Receive@VBamoAnimationTargetClientProxyImpl@B.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoAnimationTargetClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180155E80 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoAnimationTargetClientProxyImpl@BamoImpl@@UEAAXPE.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180024FB4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoAnimationTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoAnimationTargetClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x1800500C8 (--0-$CalloutWrapper@VBamoAnimationTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microso_ea_1800500C8.c)
 *     ??1?$CalloutWrapper@VBamoAnimationTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180050174 (--1-$CalloutWrapper@VBamoAnimationTargetClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoAnimationTargetClientProxyImpl::UpdateData(
        BamoImpl::BamoAnimationTargetClientProxyImpl *this,
        __int64 a2,
        const struct Windows::UI::Internal::Input::GestureAnimationData *a3)
{
  char v4; // r14
  char *v6; // rsi
  int v8; // eax
  int v9; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoAnimationTargetClientProxyImpl>::CalloutWrapper<BamoImpl::BamoAnimationTargetClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v6 = (char *)this - 16;
    v8 = (*(__int64 (__fastcall **)(char *, const struct Windows::UI::Internal::Input::GestureAnimationData *))(*((_QWORD *)this - 2) + 120LL))(
           (char *)this - 16,
           a3);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3292,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoAnimationTargetClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoAnimationTargetClientProxyImpl>((__int64)v10);
  }
  else
  {
    v6 = (char *)this - 16;
  }
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a3;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoAnimationTargetClientProxyImpl>::CalloutWrapper<BamoImpl::BamoAnimationTargetClientProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v9 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v6 + 128LL))(v6);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x329E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v9,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoAnimationTargetClientProxyImpl>::~CalloutWrapper<BamoImpl::BamoAnimationTargetClientProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, (__int64)a3);
  return 0LL;
}
