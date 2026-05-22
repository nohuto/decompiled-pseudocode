/*
 * XREFs of ?UpdateScaleOverride@BamoSystemCursorControllerProxyImpl@BamoImpl@@QEAAJ_NM@Z @ 0x180147C80
 * Callers:
 *     ?Thunk_UpdateScaleOverride_184@?$ISystemCursorControllerProxy_Receive@VBamoSystemCursorControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180142210 (-Thunk_UpdateScaleOverride_184@-$ISystemCursorControllerProxy_Receive@VBamoSystemCursorControlle.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSystemCursorControllerProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801485C0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSystemCursorControllerProxyImpl@BamoImpl@@UEAAXP.c)
 * Callees:
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180025994 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoSystemCursorControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoSystemCursorControllerProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18012E2B8 (--0-$CalloutWrapper@VBamoSystemCursorControllerProxyImpl@BamoImpl@@@BamoImpl@Micros_ea_18012E2B8.c)
 *     ??1?$CalloutWrapper@VBamoSystemCursorControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012F5F8 (--1-$CalloutWrapper@VBamoSystemCursorControllerProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSystemCursorControllerProxyImpl::UpdateScaleOverride(
        BamoImpl::BamoSystemCursorControllerProxyImpl *this,
        __int64 a2,
        float a3)
{
  __int64 v3; // r8
  char v4; // bp
  char *v6; // rsi
  int v7; // eax
  int v8; // eax
  int v10[8]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = a2;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v6 = (char *)this - 16;
    v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 104LL))((char *)this - 16);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2318,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v7,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>((__int64)v10);
  }
  else
  {
    v6 = (char *)this - 16;
  }
  *((float *)this + 8) = a3;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>::CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>(
      (__int64)v10,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v8 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v6 + 112LL))(v6);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2324,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>::~CalloutWrapper<BamoImpl::BamoSystemCursorControllerProxyImpl>((__int64)v10);
  }
  if ( v4 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, v3);
  return 0LL;
}
