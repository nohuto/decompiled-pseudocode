/*
 * XREFs of HalpDmaPrependTranslations @ 0x14045C156
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14045B93E (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x1405105C4 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 *     HalpDmaCommitScatterMapBuffers @ 0x140510B04 (HalpDmaCommitScatterMapBuffers.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1409342E8 (HalpDmaAllocateLocalScatterPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaPrependTranslations(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  v3 = a1;
  v4 = (unsigned int)(a2 - 1);
  if ( (_DWORD)v4 )
  {
    do
    {
      v3 = *(_QWORD *)(v3 + 8);
      --v4;
    }
    while ( v4 );
  }
  *(_QWORD *)(v3 + 8) = a3;
  return a1;
}
