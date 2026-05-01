/*
 * XREFs of ?GetRuntimeSiteAggregator@XamlExplorerHost@@AE$AAA?AV?$ComPtr@UIObjMgr@@@WRL@Microsoft@@XZ @ 0x180063244
 * Callers:
 *     ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x180062B98 (-EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ.c)
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x1800633AC (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 * Callees:
 *     std::call_once__lambda_9aec6bd35f9c536ea023e18c5cb1b91c___ @ 0x1800632D8 (std--call_once__lambda_9aec6bd35f9c536ea023e18c5cb1b91c___.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall XamlExplorerHost::GetRuntimeSiteAggregator(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  _QWORD *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v4 = __abi_winrt_ptr_ctor(a1);
  v7 = (_QWORD *)v4;
  std::call_once__lambda_9aec6bd35f9c536ea023e18c5cb1b91c___(a1 + 56, &v7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *(_QWORD *)(a1 + 48);
  *a2 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return a2;
}
