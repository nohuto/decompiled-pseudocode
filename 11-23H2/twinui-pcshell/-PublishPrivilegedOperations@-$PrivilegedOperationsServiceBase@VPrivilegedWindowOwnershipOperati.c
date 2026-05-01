/*
 * XREFs of ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1800F8B64
 * Callers:
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1800F8A44 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedTabletModeOperations@.c)
 * Callees:
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1800F84C8 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations,PrivilegedWindowingOperations>::PublishPrivilegedOperations(
        __int64 a1,
        const char *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ebx
  unsigned __int64 v7; // r9
  int v8; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a3 - *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1;
  if ( *a3 == *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1 )
    v3 = a3[1] - *(_QWORD *)GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data4;
  if ( v3 )
  {
    v4 = *a3 - *(_QWORD *)&GUID_a993a76e_0909_48bb_b0e9_4d8236263896.Data1;
    if ( *a3 == *(_QWORD *)&GUID_a993a76e_0909_48bb_b0e9_4d8236263896.Data1 )
      v4 = a3[1] - *(_QWORD *)GUID_a993a76e_0909_48bb_b0e9_4d8236263896.Data4;
    if ( v4 )
      return (unsigned int)PrivilegedOperationsServiceBase<PrivilegedWindowingOperations>::PublishPrivilegedOperations(
                             a1,
                             a2,
                             a3);
    v8 = (*(__int64 (__fastcall **)(const char *, GUID *, _QWORD))(*(_QWORD *)a2 + 24LL))(
           a2,
           &GUID_a993a76e_0909_48bb_b0e9_4d8236263896,
           *(_QWORD *)(a1 + 16));
    v5 = v8;
    if ( v8 >= 0 )
      return 0;
    v7 = (unsigned int)v8;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25E,
      (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)v7,
      v9);
    return (unsigned int)v5;
  }
  v5 = (*(__int64 (__fastcall **)(const char *, GUID *, _QWORD))(*(_QWORD *)a2 + 24LL))(
         a2,
         &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c,
         *(_QWORD *)(a1 + 24));
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    goto LABEL_14;
  }
  return 0LL;
}
