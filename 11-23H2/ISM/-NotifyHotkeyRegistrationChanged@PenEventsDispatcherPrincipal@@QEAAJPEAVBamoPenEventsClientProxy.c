/*
 * XREFs of ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x1801AECF4
 * Callers:
 *     ?NotifyHotkeyRegistrationChanged@PenEventsClientCustomProxy@@AEAAJW4PenHotkeyId@@_N@Z @ 0x1801AECAC (-NotifyHotkeyRegistrationChanged@PenEventsClientCustomProxy@@AEAAJW4PenHotkeyId@@_N@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x180044C70 (-GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x180114DBC (-ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAG.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18014B5C8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_poli.c)
 *     ??1?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18019BD84 (--1-$vector@V-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 *     ?GetShellClients@PenEventsDispatcherPrincipal@@AEAA?AV?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1801AE9A8 (-GetShellClients@PenEventsDispatcherPrincipal@@AEAA-AV-$vector@V-$com_ptr_t@VPenEventsClientCust.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenEventsDispatcherPrincipal::NotifyHotkeyRegistrationChanged(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int8 a4)
{
  int v4; // r14d
  __int64 v5; // rsi
  __int64 *i; // rax
  HotkeyRegistrationForwarder *HotkeyRegistrationForwarder; // rax
  __int64 v10; // r8
  int v11; // eax
  __int64 *v13; // [rsp+20h] [rbp-30h] BYREF
  __int64 *v14; // [rsp+28h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-20h]
  _DWORD v16[3]; // [rsp+38h] [rbp-18h] BYREF
  __int16 v17; // [rsp+44h] [rbp-Ch]
  char v18; // [rsp+46h] [rbp-Ah]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v4 = a4;
  v5 = a3;
  if ( IsEdition(8778LL) )
  {
    PenEventsDispatcherPrincipal::GetShellClients(a1, (__int64)&v13);
    for ( i = v13; i != v14; ++i )
    {
      if ( *i == a2 )
      {
        std::vector<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>::~vector<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>((__int64)&v13);
        return 0LL;
      }
    }
    v16[0] = v4;
    v16[1] = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a2 + 32) + 16LL) + 8LL))(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 16LL))
                       + 32);
    v16[2] = 0;
    v17 = *((_WORD *)&PenEventsDispatcherPrincipal::s_hotkeyList + 2 * v5);
    v18 = *((_BYTE *)&PenEventsDispatcherPrincipal::s_hotkeyList + 4 * v5 + 2);
    HotkeyRegistrationForwarder = ISMStatics::GetHotkeyRegistrationForwarder();
    v11 = HotkeyRegistrationForwarder::ForwardHotkeyRegistration(
            HotkeyRegistrationForwarder,
            (const struct _MIT_HOTKEY_REGISTRATION_MESSAGE *)v16,
            v10);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        304LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\events\\server\\peneventsdi"
                 "spatcherprincipal.cpp",
        (const char *)(unsigned int)v11);
    if ( v13 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoSystemContextEndpointProxy,wil::err_exception_policy>>>(
        v13,
        v14);
      std::_Deallocate<16,0>(v13, (v15 - (_QWORD)v13) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
  return 0LL;
}
