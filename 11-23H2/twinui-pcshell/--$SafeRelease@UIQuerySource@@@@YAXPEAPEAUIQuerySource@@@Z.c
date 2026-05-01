/*
 * XREFs of ??$SafeRelease@UIQuerySource@@@@YAXPEAPEAUIQuerySource@@@Z @ 0x1804FE768
 * Callers:
 *     ??1CWRLExecuteCommandBase@@MEAA@XZ @ 0x1804FEA28 (--1CWRLExecuteCommandBase@@MEAA@XZ.c)
 *     ?SetAssocElement@CWRLExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z @ 0x1804FF660 (-SetAssocElement@CWRLExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SafeRelease<IQuerySource>(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
