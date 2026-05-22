/*
 * XREFs of ?SetBootstrapProxy@InputSystemInternalClientConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18013C3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801024F0 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??R?$_Func_class@XAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@std@@QEBAXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z @ 0x18010E4B4 (--R-$_Func_class@XAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@std@@QEBAXAEAV-$ComPtr@V.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VBamoInputSystemInternalProxy@@@WRL@Microsoft@@@Z@std@@@0@@Z @ 0x18013BD5C (--$_Destroy_range@V-$allocator@V-$function@$$A6AXAEAV-$ComPtr@VBamoInputSystemInternalProxy@@@WR.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall InputSystemInternalClientConnection::SetBootstrapProxy(
        InputSystemInternalClientConnection *this,
        struct Microsoft::Bamo::BamoProxy *a2)
{
  __int64 (__fastcall *v4)(struct Microsoft::Bamo::BamoProxy *, GUID *, __int64 *); // rbx
  int v5; // eax
  void (__fastcall ***v6)(__int64); // rbx
  __int64 *v7; // rsi
  __int64 v8; // r14
  __int64 i; // rbx
  int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF
  struct Microsoft::Bamo::BamoProxy *v15; // [rsp+68h] [rbp+20h]

  v15 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct Microsoft::Bamo::BamoProxy *))a2)(a2);
  v13 = 0LL;
  v4 = *(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoProxy *, GUID *, __int64 *))(*(_QWORD *)a2 + 16LL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
  v5 = v4(a2, &GUID_b7d524a8_0636_f4f6_6f1f_62a7ad59b827, &v13);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\system\\inputsysteminternalclientconnection.cpp",
      (const char *)(unsigned int)v5,
      v11);
  v6 = (void (__fastcall ***)(__int64))((v13 - 8) & -(__int64)(v13 != 0));
  v7 = (__int64 *)((char *)this + 248);
  if ( *((void (__fastcall ****)(__int64))this + 31) != v6 )
  {
    if ( v6 )
      (**v6)((v13 - 8) & -(__int64)(v13 != 0));
    v14 = *v7;
    *v7 = (__int64)v6;
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(&v14);
  }
  v8 = *((_QWORD *)this + 33);
  for ( i = *((_QWORD *)this + 32); i != v8; i += 64LL )
    std::_Func_class<void,Microsoft::WRL::ComPtr<DataProviderPrincipal> &>::operator()(i);
  std::_Destroy_range<std::allocator<std::function<void (Microsoft::WRL::ComPtr<BamoInputSystemInternalProxy> &)>>>(
    *((_QWORD *)this + 32),
    *((_QWORD *)this + 33));
  *((_QWORD *)this + 33) = *((_QWORD *)this + 32);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
  (*(void (__fastcall **)(struct Microsoft::Bamo::BamoProxy *))(*(_QWORD *)a2 + 8LL))(a2);
  return 0LL;
}
