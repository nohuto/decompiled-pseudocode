/*
 * XREFs of ?QueryInterface@DockProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BAB50
 * Callers:
 *     ?QueryInterface@DockProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180053C40 (-QueryInterface@DockProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DockProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180053C60 (-QueryInterface@DockProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DockProcessor::QueryInterface(DockProcessor *this, const struct _GUID *a2, void **a3)
{
  __int64 v6; // rax

  if ( !a3 )
    return 2147942487LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v6 )
    return 2147500034LL;
  (*(void (__fastcall **)(DockProcessor *))(*(_QWORD *)this + 8LL))(this);
  *a3 = (char *)this + 16;
  return 0LL;
}
