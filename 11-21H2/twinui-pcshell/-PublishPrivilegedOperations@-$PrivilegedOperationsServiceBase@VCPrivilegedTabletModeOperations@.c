/*
 * XREFs of ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1800700D4
 * Callers:
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x18006ED14 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedForegroundOperations@.c)
 *     ?SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z @ 0x18006F8C0 (-SubscribeToServices@PrivilegedOperationsService@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x18006E774 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperati.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ebx
  unsigned __int64 v7; // r9
  int v8; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a3 - *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1;
  if ( *a3 == *(_QWORD *)&GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data1 )
    v3 = a3[1] - *(_QWORD *)GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd.Data4;
  if ( v3 )
  {
    v4 = *a3 - *(_QWORD *)&GUID_1258a377_0646_40fd_b5fc_b642b81befba.Data1;
    if ( *a3 == *(_QWORD *)&GUID_1258a377_0646_40fd_b5fc_b642b81befba.Data1 )
      v4 = a3[1] - *(_QWORD *)GUID_1258a377_0646_40fd_b5fc_b642b81befba.Data4;
    if ( v4 )
      return (unsigned int)PrivilegedOperationsServiceBase<PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
                             a1,
                             a2,
                             a3);
    v8 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)a2 + 24LL))(
           a2,
           &GUID_1258a377_0646_40fd_b5fc_b642b81befba,
           *(_QWORD *)(a1 + 32));
    v5 = v8;
    if ( v8 >= 0 )
      return 0;
    v7 = (unsigned int)v8;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x256,
      (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)v7,
      v9);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)a2 + 24LL))(
         a2,
         &GUID_b19132e0_037d_4a7e_ade3_b7ebde5310dd,
         *(_QWORD *)(a1 + 40));
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    goto LABEL_14;
  }
  return 0LL;
}
