/*
 * XREFs of ?OnOverrideImmunityChanged@CImmersiveWindowManager@@UEAAXPEAUIImmersiveApplicationInternal@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@@Z @ 0x1802EECA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800746A0 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1802EC2B8 (WPP_SF_.c)
 *     WPP_SF_L @ 0x1802EF184 (WPP_SF_L.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::OnOverrideImmunityChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 result; // rax
  unsigned int v8; // ebx
  void (__fastcall *v9)(__int64, __int64 *); // rbx
  __int64 *AddressOf; // rax
  struct IImmersiveMonitor *v11; // [rsp+48h] [rbp+10h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 400LL))(a2);
  if ( (_BYTE)result )
  {
    if ( a4 == 1 )
    {
      v8 = 2;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_07b3670f9f4439827ac38cdc0ee4b4bb_Traceguids);
    }
    else
    {
      v11 = 0LL;
      v9 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 464LL);
      AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf((__int64 *)&v11);
      v9(a2, AddressOf);
      v8 = (CReportWindowVisibilityChange::IsReportingEnabled(
              (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
              (struct IUnknown *)v11,
              0LL) != 0)
         + 1;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_L(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_07b3670f9f4439827ac38cdc0ee4b4bb_Traceguids, v8);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v11);
    }
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int))(*(_QWORD *)a2 + 264LL))(a2, v8, a3, a4, 1);
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 272LL))(a2, a3, a4);
  }
  return result;
}
