/*
 * XREFs of ?Attach@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAXPEAUIImmersiveApplication@@@Z @ 0x1802E19C4
 * Callers:
 *     ??0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@$$QEAU0@@Z @ 0x1802DF380 (--0SERVICE_AVAILABILITY_CHANGED_DATA@@QEAA@$$QEAU0@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IImmersiveApplication>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *a1 = a2;
  return result;
}
