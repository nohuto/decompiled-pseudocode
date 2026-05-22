/*
 * XREFs of ?UpdateType@BamoWindowsMessageDeliveryProxyImpl@BamoImpl@@QEAAJ_NW4WindowsMessageDeliveryType@Input@Internal@UI@Windows@@@Z @ 0x18001179C
 * Callers:
 *     ?Thunk_UpdateType_16@?$IWindowsMessageDeliveryProxy_Receive@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180011F40 (-Thunk_UpdateType_16@-$IWindowsMessageDeliveryProxy_Receive@VBamoWindowsMessageDeliveryProxyImpl.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoWindowsMessageDeliveryProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012CAA0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoWindowsMessageDeliveryProxyImpl@BamoImpl@@UEAAXP.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CalloutWrapper@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoWindowsMessageDeliveryProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18012C814 (--0-$CalloutWrapper@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@BamoImpl@Micros_ea_18012C814.c)
 *     ??1?$CalloutWrapper@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18012C8E4 (--1-$CalloutWrapper@VBamoWindowsMessageDeliveryProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoWindowsMessageDeliveryProxyImpl::UpdateType(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // edi
  char v6; // al
  int v8; // eax
  int v9; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v6 = *(_BYTE *)(a1 + 28);
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>(
      v10,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL),
      a1,
      1LL);
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 - 16) + 120LL))(a1 - 16, v3);
    if ( v8 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5614,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)(unsigned int)v8,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>::~CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>(v10);
    v6 = *(_BYTE *)(a1 + 28);
  }
  *(_DWORD *)(a1 + 40) = v3;
  if ( v6 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>(
      v10,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL),
      a1,
      2LL);
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 128LL))(a1 - 16);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5620,
        (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)(unsigned int)v9,
        v10[0]);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>::~CalloutWrapper<BamoImpl::BamoWindowsMessageDeliveryProxyImpl>(v10);
  }
  if ( a2 && !*(_BYTE *)(a1 + 29) )
  {
    LOBYTE(a3) = *(_DWORD *)(a1 + 8) > 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 64LL))(
      *(_QWORD *)(a1 + 16),
      *(unsigned int *)(a1 + 24),
      a3);
  }
  return 0LL;
}
