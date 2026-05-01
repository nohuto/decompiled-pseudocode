/*
 * XREFs of AslFileFreeAttributes @ 0x18009A814
 * Callers:
 *     SdbpCheckAllAttributes @ 0x180092EAC (SdbpCheckAllAttributes.c)
 * Callees:
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void *__fastcall AslFileFreeAttributes(char *a1)
{
  char *v2; // rbx
  __int64 v3; // rsi
  void *result; // rax

  if ( a1 )
  {
    v2 = a1 + 16;
    v3 = 34LL;
    do
    {
      if ( (v2[8] & 1) != 0 && *((_DWORD *)v2 - 4) == 4 && (v2[8] & 4) != 0 )
      {
        if ( *(_QWORD *)v2 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)v2);
      }
      v2 += 32;
      --v3;
    }
    while ( v3 );
    return memset_0(a1, 0, 0x440uLL);
  }
  return result;
}
