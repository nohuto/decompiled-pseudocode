/*
 * XREFs of ?CreateWindowsMessageDeliveryProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoWindowsMessageDeliveryProxy@@@Z @ 0x18000B8BC
 * Callers:
 *     ?Thunk_Materialize_BamoWindowsMessageDeliveryProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18000B440 (-Thunk_Materialize_BamoWindowsMessageDeliveryProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBam.c)
 * Callees:
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CreateWindowsMessageDeliveryProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoWindowsMessageDeliveryProxy **a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rcx
  int v11[2]; // [rsp+20h] [rbp-58h] BYREF
  _DWORD *v12; // [rsp+28h] [rbp-50h]
  _BYTE v13[20]; // [rsp+30h] [rbp-48h] BYREF
  int v14; // [rsp+44h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = operator new(0x48uLL);
  v12 = v4;
  v4[6] = 0;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 2) = &BamoImpl::BamoWindowsMessageDeliveryProxyImpl::`vftable';
  *((_QWORD *)v4 + 6) = 0LL;
  v4[14] = 0;
  *(_QWORD *)v4 = &WindowsMessageDeliveryProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v4 + 1) = &WindowsMessageDeliveryProxy::`vftable'{for `IWindowsMessageDeliveryProxy'};
  v4[16] = 0;
  *(_QWORD *)v11 = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 32LL);
  if ( *(int *)(v5 + 8) <= 0 )
    v6 = 0LL;
  else
    v6 = *(_QWORD *)(v5 + 16);
  v7 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6) + 48);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 32LL))(v7, v11);
  v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)v11 + 24LL))(*(_QWORD *)v11, v13);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x14,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\windowsmessaged"
                    "elivery\\server\\windowsmessagedeliveryproxy.cpp",
      (const char *)(unsigned int)v8,
      v11[0]);
  v4[16] = v14;
  v9 = *(_QWORD *)v11;
  if ( *(_QWORD *)v11 )
  {
    *(_QWORD *)v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  *a2 = (struct BamoWindowsMessageDeliveryProxy *)v4;
  return 0LL;
}
