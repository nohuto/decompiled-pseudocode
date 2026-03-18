/*
 * XREFs of IommupHvUnmapDeviceLogicalRange @ 0x140527C44
 * Callers:
 *     HalpIommuDomainUnmapLogicalRange @ 0x14051AD44 (HalpIommuDomainUnmapLogicalRange.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvUnmapDeviceLogicalRange(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(unsigned int *)(BugCheckParameter3 + 48);
  result = ((__int64 (__fastcall *)(__int64 *))qword_140C4C618)(&v5);
  if ( (int)result < 0 )
    KeBugCheckEx(0x1D9u, 1uLL, (int)result, BugCheckParameter3, BugCheckParameter4);
  return result;
}
