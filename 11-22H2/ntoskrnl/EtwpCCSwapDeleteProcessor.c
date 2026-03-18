/*
 * XREFs of EtwpCCSwapDeleteProcessor @ 0x14060427C
 * Callers:
 *     EtwInitializeProcessor @ 0x14081FD58 (EtwInitializeProcessor.c)
 *     EtwDeleteProcessor @ 0x1409E1E58 (EtwDeleteProcessor.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCCSwapDeleteProcessor(__int64 a1)
{
  PVOID *v1; // rbx
  __int64 v2; // rdi

  v1 = (PVOID *)(a1 + 392);
  v2 = 5LL;
  do
  {
    if ( *v1 )
      ExFreePoolWithTag(*v1, 0);
    ++v1;
    --v2;
  }
  while ( v2 );
}
