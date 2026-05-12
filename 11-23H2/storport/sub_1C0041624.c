/*
 * XREFs of sub_1C0041624 @ 0x1C0041624
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B9D0 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1C0041624()
{
  unsigned int v0; // ecx

  v0 = -1073741822;
  if ( !byte_1C0093BC0 && byte_1C0093BC1 )
  {
    _InterlockedIncrement(&dword_1C0093B5C);
    v0 = ((__int64 (__fastcall *)(int *))qword_1C0093CC8)(&dword_1C0093038);
    _InterlockedDecrement(&dword_1C0093B5C);
  }
  return v0;
}
