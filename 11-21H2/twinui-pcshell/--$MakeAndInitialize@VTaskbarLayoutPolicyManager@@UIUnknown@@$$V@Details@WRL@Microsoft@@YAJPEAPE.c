/*
 * XREFs of ??$MakeAndInitialize@VTaskbarLayoutPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180145B5C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTaskbarLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180145AE0 (-CreateInstance@-$SimpleClassFactory@VTaskbarLayoutPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUI.c)
 * Callees:
 *     ?RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ @ 0x180145CB4 (-RuntimeClassInitialize@TaskbarLayoutPolicyManager@@QEAAJXZ.c)
 *     ??0TaskbarLayoutPolicyManager@@QEAA@XZ @ 0x180145EF4 (--0TaskbarLayoutPolicyManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TaskbarLayoutPolicyManager,IUnknown,>(_QWORD *a1)
{
  TaskbarLayoutPolicyManager *v2; // rax
  TaskbarLayoutPolicyManager *v3; // rdi
  int v4; // esi

  *a1 = 0LL;
  v2 = (TaskbarLayoutPolicyManager *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = TaskbarLayoutPolicyManager::TaskbarLayoutPolicyManager(v2);
    v4 = TaskbarLayoutPolicyManager::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(TaskbarLayoutPolicyManager *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(TaskbarLayoutPolicyManager *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
