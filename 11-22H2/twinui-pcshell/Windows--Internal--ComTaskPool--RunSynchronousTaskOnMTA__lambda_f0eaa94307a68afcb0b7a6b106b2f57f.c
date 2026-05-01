/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f0eaa94307a68afcb0b7a6b106b2f57f___ @ 0x18004172C
 * Callers:
 *     ?OnWindowVisibilityChanged@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIWindowVisibilityChangedEventArgs@3456@@Z @ 0x1800416F0 (-OnWindowVisibilityChanged@UwpWindowManagerBridge@@AEAAJPEAUIWindowWatcher@WindowManagement@Appl.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f0eaa94307a68afcb0b7a6b106b2f57f___(
        unsigned int a1,
        unsigned int a2,
        _OWORD *a3)
{
  unsigned int v5; // edi
  _OWORD *v6; // rax
  _OWORD *v7; // rbx
  int v8; // edi
  APTTYPEQUALIFIER v10[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v12, v10) < 0 || !v12 || v12 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v11 = 0;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v6);
    v7[1] = *a3;
    *(_QWORD *)v7 = off_1807B06A8;
    *((_QWORD *)v7 + 4) = &v11;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = SHTaskPoolQueueTask(v5, 32LL, a2);
  if ( v7 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 >= 0 )
    return v11;
  return (unsigned int)v8;
}
