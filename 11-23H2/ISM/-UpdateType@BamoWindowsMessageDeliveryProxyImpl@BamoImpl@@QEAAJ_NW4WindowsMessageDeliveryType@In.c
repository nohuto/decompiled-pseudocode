/*
 * XREFs of ?UpdateType@BamoWindowsMessageDeliveryProxyImpl@BamoImpl@@QEAAJ_NW4WindowsMessageDeliveryType@Input@Internal@UI@Windows@@@Z @ 0x180019DCC
 * Callers:
 *     ?Thunk_UpdateType_16@?$IWindowsMessageDeliveryProxy_Receive@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001AD10 (-Thunk_UpdateType_16@-$IWindowsMessageDeliveryProxy_Receive@VBamoWindowsMessageDeliveryProxyImpl.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoWindowsMessageDeliveryProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180147200 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoWindowsMessageDeliveryProxyImpl@BamoImpl@@UEAAXP.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoWindowsMessageDeliveryProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180146F7C (--0-$CalloutWrapper@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@BamoImpl@Micros_ea_180146F7C.c)
 *     ??1?$CalloutWrapper@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18014704C (--1-$CalloutWrapper@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoWindowsMessageDeliveryProxyImpl::UpdateType(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // ebp
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  int v9; // eax
  int v10; // eax
  int v11[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v6 = (_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(a1 + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>(
      v11,
      *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL),
      a1,
      1LL);
    v7 = a1 - 16;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 16) + 120LL))(a1 - 16, v3);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x62B4,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)(unsigned int)v9,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>::~CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>(v11);
  }
  else
  {
    v7 = a1 - 16;
  }
  *(_DWORD *)(a1 + 40) = v3;
  if ( *(_BYTE *)(a1 + 28) )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>(
      v11,
      *(_QWORD *)(*(_QWORD *)(*v6 + 24LL) + 32LL),
      a1,
      2LL);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 128LL))(v7);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x62C0,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)(unsigned int)v10,
        v11[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>::~CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>(v11);
  }
  if ( a2 && !*(_BYTE *)(a1 + 29) )
  {
    LOBYTE(a3) = *(_DWORD *)(a1 + 8) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 64LL))(*v6, *(unsigned int *)(a1 + 24), a3);
  }
  return 0LL;
}
