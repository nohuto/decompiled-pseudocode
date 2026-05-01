/*
 * XREFs of ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x1800D6A64
 * Callers:
 *     ?PublishPrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowingOperations@@@@IEAAJPEAUIPrivilegedOperationsConsumer@@AEBU_GUID@@@Z @ 0x18006E774 (-PublishPrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperati.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedWindowingOperations>::PublishPrivilegedOperations(
        __int64 a1,
        const char *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a3 - *(_QWORD *)&GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b.Data1;
  if ( *a3 == *(_QWORD *)&GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b.Data1 )
    v3 = a3[1] - *(_QWORD *)GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b.Data4;
  if ( v3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x22D,
      (unsigned int)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      a2);
  v4 = (*(__int64 (__fastcall **)(const char *, GUID *, _QWORD))(*(_QWORD *)a2 + 24LL))(
         a2,
         &GUID_cd3d4fae_01e6_473b_ad74_73f37cd2b64b,
         *(_QWORD *)(a1 + 8));
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x256,
    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
