/*
 * XREFs of PctProbePlatformCtr @ 0x1C0026064
 * Callers:
 *     PctDiscoverPlatformCtrs @ 0x1C0025F30 (PctDiscoverPlatformCtrs.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 */

char __fastcall PctProbePlatformCtr(__int64 a1, __int64 a2, _QWORD *a3)
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
    goto LABEL_3;
  }
  if ( (int)((__int64 (__fastcall *)(_QWORD, __int64))qword_1C001F3D0)(*(unsigned int *)(a1 + 84), v5) < 0 )
  {
    result = 0;
LABEL_3:
    if ( !result )
      return result;
    goto LABEL_4;
  }
  result = 1;
LABEL_4:
  v7 = *(_BYTE *)(a2 + 2);
  if ( v7 )
    *a3 >>= v7;
  v8 = *(_BYTE *)(a2 + 1);
  if ( v8 < 0x40u )
    *a3 &= (1LL << v8) - 1;
  return result;
}
