/*
 * XREFs of sub_18000F050 @ 0x18000F050
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FEFC @ 0x18000FEFC (sub_18000FEFC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000F050(__int64 a1, __int64 a2)
{
  FARPROC RtlDisownModuleHeapAllocation; // rax
  unsigned int v5; // ebx
  HMODULE v6; // rax

  RtlDisownModuleHeapAllocation = (FARPROC)qword_1801D3378;
  v5 = 0;
  if ( qword_1801D3378 )
    return ((unsigned int (__fastcall *)(__int64, __int64))RtlDisownModuleHeapAllocation)(a1, a2);
  v6 = (HMODULE)sub_18000FEFC();
  RtlDisownModuleHeapAllocation = GetProcAddress(v6, "RtlDisownModuleHeapAllocation");
  qword_1801D3378 = (__int64)RtlDisownModuleHeapAllocation;
  if ( RtlDisownModuleHeapAllocation )
    return ((unsigned int (__fastcall *)(__int64, __int64))RtlDisownModuleHeapAllocation)(a1, a2);
  return v5;
}
