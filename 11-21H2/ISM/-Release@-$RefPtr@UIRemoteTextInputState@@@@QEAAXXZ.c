/*
 * XREFs of ?Release@?$RefPtr@UIRemoteTextInputState@@@@QEAAXXZ @ 0x1801D744C
 * Callers:
 *     ??1TextInputStateAdapter@@EEAA@XZ @ 0x1801D5A20 (--1TextInputStateAdapter@@EEAA@XZ.c)
 *     ?Dispose@TextInputStateAdapter@@UEAAJXZ @ 0x1801D5B00 (-Dispose@TextInputStateAdapter@@UEAAJXZ.c)
 *     ?OnDisconnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801D63D0 (-OnDisconnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RefPtr<IRemoteTextInputState>::Release(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
