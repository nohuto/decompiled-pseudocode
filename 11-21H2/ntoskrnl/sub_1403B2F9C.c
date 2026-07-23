/*
 * XREFs of sub_1403B2F9C @ 0x1403B2F9C
 * Callers:
 *     sub_140A53F54 @ 0x140A53F54 (sub_140A53F54.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 */

__int64 __fastcall sub_1403B2F9C(_BYTE *a1, char a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edi
  __int64 result; // rax

  v2 = 0;
  v5 = 2;
  while ( a2 || v2 < 0x2710 )
  {
    if ( *a1 )
    {
      if ( a2 || (v5 = 3, v2 < 0x190) )
        v5 = 4;
      break;
    }
    KeStallExecutionProcessor(0x3E8u);
    ++v2;
  }
  result = v5;
  dword_140C4E20C = v2;
  return result;
}
