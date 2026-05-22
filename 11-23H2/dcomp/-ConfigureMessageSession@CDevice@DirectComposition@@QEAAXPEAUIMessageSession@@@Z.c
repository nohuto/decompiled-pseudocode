/*
 * XREFs of ?ConfigureMessageSession@CDevice@DirectComposition@@QEAAXPEAUIMessageSession@@@Z @ 0x18001E0E0
 * Callers:
 *     ?RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@System@4@PEAUIUnknown@@PEAVCompositorController@Core@234@W4CreationFlags@1234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001D170 (-RuntimeClassInitialize@CompositorCommon@Composition@UI@Windows@@IEAAJPEAUIDispatcherQueue@Syste.c)
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall DirectComposition::CDevice::ConfigureMessageSession(
        DirectComposition::CDevice *this,
        struct IMessageSession *a2)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (char *)this + 96;
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 96));
  if ( *((_QWORD *)this + 82) || !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1616,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
      v4);
  (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 82) = a2;
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v6);
}
