/*
 * XREFs of ??$MakeAndInitialize@VTaskbarLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTaskbarLayoutParser@@@Z @ 0x18031A738
 * Callers:
 *     ?TaskbarLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18031CDC8 (-TaskbarLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0TaskbarLayoutParser@@QEAA@XZ @ 0x18031B1D4 (--0TaskbarLayoutParser@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ @ 0x18031CC5C (-RuntimeClassInitialize@TaskbarLayoutParser@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TaskbarLayoutParser,TaskbarLayoutParser,>(
        TaskbarLayoutParser **a1)
{
  TaskbarLayoutParser *v2; // rax
  int v3; // edi
  TaskbarLayoutParser *v4; // rsi
  TaskbarLayoutParser *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v2 = (TaskbarLayoutParser *)operator new(0xB8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = TaskbarLayoutParser::TaskbarLayoutParser(v2);
    v6 = v4;
    v7 = 0LL;
    v3 = TaskbarLayoutParser::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(TaskbarLayoutParser *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
