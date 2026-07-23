/*
 * XREFs of sub_1403D8548 @ 0x1403D8548
 * Callers:
 *     KeAllocateProcessorProfileStructures @ 0x1403D83A0 (KeAllocateProcessorProfileStructures.c)
 *     sub_14056A228 @ 0x14056A228 (sub_14056A228.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1403D8548(__int64 a1)
{
  unsigned __int64 v1; // rax
  bool result; // al

  result = 0;
  if ( *(_BYTE *)(a1 + 141) == 2 )
  {
    v1 = __readmsr(0x1A0u);
    if ( (v1 & 0x1080) == 0x80 )
      return 1;
  }
  return result;
}
