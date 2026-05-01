/*
 * XREFs of sub_180010420 @ 0x180010420
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011BC4 @ 0x180011BC4 (sub_180011BC4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180010420(__int64 a1, __int64 a2)
{
  FARPROC RtlDisownModuleHeapAllocation; // rax
  unsigned int v3; // ebx
  HMODULE v6; // rax

  RtlDisownModuleHeapAllocation = (FARPROC)qword_1800329E0;
  v3 = 0;
  if ( qword_1800329E0 )
    return ((unsigned int (__fastcall *)(__int64, __int64))RtlDisownModuleHeapAllocation)(a1, a2);
  v6 = (HMODULE)sub_180011BC4();
  RtlDisownModuleHeapAllocation = GetProcAddress(v6, "RtlDisownModuleHeapAllocation");
  qword_1800329E0 = (__int64)RtlDisownModuleHeapAllocation;
  if ( RtlDisownModuleHeapAllocation )
    return ((unsigned int (__fastcall *)(__int64, __int64))RtlDisownModuleHeapAllocation)(a1, a2);
  return v3;
}
