/*
 * XREFs of ??$MakeAndInitialize@VTaskViewHost@@V1@AEBUXamlViewHostInitializeArgs@@@Details@WRL@Microsoft@@YAJPEAPEAVTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18004C08C
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA?AV?$ComPtr@VTaskViewHost@@@WRL@Microsoft@@AEBUXamlViewHostInitializeArgs@@@Z @ 0x18004C038 (--$MakeAndInitializeOrThrow@VTaskViewHost@@AEBUXamlViewHostInitializeArgs@@@wil@@YA-AV-$ComPtr@V.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0TaskViewHost@@QEAA@XZ @ 0x180077A1C (--0TaskViewHost@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x180079BB0 (-RuntimeClassInitialize@TaskViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
  v4 = (TaskViewHost *)operator new(0x2F0uLL, (const struct std::nothrow_t *)&std::nothrow);
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
