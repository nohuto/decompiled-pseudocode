/*
 * XREFs of ??$make_unique_nothrow@VCThreadRefHost@@A6AJPEAJPEAPEAUIUnknown@@@Z@wil@@YA?AV?$unique_ptr@VCThreadRefHost@@U?$default_delete@VCThreadRefHost@@@wistd@@@wistd@@A6AJPEAJPEAPEAUIUnknown@@@Z@Z @ 0x18017E508
 * Callers:
 *     ?OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ @ 0x18017E460 (-OnImmersiveShellThreadStart@CImmersiveShellCreationBehavior@@UEAAJXZ.c)
 * Callees:
 *     ??$?0$$A6AJPEAJPEAPEAUIUnknown@@@Z@CThreadRefHost@@QEAA@A6AJPEAJPEAPEAUIUnknown@@@Z@Z @ 0x18017E560 (--$-0$$A6AJPEAJPEAPEAUIUnknown@@@Z@CThreadRefHost@@QEAA@A6AJPEAJPEAPEAUIUnknown@@@Z@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
CThreadRefHost **__fastcall wil::make_unique_nothrow<CThreadRefHost,long (&)(long *,IUnknown * *)>(CThreadRefHost **a1)
{
  CThreadRefHost *v2; // rbx
  CThreadRefHost *v3; // rax

  v2 = 0LL;
  v3 = (CThreadRefHost *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
    v2 = CThreadRefHost::CThreadRefHost(v3, (int (*)(int *, struct IUnknown **))SHCreateDUIThreadRef);
  *a1 = v2;
  return a1;
}
