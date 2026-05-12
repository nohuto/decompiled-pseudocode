/*
 * XREFs of sub_1C0041748 @ 0x1C0041748
 * Callers:
 *     sub_1C00A84AC @ 0x1C00A84AC (sub_1C00A84AC.c)
 *     sub_1C00AB070 @ 0x1C00AB070 (sub_1C00AB070.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C0041748(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d

  v2 = -1073741822;
  if ( !byte_1C0093BC0 && byte_1C0093BC1 )
  {
    _InterlockedIncrement(&dword_1C0093B5C);
    v2 = ((__int64 (__fastcall *)(__int64, __int64, int *))qword_1C0093CA0)(a1, a2, &dword_1C0093000);
    _InterlockedDecrement(&dword_1C0093B5C);
  }
  return v2;
}
