/*
 * XREFs of AcpiGetDeviceResetStatus @ 0x1C0052090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiGetDeviceResetStatus(__int64 a1, _BYTE *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 80);
  v7 = 0;
  if ( !v6
    || (result = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(v6 + 72))(*(_QWORD *)(v6 + 8), a2),
        v7 = result,
        (int)result < 0)
    || !*a2 )
  {
    if ( *(int *)a1 <= 0 )
    {
      *a2 = 0;
      result = v7;
      *a3 = 0LL;
      *a4 = 0LL;
    }
    else
    {
      *a2 = 1;
      *a3 |= 2uLL;
      if ( *(_BYTE *)(a1 + 18) )
        *a4 |= 4uLL;
      return 0LL;
    }
  }
  return result;
}
