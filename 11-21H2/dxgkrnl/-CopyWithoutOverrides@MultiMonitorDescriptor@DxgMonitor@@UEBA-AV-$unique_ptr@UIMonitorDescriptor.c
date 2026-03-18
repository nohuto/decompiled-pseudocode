/*
 * XREFs of ?CopyWithoutOverrides@MultiMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C006BD50
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall DxgMonitor::MultiMonitorDescriptor::CopyWithoutOverrides(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  void (__fastcall ***v12)(_QWORD, __int64); // rcx
  void (__fastcall ***v13)(_QWORD, __int64); // rcx
  void (__fastcall ***v15)(_QWORD, __int64); // [rsp+48h] [rbp+10h] BYREF
  void (__fastcall ***v16)(_QWORD, __int64); // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  LODWORD(v15) = 0;
  v7 = (_QWORD *)operator new[](0x28uLL, 0x4D677844u, 256LL, a4);
  if ( v7 )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 16) + 24LL))(
                     *(_QWORD *)(a1 + 16),
                     &v16);
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 8) + 24LL))(
                     *(_QWORD *)(a1 + 8),
                     &v15);
    *v7 = &DxgMonitor::MultiMonitorDescriptor::`vftable';
    v7[1] = *v9;
    v7[2] = *v8;
    v10 = *v9;
    *v9 = 0LL;
    v7[3] = v10;
    v11 = *v8;
    *v8 = 0LL;
    v4 = 3;
    v7[4] = v11;
  }
  else
  {
    v7 = 0LL;
  }
  *a2 = v7;
  if ( (v4 & 2) != 0 )
  {
    v12 = v15;
    v4 &= ~2u;
    v15 = 0LL;
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  if ( (v4 & 1) != 0 )
  {
    v13 = v16;
    v16 = 0LL;
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  return a2;
}
