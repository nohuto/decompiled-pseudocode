/*
 * XREFs of ?UpdateHwnd@BamoWindowsMessageDeliveryProxyImpl@BamoImpl@@QEAAJ_N_K@Z @ 0x180019E64
 * Callers:
 *     ?Thunk_UpdateHwnd_0@?$IWindowsMessageDeliveryProxy_Receive@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001AD30 (-Thunk_UpdateHwnd_0@-$IWindowsMessageDeliveryProxy_Receive@VBamoWindowsMessageDeliveryProxyImpl@.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoWindowsMessageDeliveryProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180147200 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoWindowsMessageDeliveryProxyImpl@BamoImpl@@UEAAXP.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoWindowsMessageDeliveryProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180146F7C (--0-$CalloutWrapper@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@BamoImpl@Micros_ea_180146F7C.c)
 *     ??1?$CalloutWrapper@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18014704C (--1-$CalloutWrapper@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoWindowsMessageDeliveryProxyImpl::UpdateHwnd(
        BamoImpl::BamoWindowsMessageDeliveryProxyImpl *this,
        char a2,
        __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v6; // rdi
  char *v7; // rsi
  int v9; // eax
  int v10; // eax
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v6 = (_QWORD *)((char *)this + 16);
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>(
      v11,
      *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL),
      this,
      1LL);
    v7 = (char *)this - 16;
    v9 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 104LL))((char *)this - 16, v3);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x628B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)(unsigned int)v9,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>::~CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>(v11);
  }
  else
  {
    v7 = (char *)this - 16;
  }
  *((_QWORD *)this + 4) = v3;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>(
      v11,
      *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL),
      this,
      2LL);
    v10 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v7 + 112LL))(v7);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6297,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)(unsigned int)v10,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>::~CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>(v11);
  }
  if ( a2 && !*((_BYTE *)this + 29) )
  {
    LOBYTE(a3) = *((_DWORD *)this + 2) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 64LL))(*v6, *((unsigned int *)this + 6), a3);
  }
  return 0LL;
}
