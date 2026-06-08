/*
 * XREFs of PepIdleAvailabilityCheck @ 0x1C00094F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepIdleAvailabilityCheck(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  int (__fastcall *v4)(__int64); // rax

  v2 = 0;
  v3 = 88LL * a2;
  if ( *(_BYTE *)(v3 + a1 + 144) )
  {
    if ( *(_QWORD *)(v3 + a1 + 88) )
    {
      v4 = *(int (__fastcall **)(__int64))(v3 + a1 + 80);
      if ( v4 && v4(v3 + a1 + 96) < 0 )
        return (unsigned int)-2147483639;
    }
    else
    {
      return (unsigned int)-2147483638;
    }
  }
  return v2;
}
