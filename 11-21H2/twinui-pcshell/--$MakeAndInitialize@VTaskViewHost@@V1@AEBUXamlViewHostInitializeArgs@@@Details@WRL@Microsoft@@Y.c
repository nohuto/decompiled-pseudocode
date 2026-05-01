/*
 * XREFs of ??$MakeAndInitialize@VTaskViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x1800521E8
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VTaskViewHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x1800522A8 (--$MakeAndInitializeOrThrow@VTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA-AV-$ComPtr@V.c)
 * Callees:
 *     ??0TaskViewHost@@QEAA@XZ @ 0x1800169FC (--0TaskViewHost@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1800507F8 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TaskViewHost,TaskViewHost,XamlViewHostInitializeArgs const &>(
        TaskViewHost **a1,
        const struct XamlViewHostInitializeArgs *a2)
{
  TaskViewHost *v4; // rax
  TaskViewHost *v5; // rdi
  int v6; // esi
  TaskViewHost *v8; // [rsp+50h] [rbp+18h] BYREF
  TaskViewHost *v9; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = (TaskViewHost *)operator new(0x2E8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v4;
  if ( v4 )
  {
    v9 = v4;
    v5 = TaskViewHost::TaskViewHost(v4);
    v8 = v5;
    v6 = TaskViewHost::RuntimeClassInitialize(v5, a2);
    if ( v6 >= 0 )
    {
      if ( v5 )
        (*(void (__fastcall **)(TaskViewHost *))(*(_QWORD *)v5 + 8LL))(v5);
      *a1 = v5;
      v6 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
