/*
 * XREFs of AmdPctProbePlatformCtr @ 0x1C00208D8
 * Callers:
 *     AmdPctDiscoverCounters @ 0x1C00205D4 (AmdPctDiscoverCounters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 */

char __fastcall AmdPctProbePlatformCtr(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  char result; // al
  char v7; // cl
  unsigned __int8 v8; // cl

  v5 = *(unsigned int *)(a2 + 4);
  if ( !*(_DWORD *)(a1 + 80) )
  {
    *a3 = __readmsr(v5);
    result = 1;
LABEL_6:
    if ( !result )
      return result;
    goto LABEL_7;
  }
  if ( (int)((__int64 (__fastcall *)(_QWORD, __int64))qword_1C0012890)(*(unsigned int *)(a1 + 84), v5) < 0 )
  {
    result = 0;
    goto LABEL_6;
  }
  result = 1;
LABEL_7:
  v7 = *(_BYTE *)(a2 + 2);
  if ( v7 )
    *a3 >>= v7;
  v8 = *(_BYTE *)(a2 + 1);
  if ( v8 < 0x40u )
    *a3 &= (1LL << v8) - 1;
  return result;
}
