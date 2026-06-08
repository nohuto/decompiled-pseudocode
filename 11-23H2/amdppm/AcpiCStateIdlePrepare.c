/*
 * XREFs of AcpiCStateIdlePrepare @ 0x1C0004B20
 * Callers:
 *     PepIdlePrepare @ 0x1C000A130 (PepIdlePrepare.c)
 * Callees:
 *     AcpiCStatePreselect @ 0x1C0004BD0 (AcpiCStatePreselect.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiCStateIdlePrepare(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 i; // rcx

  v1 = *(_DWORD **)a1;
  result = AcpiCStatePreselect(*(_QWORD *)a1, a1 + 8);
  v4 = (unsigned int)v1[3];
  LODWORD(v5) = v1[4];
  for ( i = (__int64)&v1[22 * v4 + 16]; (_DWORD)v4; i = (__int64)&v1[22 * v4 + 16] )
  {
    result = *(_QWORD *)(i + 16);
    if ( !result )
      break;
    result = ((__int64 (__fastcall *)(__int64))result)(i + 32);
    if ( (int)result >= 0 )
      break;
    v5 = (unsigned int)(v5 - 1);
    result = (unsigned int)(1 << v4);
    *(_DWORD *)(a1 + 80) |= result;
    v4 = *((unsigned __int8 *)v1 + v5 + 21);
  }
  v1[2] = v4;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 76) = v4;
  return result;
}
