/*
 * XREFs of ??4?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801CDAFC
 * Callers:
 *     ?OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801CDEB0 (-OnHitTest@MagnifierProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 *     ?RuntimeClassInitialize@MagnifierGestureTarget@@QEAAJV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@V?$ComPtr@VInputSite@@@34@W4GestureType@1@@Z @ 0x1801CF060 (-RuntimeClassInitialize@MagnifierGestureTarget@@QEAAJV-$ComPtr@VMagnifierControllerProxy@@@WRL@M.c)
 *     ?RuntimeClassInitialize@MagnifierToggleTarget@@QEAAJV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@V?$ComPtr@VInputSite@@@34@@Z @ 0x1801CF134 (-RuntimeClassInitialize@MagnifierToggleTarget@@QEAAJV-$ComPtr@VMagnifierControllerProxy@@@WRL@Mi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<MagnifierControllerProxy>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax

  v3 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v3 )
      (**(void (__fastcall ***)(__int64))(v3 + 16))(v3 + 16);
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v4 + 16) + 8LL))(v4 + 16);
  }
  return a1;
}
