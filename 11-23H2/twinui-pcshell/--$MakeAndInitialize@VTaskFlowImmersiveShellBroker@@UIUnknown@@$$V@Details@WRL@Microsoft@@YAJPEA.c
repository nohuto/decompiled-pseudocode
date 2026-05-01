/*
 * XREFs of ??$MakeAndInitialize@VTaskFlowImmersiveShellBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18010BA2C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTaskFlowImmersiveShellBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18010B9B0 (-CreateInstance@-$SimpleClassFactory@VTaskFlowImmersiveShellBroker@@$0A@@WRL@Microsoft@@UEAAJPEA.c)
 * Callees:
 *     ??0TaskFlowImmersiveShellBroker@@QEAA@XZ @ 0x18010BAF0 (--0TaskFlowImmersiveShellBroker@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x18010BBEC (-RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TaskFlowImmersiveShellBroker,IUnknown,>(_QWORD *a1)
{
  TaskFlowImmersiveShellBroker *v2; // rax
  TaskFlowImmersiveShellBroker *v3; // rdi
  int v4; // esi

  *a1 = 0LL;
  v2 = (TaskFlowImmersiveShellBroker *)operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = TaskFlowImmersiveShellBroker::TaskFlowImmersiveShellBroker(v2);
    v4 = TaskFlowImmersiveShellBroker::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(TaskFlowImmersiveShellBroker *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(TaskFlowImmersiveShellBroker *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
