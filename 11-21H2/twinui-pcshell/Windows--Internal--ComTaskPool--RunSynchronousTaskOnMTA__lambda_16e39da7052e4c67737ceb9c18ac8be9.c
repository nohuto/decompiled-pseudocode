/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_16e39da7052e4c67737ceb9c18ac8be9___ @ 0x1801526AC
 * Callers:
 *     ?AddDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@UtagRECT@@H@Z @ 0x180152590 (-AddDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@UtagRECT@@H@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9_____lambda_16e39da7052e4c67737ceb9c18ac8be9___ @ 0x180152784 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c_ea_180152784.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_16e39da7052e4c67737ceb9c18ac8be9___(
        unsigned int a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v5; // ebx
  void *v6; // rax
  __int64 v7; // rdi
  int v8; // ebx
  APTTYPEQUALIFIER v10[6]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v12, v10) < 0 || !v12 || v12 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v11 = 0;
  v6 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9_____lambda_16e39da7052e4c67737ceb9c18ac8be9___(
           v6,
           &v11,
           a3);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(v5, 32LL, a2, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 >= 0 )
    return v11;
  return (unsigned int)v8;
}
