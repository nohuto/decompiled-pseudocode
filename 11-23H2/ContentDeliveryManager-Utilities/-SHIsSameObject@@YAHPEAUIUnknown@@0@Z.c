/*
 * XREFs of ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800A76E0
 * Callers:
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x1800A5850 (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 * Callees:
 *     ??$QueryInterface@UIUnknown@@@IUnknown@@QEAAJPEAPEAU0@@Z @ 0x180027D78 (--$QueryInterface@UIUnknown@@@IUnknown@@QEAAJPEAPEAU0@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SHIsSameObject(struct IUnknown *a1, struct IUnknown *a2)
{
  unsigned int v2; // ebx
  int v5; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( !a1 || !a2 )
    return 0LL;
  if ( a1 == a2 )
    return 1LL;
  v7 = 0LL;
  v6 = 0LL;
  if ( (int)IUnknown::QueryInterface<IUnknown>(a1, (__int64)&v7) >= 0 )
  {
    v5 = IUnknown::QueryInterface<IUnknown>(a2, (__int64)&v6);
    if ( v5 >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v5 >= 0 && v7 == v6 )
      return 1;
  }
  return v2;
}
